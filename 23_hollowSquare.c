// Write a program in C to print the Hollow square:

/*
Student name        : Anurag Pareek
University Roll no. : 2215000322
Contact             : anurag020416@gmail.com
*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
int main()
{
    int height;
    printf("Enter the height of the square : ");
    scanf("%d",&height);
    for (int i = 0; i < height; i++)
    {
        for (int j = 0; j < height; j++)
        {
            if(i == 0 || j == 0 || j == height-1 || i == height-1)
                printf(" *");
            else
                printf("  ");
        }
        printf("\n");
    }
    return 0;
}