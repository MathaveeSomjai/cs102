#include <stdio.h>

int main()
{
    int a;
    scanf("%d", &a);
    switch (a)
    {
    case 90 ... 100 :
        printf("A");
        break;
    case 85 ... 89:
        printf("B+");
        break;
    case 75 ... 84:
        printf("B");
        break;
    case 70 ... 74:
        printf("C+");
        break;
    case 60 ... 69:
        printf("C");
        break;
    case 0 ... 59:
        printf("See you next semeter");
        break;
    }
    return 0;
}