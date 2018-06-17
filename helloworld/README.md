# helloworld

first install kernel headers

$ sudo yum install kernel-devel

if kernel header files (installed in /lib/modules/) don't match current kernel src (/usr/src/kernels/), then update kernel

$ sudo yum install kernel

reboot required

build helloworld module (helloworld.ko)

$ make

run make test to install and remove the kernel and print kernel log

$ make test
$ make clean