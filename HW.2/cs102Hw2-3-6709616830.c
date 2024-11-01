#include <stdio.h>

int main()
{
    char choice;
    int a, b, c;

    printf("Do you want to find the smallest or largest number? (S/L): ");
    scanf(" %c", &choice);

    if (choice == 'S' || choice == 's')
    {
        printf("Enter 3 integers: ");
        scanf("%d %d %d", &a, &b, &c);
        //หาตัวที่น้อยที่สุด
        int smallest = a;
        if (b < smallest)
        {
            smallest = b;
        }
        if (c < smallest)
        {
            smallest = c;
        }
        printf("Smallest number: %d\n", smallest);
    }
    else if (choice == 'L' || choice == 'l')
    {
        printf("Enter 3 integers: ");
        scanf("%d %d %d", &a, &b, &c);
        //หาตัวมากสุด
        int largest = a;
        if (b > largest)
        {
            largest = b;
        }
        if (c > largest)
        {
            largest = c;
        }
        printf("Largest number: %d\n", largest);
    }

    //ไว้สำหรับในกรณีที่กรอกอย่างอื่นนอกจาก S ,L
    else
    {
        printf("Please enter 'S'  or 'L'.\n");
    }

    return 0;
}