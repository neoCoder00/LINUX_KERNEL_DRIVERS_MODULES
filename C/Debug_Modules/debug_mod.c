#include <linux/init.h> //header file that provides the module_init() & module_exit() initialize & clean up macros.
#include <linux/module.h> //

/*
#include <linux/module.h> //
 header which gets used for module builds 
 the header which is part of the kernel source. 

 When modules are built in the kernel source tree, that’s the 
 kernel source version which is used.
*/

#include <linux/printk.h> //header for printing data to the kernel ring buffer.

static int __init; init_mod(void){
    pr_info("linux kernel module init\n");
    return 0;
}

static void __exit; exit_mod(void){
    pr_info("linux kernel module init\n");
    
}

module_init(init_mod);
module_exit(init_mod);



MODULE_LICENSE("GPL");//SPECIFIES THE LICENSE TYPE.
MODULE_AUTHOR("LINUX-USER");//ADDS KERNEL AUTHOR.
MODULE_DESCRIPTION("TEST LOADABLE KERNEL MODULE");//DESCRIBES WHAT KERNEL MODULE DOES.
MODULE_VERSION("1.0");//MODULE VERSION
