/*
    test64.c
    This tiny C program tests if your system is 64 bit or not.
    Author: Darcy Allen of Canada

    License: Truly Open Source

    Instructions:
    1. build it fast and easy on MAC, Linux, Solaris, and other Unix systems with
       gcc test64.c
    2. execute it
       ./a.out
    3. analyse the output

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
*/
#include <stdio.h>
#include <string.h>
int main()
{
  int iSizeOfLong = 0;
  long lNumber1 = 0L;
  long lNumber2 = 0L;
  long lNumber3 = 0L;
  char szResult[18];  // longest="not 64 nor 32 bit" NOTE: if this string changes, update the string size

    lNumber1 = 0x7FFFFFFF;
    lNumber2 = 0x7FFFFFFF;
    lNumber3 = lNumber1 + lNumber2;
    printf( "test64\nNumber 1 = %ld\nNumber 2 = %ld\nNumber 3 = %ld\n",
        lNumber1, lNumber2, lNumber3 );
    lNumber3 = lNumber3 + lNumber1;
    iSizeOfLong = sizeof(long);
    if ( iSizeOfLong == 8 )
        {
        strcpy( szResult, "System is 64 bit" );
        }
    else
        {
        if ( iSizeOfLong == 4 )
            {
            strcpy( szResult, "System is 32 bit" );
            }
        else
            {
            strcpy( szResult, "not 64 nor 32 bit" );
            }
        }
    printf( "added Number 1 again, Number 3 = %ld\nsizeof(char,int,long,double) in bytes = %d %d %d %d %s\n",
        lNumber3, (int)sizeof(char), (int)sizeof(int), (int)sizeof(long), (int)sizeof(double), szResult );
    return( 0 );
}
