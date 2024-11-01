#include <stdio.h>

int main()
{
    int a, b, c;
    char choice;

    printf("input length of side: ");
    scanf("%d %d %d", &a, &b, &c);

    // ไม่ใส่เงื่อนไขต้องมากกว่า0เพราะไม่มีค่าที่น้อยกว่า1ที่ทำให้เงื่อนไขด้านล่างเป็นจริงได้
    if ((a + b > c) && (a + c > b) && (c + b > a))
    {
        if (a == b && b == c )
        {
            printf("this is an equilateral triangle");
        }
            else if ((a != b) && (a != c) && (b != c))
        {
            printf("this is a scalene triangle");
        }
            else
        {
            printf("this is an isosceles triangle");
        }
    }
    
    else
    {
        printf("This is NOT a possible triangle");
    }

    return 0;
}