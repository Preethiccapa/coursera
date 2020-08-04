DESCRIPTION:
   This project is a simple application that performs statistical analytics on a dataset.This application will be useful to identify the report analytics on the maximum, minimum, mean, and median of the data set.In addition, reordering of the data set from large to small is also performed.

INSTALLATION:
     -->For this project you will be using a Ubuntu Linux Virtual Machine. In order to run this machine, you will need to download Oracle’s VirtualBox software:

https://www.virtualbox.org/wiki/VirtualBox

The VM is ready for download in our supplementary materials. Here is a link to those instructions and the new VM: https://www.coursera.org/learn/introduction-embedded-systems/resources/jDf20

VirtualBox Installation: https://www.virtualbox.org/wiki/Downloads

CREATING YOUR OWN VIRTUAL MACHINE

       If you already have a Linux machine and are familiar with Linux, use whatever distribution you are comfortable with. The course will formally support the latest Ubuntu release.

Download the Ubuntu 17.04 LTS release here (an .iso file):

-->http://releases.ubuntu.com/17.04/
-->http://virtualboxes.org/images/ubuntu
Open up VirtualBox and now you will need to create a virtual machine. There are many online resources that show this process (and YouTube Videos), but here are some links with how to do this.

-->https://www.youtube.com/watch?v=jy3ExRlQAys
-->https://www.youtube.com/watch?v=GGorVpzZQwA
I also highly suggest that you install VirtualBox Guest Additions as it adds useful features like folder shares between your host and virtual machine as well as resolution/screen scaling.

-->https://www.virtualbox.org/manual/ch04.html

LINUX CONFIGURATION:

     Once you have installed a Linux VM, you will create a login with a password. Do not forget this password, we will use it regularly. Login into your VM and you need to do a quick package update and install a couple of packages. Open up a terminal and start with the following commands. A terminal usually starts with a prompt, on the default ubuntu installation, that is a dollar sign “$”. All examples provide that symbol at the beginning of a terminal command. You do not need to manually type that in.

To perform the update run the following command:

--> sudo apt-get update

To search for packages you can install you can search the linked repositories. if you are interested to see what is out there type this, but enter in a correct package name.

$ sudo apt-cache search <package-name>

-->sudo apt-cache search arm-none-eabi 

There are a couple of compilers we are going to use. Here is a list of them with a description.

gcc – Host machines cross Compiler. Used for testing architecture independent code. This should already be installed on your machine.
arm-none-eabi-gcc – Compiler we will use for the Cortex-M4
These are the packages that need to be installed with apt-get install.

--git
--gitk
--gcc-arm-none-eabi
--vim (or another text editor of your choice)

Here is an example of how you would install some of these packages.

-->sudo apt-get install git gitk
-->sudo apt-get install gcc-arm-none-eabi vim


