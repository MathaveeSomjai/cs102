#include <stdio.h>

int main()
{
    float momheight, dadheight, childheight;

    printf("Enter the height of the mother (centimeters) : ");
    scanf("%f",&momheight);
    printf("Enter the height of the father (centimeters) : ");
    scanf("%f", &dadheight);

    childheight = (momheight + dadheight) / 2;

    printf("The possible height of the child is between %.2f to %.2f centimeters",childheight-13.5, childheight+13.5);

    return 0;
}