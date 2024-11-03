#include <linux/init.h>
/*
    <linux/init.h> 
    
    This header file provides specific macros and functions for defining initialization and cleanup functions.

    - __init macros - used to mark initialization functionality.
    
    - __exit macros - used to mark cleanup functionality.

    - __init macros & __exit macros - macros can help optimize memory usage by discarding 
    the code once it's no longer needed.
    
        - (e.g., freeing up the init section after the module has been loaded).

    - modules_init() - necessary to mark the modules entry point.

    - module_exit() - necessary to mark the modules exit point.
*/


#include <linux/module.h>
/*  
    <linux/module.h>

    This header file provides crucial infrastructure for defining kernel modules, including 
    macros, data structures and functionality needed for creating and managing 
    kernel modules.

    - modules_init() macros - necessary to mark the modules entry point.

    - module_exit() macros - necessary to mark the modules exit point.

    - MODULE_LICENSE, MODULE_AUTHOR, and other metadata macros to provide information about the module.

    <linux/module.h>

    - header file recognizes the code as a module and performs registration and cleanup when the module
    is loaded and unloaded.

*/

#include <linux/kernel.h>
/*
    #include <linux/kernel.h>
    
    
    - 
*/

/*

 1688  echo "# LINUX_KERNEL_DRIVERS_MODULES" >> README.md
 1689  git init
 1690  git add README.md
 1691  git commit -m "first commit"
 1692  git branch -M main
 1693  git remote add origin https://github.com/neoCoder00/LINUX_KERNEL_DRIVERS_MODULES.git
 1694  git push -u origin main

*/







MODULE_LICENSE("GPL");//SPECIFIES THE LICENSE TYPE.
MODULE_AUTHOR("LINUX-USER");//ADDS KERNEL AUTHOR.
MODULE_DESCRIPTION("TEST LOADABLE KERNEL MODULE");//DESCRIBES WHAT KERNEL MODULE DOES.
MODULE_VERSION("1.0");//MODULE VERSION

//START FUNCTION THAT INITIALIZES/LOADS AND LOADS THE KERNEL MODULE.
static int test_lkm_INIT(void){
    printk("test module initialized\n");
    // test_fn() - embed a function into the kernel STAR function & add test_fn.o to -objs line of Makefile.
    return 0;
}

//END/CLEANUP FUNCTION THAT DISABLES/REMOVES THE KERNEL MODULE.
static void test_lkm_EXIT(void){
    printk("test module exited\n");

}

/*
    MACROS - macros are labled fragments of code in a program that are assigned a value.

            - macros play an essential role in preprocessing by performing text substitution and code generation.

            - allows developers to define reusable pieces of code, constants, and even function-like constructs.

            - utilizing macros can lead to more efficient and readable code by replacing repetative or complex
            expressions with concise and clear identifiers.

            - included within header files.

            benefits of macros:

            - CODE REUSABILITY - HELPS ELIMINATE REPETATIVE CODE.

            - PERFORMACNCE - RESULTS IN FASTER PERFORMANCE, DUE TO INLINE EXPANSION.

            - ABSTRACTION - PROVIDING A WAY TO DEFINE REUSABLE CODE BLOCKS, CONSTANT, OR PARAMETERIZED 
                            EXPRESSIONS THAT CAN SIMPLIFY CODE AND MAKE IT MORE READABLE.

            - MACROS INVOCATION - WHEN THE MACROS IS INVOKED, ALL THE INSTRUCTIONS WITHIN THE MACRO ARE EXECUTED.

    


MACROS THAT LOADS AND UNLOADS THE START AND FINISH FUNCTIONS.
*/
module_init(test_lkm_INIT);
module_exit(test_lkm_EXIT);

