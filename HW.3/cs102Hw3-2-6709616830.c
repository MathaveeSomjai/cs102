#include <stdio.h>
#include <string.h> // ฟังก์ชันสำหรับการใช้งาน string

int main()
{
    char str[51];
    int len, con = 0, vow = 0, upc = 0, lowc = 0, palin = 1; // ให้palindromeเป็นจริงไปก่อน ถ้าเงื่อนไขไม่ถูกต้องค่าเปลี่ยนเป๋นเท็จ

    scanf("%50s", str);

    len = strlen(str); // ใช้นับความยาวของ String

    for (int i = 0; i < len; i++)
    {
        char ch;
        if (str[i] >= 'A' && str[i] <= 'Z') //ถ้าเป็นตัวพิมพ์ใหญ๋ให้+32จะมีค่าASCIIจะกลายเป็นตัวพิมพ์เล็ก
        {
            ch = str[i] + 32;
        }
        else
        {
            ch = str[i];
        }

        // ตรวจสอบว่าสระหรือพยัญชนะ
        if (ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u')
        {
            vow++;
        }
        else if (ch >= 'a' && ch <= 'z')
        {
            con++;
        }

        // ตรวจสอบตัวพิมพใหญ่และตัวพิมพ์เล็ก
        if (str[i] >= 'A' && str[i] <= 'Z')
        {
            upc++;
        }
        else if (str[i] >= 'a' && str[i] <= 'z')
        {
            lowc++;
        }

        if (str[i] != str[len - i - 1]) //ไล่เช็คจากตัวแรกทางขวาสุดและซ้ายสุดเข้าหาตรงกลาง ถ้าไม่เข้ากันให้palindomesเป็น0ซึ่งนับได้ว่ามีค่าเปนเท็จ
        {
            palin = 0; 
        }
    }
    

    printf("Size of input string is %d\n", len);
    printf("#Consonants: %d\n", con);
    printf("#Vowels: %d\n", vow);
    printf("#Upper-case letters: %d\n", upc);
    printf("#Lower-case letters: %d\n", lowc);

    if (palin)
    {
        printf("Is a palindrome string: Yes\n");
    }
    else
    {
        printf("Is a palindrome string: No\n");
    }

    return 0;
}

// mathavee somjai 6709616830
