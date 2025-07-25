## Prerequisites
- C compiler (clang)
- source code of minix kernel: https://github.com/Stichting-MINIX-Research-Foundation/minix/archive/refs/heads/R3.3.0.zip

## test enviroment
- minix3.3
- 4 core cpu 
- RAM: 4G

## the main part
1. Move the three files (proc.c, proc.h, main.c) from homework2.zip to /usr/src/minix/kernel, replacing the original files.

2. rebuild the kernel
	a. #cd /usr/src 
	b. #make build MKUPDATE=yes (this run only 3-5 min) or #make build (runs 20 mins above)
		if the kernel hasn't rebuild before run #make build
3. make boot file
	a. #cd /usr/src/relasestools 
	b. #make hdboot
4. reboot
	a. #reboot
	b. When rebooting, selecting option 2 within 10 seconds will boot the kernel rebuilted.
	c. During boot-up, if you see a line of text in main.c modified to print student ID, it means you are booting the kernel you have rebuilt.

## for testing 

	the folder test is for some testing program run in the Desin Document

	gmake for compile all the file in test

	### test1.c:

		This program is background task execution.
		usage ./test1
		if the program end, press "Enter" to leave

	### test2.c:
		usage:./test2 <num_procs> <IO_ops> <CPU_ops>
		e.g.
		  ./test2 10 10000 10000 > 101M1M.csv
		  ./test2 50 10000 10000 > 501M1M.csv