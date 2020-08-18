/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

int main()
{
    int num;

    printf("Enter the number you like to print ");
    scanf("%d", &num);
    for (int i = 1; i<10; i++)
    {
        printf("%d X %d = %d\n", num, i+1 , (i+1)*num);
    }

    return 0;
}

