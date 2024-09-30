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
    
int lasome ,m;

    for (int i = 0; i <tab[i]; i++)
    {
        lasome =lasome+tab[i];    
    }
     m=lasome/x;

     printf("%d/%d=%d",lasome,x,m);
    
    

    return 0;
}