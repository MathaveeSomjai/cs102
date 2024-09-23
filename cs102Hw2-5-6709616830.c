#include <stdio.h>

int main()
{
    int num;
    int i = 2;

    while (1) // เพื่อให้กลับไปถามใหม่อีกครั้ง ในกรณีที่ใส่เลขนอกเงื่อนไข
    {
        printf("Please enter an integer <between 2 to 9999999>: ");
        scanf("%d", &num);

        if (num < 2 || num > 99999999)
        {
            printf("%d is not between 2 to 9999999, please re-enter.\n", num);
            continue; // เพื่อให้กลับไปถามใหม่อีกครั้ง
        }

        else // หาจน.เฉพาะ
        {
            while (i <= num)
            {
                if (num % i == 0 && i != num) // เช็คเงื่อนไขโดยการหารว่ามีตัวใดหารnumลงตัวมั้ย *เพิ่มและไว้เพราะถ้าi=numจะให้ไปเงื่อนไขต่อไปแทน
                {
                    printf("%d is not a prime number.\n", num);
                    break;
                }
                else if (i == num) // การทำให้เงื่อนไขนี้เป็นจริงคือต้องไม่มีตัวเลขใดหารจำนวนนี้ลงตัว ดังนั้นมัยจะเป็นจำนวนเฉพาะ
                {
                    printf("%d is a prime number.\n", num);
                    break;
                }
                else
                {
                    i++; // ถ้าไม่ผ่านเงื่อนไขใดเลยด้านบนให้เพิ่มค่าiและหารต่อไป
                }
            }
        }
        break; // ไม่ให้โปรแกรมถาม "Please enter an integer <between 2 to 9999999>:" ซ้ำ
    }

    return 0;
}
