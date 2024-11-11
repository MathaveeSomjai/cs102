#include <stdio.h>

int MagicSquare(int input[8][8], int n)
{
    int sum = 0;
    for (int i = 0; i < n; i++)
    {
        sum = sum + input[0][i];
    }
    // ผลรวมของแถวแรก เอาไว้เช็คค่าว่าเท่ากับแถวอื่นหรือไม่

    for (int i = 1; i < n; i++)
    {
        int rowSum = 0;
        for (int j = 0; j < n; j++)
        {
            rowSum = rowSum + input[i][j];
        }
        if (rowSum != sum)
            return 0;
    }
    // แถวที่2เป็นต้นไปเริ่มเช็ค'ทีละแถว' ถ้ามีแถวใดแถวหนึ่งไม่เท่าแถวแรกให้ส่งค่าเป็นเท็จ

    for (int j = 0; j < n; j++)
    {
        int colSum = 0;
        for (int i = 0; i < n; i++)
        {
            colSum = colSum + input[i][j];
        }
        if (colSum != sum)
            return 0;
    }
    // เริ่มเช็คตั้งแต่คอลลั่มแรก ถ้ามีแถวใดแถวหนึ่งไม่เท่าแถวแรกให้ส่งค่าเป็นเท็จ

    int diag1 = 0, diag2 = 0;
    for (int i = 0; i < n; i++)
    {
        diag1 = diag1 + input[i][i];
        diag2 = diag2 + input[i][n - i - 1];
    }
    // เช็คเส้นทะแยงมุม diag1 คือจากซ้ายมาขวา 2 คือขวามาซ้าย

    if (diag1 == sum && diag2 == sum)
    {
        return 1;
    }
    else
    {
        return 0;
    }
}

int main()
{
    int n;
    scanf("%d", &n);

    int input[8][8];
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            scanf("%d", &input[i][j]);
        }
    }

    if (MagicSquare(input, n))
    {
        printf("This is a magic square!\n");
    }
    else
    {
        printf("This is NOT a magic square!\n");
    }

    return 0;
}

// mathavee somjai 6709616830