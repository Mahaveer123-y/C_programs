#include <stdio.h>

int main()
{
    char s[] = "Hello";
    char temp;
    int len = 0;
    while(s[len] != '\0')
    {
        len++;
    }
    printf("The length of this string id %d\n", len);
    for(int i = 0; i < (len-1)/2;i++)
    {
        temp = s[i];
        s[i] = s[len-1-i];
        s[len-1-i] = temp;
    }
    printf("string is now %s", s);
    return 0;
}
