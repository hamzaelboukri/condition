#include <stdio.h>

int main()
{
    int x;
    printf("entre size the tableau :");
    scanf("%d", &x);
    int tab[x];
    for (int i = 0; i < x; i++)
    {
        printf("entre elemnt the tableau %d :", i + 1);
        scanf("%d", &tab[i]);
    }
    


    for (int i = 0; i <tab[i]; i++)
    {
        if (tab[i]%2==0)
        {
            printf ("%d \n",tab[i]);
        }
        
    }
    
    

    return 0;
}