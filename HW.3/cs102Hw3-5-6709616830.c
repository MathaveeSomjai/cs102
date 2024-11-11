#include <stdio.h>

void readSquare(int arr[8][8], int N)
{
    for (int i = 0; i < N; i++)
    {
        for (int j = 0; j < N; j++)
        {
            scanf("%d", &arr[i][j]);
        }
    }
}

int findMagicNumber(int arr[8][8], int N)
{
    int magicNumber = 0;
    for (int i = 0; i < N; i++)
    {
        magicNumber += arr[0][i];
    }
    // ผลรวมของแถวแรก เอาไว้เช็คค่าว่าเท่ากับแถวอื่นหรือไม่

    for (int i = 1; i < N; i++)
    {
        int rowSum = 0;
        for (int j = 0; j < N; j++)
        {
            rowSum += arr[i][j];
        }
        if (rowSum != magicNumber)
            return -1;
    }
    // แถวที่ 2 เป็นต้นไปเริ่มเช็ค 'ทีละแถว' ถ้ามีแถวใดแถวหนึ่งไม่เท่าแถวแรกให้ส่งค่า -1

    for (int j = 0; j < N; j++)
    {
        int colSum = 0;
        for (int i = 0; i < N; i++)
        {
            colSum += arr[i][j];
        }
        if (colSum != magicNumber)
            return -1;
    }
    // เริ่มเช็คตั้งแต่คอลลั่มแรก ถ้ามีแถวใดแถวหนึ่งไม่เท่าแถวแรกให้ส่งค่า -1

    int diag1 = 0, diag2 = 0;
    for (int i = 0; i < N; i++)
    {
        diag1 += arr[i][i];
        diag2 += arr[i][N - i - 1];
    }
    // เช็คเส้นทะแยงมุม diag1 คือจากซ้ายมาขวา และ diag2 คือขวามาซ้าย

    if (diag1 == magicNumber && diag2 == magicNumber)
    {
        return magicNumber;
    }
    else
    {
        return -1;
    }
}

int main()
{
    int arr[8][8];
    int N;

    scanf("%d", &N);
    readSquare(arr, N);

    int magicNumber = findMagicNumber(arr, N);

    if (magicNumber == -1)
    {
        printf("Your square is NOT a magic square.");
    }
    else
    {
        printf("Your square is a magic square!! with the magic constant = %d.", magicNumber);
    }

    return 0;
}

// mathavee somjai 6709616830