#include<stdio.h>
int main()
{
    //To calculate perimeter of rectangle
    int length ,width,perimeter;
    printf("Enter the length\n");
    scanf("%d",&length);
    printf("Enter the width\n");
    scanf("%d",&width);
    perimeter=2*length+2*width;
    printf("The perimeter of rectangel is= %d",perimeter);
    return 0;
    
}