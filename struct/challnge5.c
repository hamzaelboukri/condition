#include<stdio.h>
#include <string.h>



typedef struct 
{
   char name[100];
   float note;
   int age; 
} etdint;


int main (){
    float lasome1,lasome2,lasome3;
    

    etdint en={"hamza",{25,1,15},18};
    etdint en1={"said",{25.5,20,5},26};
    etdint en2={"iman",{23.5,2,6},16};
    etdint tab[10]={en,en1,en2};

    
    float max=tab[0].note;
    char nome[100];
for (int i = 0; i < 4; i++)
{
    lasome1=lasome1 +tab[i];
}



printf("%f",tab[3]);

    for (int i = 0; i < 3; i++)
    {
        if (tab[i].note>max)
        {
            max=tab[i].note;
            strcpy(tab[i].name,nome);
        }
        
        
    }

    printf("%s is hige point %.2f",nome,max);




}