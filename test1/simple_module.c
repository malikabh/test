// reference: https://www.apriorit.com/dev-blog/195-simple-driver-for-linux-os

#include <linux/init.h>
#include <linux/module.h>

/**
 * Function to init the module, this function will be called while initializing
 * the module or loading it to the kernel space.
 *
 */
static int simple_module_init(void) {
  return 0;
}

/**
 * Function to be called while exiting the module, or unloading it from
 * kernel space.
 *
 */
static void simple_module_exit(void) {
  return;
}


// macros to notify the kernel about loading and unloading the driver
module_init(simple_module_init);
module_exit(simple_module_exit);
