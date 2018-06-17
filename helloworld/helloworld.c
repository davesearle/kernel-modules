#include <linux/init.h>
#include <linux/module.h>
#include <linux/kernel.h>

MODULE_LICENSE("GPL");
MODULE_AUTHOR("Dave Searle dave@dave.ninja");
MODULE_DESCRIPTION("Simple helloworld module.");
MODULE_VERSION("0.01");

static int __init helloworld_init(void) {
    printk(KERN_INFO "Hello World, from the Moon!\n");
    return 0;
}

static void __exit helloworld_exit(void) {
    printk(KERN_INFO "Goodbye Moon!\n");
}

module_init(helloworld_init);
module_exit(helloworld_exit);