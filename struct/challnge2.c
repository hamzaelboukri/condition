#include <stdio.h>
#define storage 100
typedef struct
{
    char name[30];
    char per[30];
    int id;
    float math, pc, svt;
} etudiant;
etudiant studen[storage];
int count = 0;

int main()
{
    printf("enter name:");
    scanf("%s", studen[count].name);
    printf("enter prenom:");
    scanf("%s", studen[count].per);
    printf("enter id:");
    scanf("%d", &studen[count].id);
    printf("enter point math:");
    scanf("%f", &studen[count].math);
    printf("enter potnt pc:");
    scanf("%f", &studen[count].pc);
    printf("enter point svt:");
    scanf("%f", &studen[count].svt);
    count++;
    for (int i = 0; i < count; i++)
    {
        printf("name is :%s \n", studen[i].name);
        printf("pernom is :%s \n", studen[i].per);
        printf(" id :%d \n", studen[i].id);
        printf("point in math :%.2f \n", studen[i].math);
        printf("point in pc :%.2f \n", studen[i].pc);
        printf("point in svt :%.2f\n", studen[i].svt);
    }
    return 0;
}
