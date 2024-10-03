#include <stdio.h>
#define storage 100
typedef struct
{
  char  name [30];
   char pre[30];
   int age;

}hummon; 
hummon pro[storage];
int count=0;

int main (){


printf("entre name :");
scanf("%s", pro[storage].name);
printf("entre prenom :");
scanf("%s",pro[storage].pre);
printf("entre age :");
scanf("%d",&pro[storage].age);


for (int i = 0; i <count ; i++)
{
    printf(" name is :%c\n",pro[i].name);
printf(" name is :%c\n",pro[i].pre);
printf("age is :%d\n",pro[i].age);
}




}
