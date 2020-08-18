/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

int main()
{
    int n, sum=0;
    printf("Enter the number you like to sum of all numbers \n");
    scanf("%d", &n);
    //liner method to find the sum of n natural numbers
   // for(int i = 1; i <=num; i++)
    //{
      //  sum += i;
    //}
    //constant time method 
    sum = (n*n+n)/2;
    printf("the sum of first %d number is: %d\n" , n,sum);

    return 0;
}

