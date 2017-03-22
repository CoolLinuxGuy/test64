# test64
test if your computer is 64 bit or not

## Instructions
Build this on your MAC, Unix, or Linux computer with the built-in compile-link command:

  gcc test64.c

Run it:

  ./a.out

Analyse the output.

If you have 64 bit hardware and O/S, you will see this:
test64
Number 1 = 2147483647
Number 2 = 2147483647
Number 3 = 4294967294
added Number 1 again, Number 3 = 6442450941
sizeof(char,int,long,double) in bytes = 1 4 8 8 System is 64 bit

A 32 bit platform will show this:
test64
Number 1 = 2147483647
Number 2 = 2147483647
Number 3 = -2
added Number 1 again, Number 3 = 2147483645
sizeof(char,int,long,double) in bytes = 1 4 4 8 System is 32 bit

License: Truly Open Source
by Darcy Allen
Canada
