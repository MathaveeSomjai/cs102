#include <stdio.h>
#include <string.h>

#define maxpp 100

typedef struct
{
    int id;
    char name[50];
    int age;
    float income;
} st; // เปลี่ยนชื่อโครงสร้างเป็น st

void addpp(st pp[], int *count) //ฟังชันสำหรับการรับข้อมูลไปเก็บในstrut
{
    if (*count >= maxpp) 
    {
        printf("Maximum number of persons reached.\n");
        return; // ถ้ารับค่ามากกว่า100คนให้แสดงข้อความเข้าถึงจำนวนคนสูงสุดแล้วและให้หยุดโปรแกรม
    }

    st newpp;
    printf("Enter ID: ");
    scanf("%d", &newpp.id);
    printf("Enter Name: ");
    scanf(" %[^\n]s", newpp.name); //[^\n] รับข้อมูลจนกว่าจะเจอ \n (enter)
    printf("Enter Age: ");
    scanf("%d", &newpp.age);
    printf("Enter Monthly Income: ");
    scanf("%f", &newpp.income);

    pp[*count] = newpp; // คัดลอกข้อมูลทั้งหมดจากตัวแปร newpp ไปเก็บในอาเรย์ pp[] ที่ตำแหน่ง *count
    (*count)++;
    printf("Person registered successfully.\n");
    printf("==\n");
}

void display(const st pp[], int count)
{
    if (count == 0)
    {
        printf("No registered persons to display.\n");
        printf("==\n");
        return;
    }

    printf("\nID\tName\t\t\tAge\tMonthly Income\n");
    for (int i = 0; i < count; i++)
    {
        printf("%d\t%-20s\t%d\t%.2f\n", pp[i].id, pp[i].name, pp[i].age, pp[i].income);
    }
    printf("==\n");
}

int main()
{
    st pp[maxpp];
    int count = 0;
    int choice;

    while (1)
    {
        printf("\nPoverty Registration System\n");
        printf("1. Register New Person\n");
        printf("2. Display All Registered Persons\n");
        printf("3. Exit\n");
        printf("==\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch (choice)
        {
        case 1:
            addpp(pp, &count);
            break;
        case 2:
            display(pp, count);
            break;
        case 3:
            printf("Exiting program.\n");
            return 0;
        default:
            printf("Invalid choice. Please try again.\n");
        }
    }
}

// mathavee somjai 6709616830