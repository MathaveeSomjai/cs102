#include <stdio.h>

int main()
{
    int n, i, j, maxSum = -500; // ตั้งค่าเริ่มต้น maxSum ให้น้อยมากเพื่อรองรับตัวเลขลบทั้งหมด
    scanf("%d", &n);

    int arr[n];
    for (i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }

    for (i = 0; i <= n - 5; i++)
    {
        int currentSum = 0;
        for (j = 0; j < 5; j++)
        {
            currentSum += arr[i + j];
        }
        if (currentSum > maxSum)
        {
            maxSum = currentSum;
        }
    }

    printf("%d\n", maxSum);
    return 0;
}
