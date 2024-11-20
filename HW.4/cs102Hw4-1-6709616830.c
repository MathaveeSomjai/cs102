#include <stdio.h>

void swap_elements(int *arr, int pos1, int pos2)
{
    int x = arr[pos1];
    arr[pos1] = arr[pos2];
    arr[pos2] = x;
}

int main()
{
    int n, pos1, pos2;

    printf("Enter the number of elements (max 100): ");
    scanf("%d", &n);

    // ค่าตัวเลขที่รับมาไม่ถูกต้อง
    if (n > 100 || n <= 0)
    {
        printf("The number received is incorrect.\n");
        return 1; // เพื่อหยุดการทำงานของโปรแกรม
    }


    int arr[n];

    printf("Enter %d numbers: ", n);
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }

    // รับตำแหน่งที่ต้องการสลับ
    printf("Enter first position to swap (0-%d): ", n - 1);
    scanf("%d", &pos1);
    printf("Enter second position to swap (0-%d): ", n - 1);
    scanf("%d", &pos2);

    // ตำแหน่งที่รับมาไม่ถูกต้อง
    if (pos1 < 0 || pos1 >= n || pos2 < 0 || pos2 >= n)
    {
        printf("The number received is incorrect.\n");
        return 1;
    }

    // สลับค่า
    swap_elements(arr, pos1, pos2);

    printf("After swapping elements at positions %d and %d:\n", pos1, pos2);
    for (int i = 0; i < n; i++)
    {
        printf("%d ", arr[i]);
    }
    printf("\n");

    return 0;
}

// mathavee somjai 6709616830