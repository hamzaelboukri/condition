#include <stdio.h>

int main()
{
    int x,y;
    int i,j;
    printf("entre size the tableau[1] :");
    scanf("%d", &x);
    int tab[x];
    for (int i = 0; i < x; i++)
    {
        printf("entre elemnt the tableau %d :", i + 1);
        scanf("%d", &tab[i]);
    }
    printf("=========================================================\n");
    printf("entre size the tableau [2] :");
    scanf("%d", &y);
    int tabl[y];
    for (int j = 0; j < y;j++)
    {
        printf("entre elemnt the tableau %d :", j + 1);
        scanf("%d", &tabl[j]);
    }

int tablau[y+x];
    for (int i = 0; i <x; i++)
    {
       tablau[i] =tab[i];      
        
    }



     for (int j = 0; j <y; j++)
    {
      tablau[j+x]=  tabl[j];      
        
    }
     for (int i = 0; i <y+x; i++)
    {
        printf("%d\n", tablau[i]);
    
    }
    


    return 0;
}