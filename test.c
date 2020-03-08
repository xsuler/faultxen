#include <sys/ioctl.h>
#include <linux/types.h>
#include <fcntl.h>
#include <xenctrl.h>
#include <xen/sys/privcmd.h>
#include <errno.h>
#include <xen/xen.h>
#include <libexplain/ioctl.h>

int main(){
	int fd;
	int ret;
	privcmd_hypercall_t myh={
		__HYPERVISOR_set_fault,
		{(long long int)1,0,0,0,0}
		};
	fd=open("/proc/xen/privcmd",O_RDWR);
	if(fd<0){
		perror("cannot open privcmd");
		return 0;
	}
	ret=ioctl(fd,IOCTL_PRIVCMD_HYPERCALL, &myh);
	printf("status : %d\n",ret);
	printf("%s\n", explain_ioctl(fd,IOCTL_PRIVCMD_HYPERCALL, &myh));
	return 0;
	

}
