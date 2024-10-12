#include <stdio.h>

int main()
{
    int a, b, c;
    scanf("%d %d %d", &a, &b, &c);

    // ไม่ใส่เงื่อนไขต้องมากกว่า0เพราะไม่มีค่าที่น้อยกว่า1ที่ทำให้เงื่อนไขด้านล่างเป็นจริงได้
    if ((a + b > c) && (a + c > b) && (c + b > a))
    {
        if (a == b && b == c)
        {
            printf("1");
        }
        else if ((a != b) && (a != c) && (b != c))
        {
            printf("3");
        }
        else
        {
            printf("2");
        }
    }

    else
    {
        printf("0");
    }

    return 0;
}