
This sample demonstrates the use of Sentinel LDK Licensing API when working in the C language.

Additional Information
Prerequisites

GNU Compiler (gcc).

This section describes how to compile the sample.

Compiling & Running the Sample



1.  gcc -Wall hasp_login.c libhasp_linux_x86_64_demo.so -o output_file_name

this command will generate an output file. 

Now run this command below

2. ./output_file_name

Note:- first copy the .so and .a files to /usr/lib


Description of the Sample Flow

The sample consists of several functions. The default flow is as follows:

    Log into the key.

 
    Log out from the key.





