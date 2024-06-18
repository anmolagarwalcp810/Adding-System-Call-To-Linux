#include <linux/kernel.h>

asmlinkage long __x64_sys_mySyscall(void){
	//printk prints to the kernel's log file
	printk("Hello world This is anmol.0327\n");
	return 0;
}
