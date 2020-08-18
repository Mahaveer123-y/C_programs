#include <stdio.h>
#include<conio.h>

int main()
{
    int n,s,j;
    printf("Enter the value of n\n");
    scanf("%d", &n);
    for (int i = 1; i < n; i++)
{
        //printf("*\n");
    
    for(int s = i; s< n; s++)
        {
        printf(" ");
        }
    for (int j = 1;j <= (2*i-1);j++)
     {
        printf("*");
     }    
    printf("\n");
    
}    
    return 0;
}
