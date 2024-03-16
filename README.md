[ Please check README.txt for proper formatting ]










Only the [Normal] works
	- lv_drivers
	- lvgl

[Problem]
	- similar to [Normal]
	- added <ui> folder from eez-studio sample project C code folder
	- adde <eez-framework>, for converting <ui> to lvgl


Attached:
[Normal]lvgl_CMake_stm32mp157_linux
		- without eez-framework and ui from eez-studio

[Problem] eez-lvgl_CMake_stm32mp157_linux
		- ui + eez-framework

============================================================


Setup:
 Compilation Machine: 
		- VM VirtualBox running 64bit Ubuntu 18.04
 Compilation tool:
		- CMake (3.12.4 or better, tested using 3.29.0-rc4)
		- make (GNU make 4.1, x86_64-pc-linux-gnu)
 GCC & G++ type: 
		- arm-linux-gnueabihf-  (gcc&g++)


 Runtime machine: stm32mp157 (brand:embedfire) (ie.linux-stm32)

Problem:
 Cannot compile with <ui> and <eez-framework> 

Goal:
	To convert one of the demo project successfully and act as a demo for others (linux / linux-stm32 / imx6ull.. etc) 
	(lvgl project : smart home, 800 x 480, lvgl version 8.3 )


=========

How to Start:

Overview:
	VM (ubuntu 18.04) --> cross compile --> result executable (little_prj)

Steps:
1. Setup VM + VM shared folders (for easy file transfer)
	- (omit for now, experienced user should know/ google, it's too lengthy)
	- (dm me if you still cannot configure the VM "Insert Guest Additions CD image" for shared clipboard/ folders)


2. install CMake + Make
	CMake
	a. Go download your version of CMake for linux
	b. (optional) unzip / tar 
		- apt install unzip or tar
		- unzip .........
	c. install required lib for cmake installation
		- sudo apt install gcc
		- sudo apt install make
		- apt install ninja-build
		- apt install libssl-dev
	d. cd into the decompressed file (cmake-3.29.0 ...)
	e. run (it will take some time, probably 5 to 10 minutes)
		- ./configure  
		- make (tried using "make -j2" and always fail)
	Make
	a. sudo apt install make
	

3. install GCC and G++ for your machine (or any gcc/gxx, mine: for stm32mp157)
	a. sudo apt install gcc-arm-linux-gnueabihf
	b. sudo apt install g++-arm-linux-gnueabihf
	c. check with "arm-linux-gnueabihf-g++ -v" (should be under /usr/bin/...)

4. install vscode (or any editor will do)
	a. for editing the code

5. Test compiling (probably takes 2 to 3mins if everything is ok)
	a. open (the project [Normal] .... above )
	b. cd to "_build" and delete everything inside 
	c. run "cmake .." or (in my case)"cmake .. -D CMAKE_C_COMPILER=/usr/bin/arm-linux-gnueabihf-gcc -D CMAKE_CXX_COMPILER=/usr/bin/arm-linux-gnueabihf-g++"
	d. run "make" OR (in my case) "make -j2"
	e. Result file should be under "_build/src/" --> little_prj (executable) 



6. (to be added further, after the problem is solved, thank you)

=========
CMake structure is sth like this (not exactly)

├── build
├── CMakeLists1.txt 				#1
└── src
    ├── CMakeLists2.txt				#2 for linking the static library
    ├── lv_conf.h
    ├── lv_drivers
    │   ├── CMakeLists3.1.txt			#3 static library
    │   ├── display
    │   ├── docs
    │   ├── indev
    │   ├── lv_drv_conf_templ.h
    │   ├── win_drv.c
    │   └── win_drv.h
    ├── lv_drv_conf.h
    ├── lv_examples
    │   ├── *CMakeLists3.2.txt			#N static library
    │   ├── docs
    │   ├── lv_apps
    │   ├── lv_examples.h
    │   ├── lv_ex_conf_templ.h
    │   ├── lv_tests
    │   ├── lv_tutorial
    ├── lv_ex_conf.h
    ├── lvgl
    │   ├── CMakeLists3.3.txt			#N static library
    │   ├── docs
    │   ├── lv_conf_template.h
    │   ├── lvgl.h
    │   ├── porting
    │   ├── scripts
    │   └── src
    └── main.c					#main.c here
————————————————
