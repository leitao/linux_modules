#include <linux/module.h>	/* Needed by all modules */
#include <linux/kernel.h>	/* Needed for KERN_INFO */

#define SPRN_HFSCR	0xbe

int init_module(void)
{
	printk(KERN_INFO "Module starting\n");

	printk("MSR   = %lx\n", mfmsr());
	printk("HFSCR = %lx\n", mfspr(SPRN_HFSCR));

	return 0;
}

void cleanup_module(void)
{
	printk(KERN_INFO "Goodbye world 1.\n");
}
