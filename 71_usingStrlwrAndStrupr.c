#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
int main()
{
    char string[100];
    printf("Enter the string : ");
    scanf("%d",string);
    printf("The string in lower case is : %s\n",strlwr(string));  // strlwr is non standard and deprecated function. So dont work on modern compilers.
    printf("The string in upper case is : %s\n",strupr(string));  // strupr is non standard and deprecated function. So dont work on modern compilers.
    return 0;
}