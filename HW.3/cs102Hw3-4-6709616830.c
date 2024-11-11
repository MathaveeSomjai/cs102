#include <stdio.h>
#include <stdlib.h> // เพิ่มการรวมไลบรารีนี้สำหรับ malloc

int main()
{
    int n, minIndex = 0, maxIndex = 0;
    double *num, sum = 0, avg, min, max;

    scanf("%d", &n);

    // เพื่อจองพื้นที่ในหน่วยความจำให้กับอาร์เรย์
    num = (double *)malloc(n * sizeof(double));

    for (int i = 0; i < n; i++)
    {
        scanf("%lf", (num + i)); 
        sum += *(num + i);

        if (i == 0)
        {
            min = *(num + i);
            max = *(num + i);
            minIndex = maxIndex = i;
        }
        else
        {
            if (*(num + i) < min)
            {
                min = *(num + i);
                minIndex = i;
            }
            if (*(num + i) > max)
            {
                max = *(num + i);
                maxIndex = i;
            }
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
        printf(" %.2f", *(num + i));
    }
    printf("\n");

    printf("Above average list:");
    for (int i = n - 1; i >= 0; i--)
    {
        if (*(num + i) > avg)
        {
            printf(" %.2f", *(num + i));
        }
    }
    printf("\n");

    printf("Negative coordinates:");
    for (int i = 0; i < n; i++)
    {
        for (int j = i + 1; j < n; j++)
        {
            if (*(num + i) < 0 && *(num + j) < 0)
            {
                printf(" (%.2f, %.2f)", *(num + i), *(num + j));
            }
        }
    }
    printf("\n");

    return 0;
}
