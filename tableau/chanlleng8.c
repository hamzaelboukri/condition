#include <stdio.h>
int main()
{
    int x;

    printf("d elements d un tableau :");
    scanf("%d", &x);

    int tab1[x];
    int tab2[x];
  

    for (int i = 0; i < x; i++)
    {
        printf("d element %d : ", i + 1);
        scanf("%d", &tab1[i]);
    }


    for (int i = 0; i < x; i++)
    {
       tab2[i] = tab1[i];
    }
    
    for (int i = 0; i < x; i++)
    {
    printf(" |--Tableau Origin-- %d |--Tableau copier-- %d\n",tab1[i],tab2[i]);

    }



    
    

    return 0;
}