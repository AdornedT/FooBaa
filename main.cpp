/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>


int main()
{
    for(int i = 1; i <= 100; i++)
    {
        if(i%3 == 0 && i%5 != 0)
        {
            printf("Foo\n");
        }
        else if(i%3 != 0 && i%5 == 0)
        {
            printf("Baa\n");
        }
        else if(i%3 == 0 && i%5 == 0)
        {
            printf("FooBaa\n");
        }
        else
        {
            printf("%i\n", i);
        }
    }

    return 0;
}
