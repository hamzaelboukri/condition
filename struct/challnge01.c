#include <stdio.h>
#define storage 100
typedef struct
{
    char name[30];
    char pre[30];
    int age;
} hummon;
hummon pro[storage];
int count = 0;
int main()
{
    printf("entre name :");
    scanf(" %s", pro[count].name);
    printf("entre prenom :");
    scanf(" %s", pro[count].pre);
    printf("entre age :");
    scanf("%d", &pro[count].age);
    count++;
    for (int i = 0; i < count; i++)
    {
        printf(" name is :%s\n", pro[i].name);
        printf(" prenom is :%s\n", pro[i].pre);
        printf("age is :%d\n", pro[i].age);
    }
}