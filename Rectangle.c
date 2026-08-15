#include<stdio.h>
int main()
{
    float length, width, area, perimeter;
    printf("enter length:");
    scanf("%f", &length);
    printf("Enter width:");
    scanf("%f", &width);
    area=length * width;
    perimeter=2 * (length + width);
    printf("Area of rectangle=%.2f\n", area);
    printf("perimeter of rectangle=%.2f\n", perimeter);
    return 0;
}
