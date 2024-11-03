# how to load an existing module into the kernel with a different name.
obj-m += new_name_LKM.o
new_module_name-objs := test_LKM.o

all:
	make -C /lib/modules/$(shell uname -r)/build M=$(PWD) modules

clean:
	make -C /lib/modules/$(shell uname -r)/build M=$(PWD) clean
