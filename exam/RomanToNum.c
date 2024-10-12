#include <stdio.h>

int main()
{
   char a;
   scanf ("%c",&a);
   switch (a)
   {
   case 'I':
    printf ("1");
    break;
   case 'V':
       printf("5");
       break;
   case 'X':
       printf("10");
       break;
   case 'L':
       printf("50");
       break;
   case 'C':
       printf("100");
       break;
   case 'D':
       printf("500");
       break;
   case 'M':
       printf("1000");
       break;
   
   default: printf("Invalid");
    break;
   }
    return 0;
}