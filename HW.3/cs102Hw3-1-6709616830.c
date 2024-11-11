#include <stdio.h>

int main()
{
    int n, minIndex = 0, maxIndex = 0;
    double num[n], sum = 0, avg, min, max;
    // ลองใช้ float แล้วค่าออกมาเป็น 0 ทั้งหมดงง
    // ไม่สามารถำหนดค่าของ min max เป็น 0 ได้เนื่องจากถ้าไม่มีค่าที่น้อยหรือมากกว่า0ค่าmin max จะกลายเป็น0

    scanf("%d", &n);

    for (int i = 0; i < n; i++)
    {
        scanf("%lf", &num[i]); // ใช้ lf ถ้าเป็น double
        sum = sum + num[i];

        if (i == 0)
        {
            min = num[i];
            max = num[i];
            minIndex = maxIndex = i;
        }
        else if (num[i] < min)
        {
            min = num[i];
            minIndex = i;
        }
        else if (num[i] > max)
        {
            max = num[i];
            maxIndex = i;
        }
    }

    avg = sum / n;
    
    printf("Maximum value: %.2f\n", max);
    printf("Minimum value: %.2f\n", min);
    printf("Maximum index: %d\n", maxIndex);
    printf("Minimum index: %d\n", minIndex);
    printf("Average: %.2f\n", avg);

    printf("Reverse order:");
    for (int i = n - 1; i >= 0; i--)
    {
        printf(" %.2f", num[i]);
    }
    printf("\n");

    printf("Above average list:");
    for (int i = n - 1; i >= 0; i--)
    {
        if (num[i] > avg)
        {
            printf(" %.2f", num[i]);
        }
    }
    printf("\n");

    printf("Negative coordinates:");
    for (int i = 0; i < n; i++)
    {
        for (int j = i + 1; j < n; j++)
        {
            if (num[i] < 0 && num[j] < 0)
            {
                printf(" (%.2f, %.2f)", num[i], num[j]);
            }
        }
    }
    printf("\n");

    return 0;
}

//mathavee somjai 6709616830