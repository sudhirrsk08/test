#include<linux/kernel.h>
#include<linux/module.h>

int init_module(void)
{
printk("Fun:Loading a modulr\n");
return 0;
}

int cleanup_module(void)
{
printk("Fun:Unloading a modulr\n");
}


