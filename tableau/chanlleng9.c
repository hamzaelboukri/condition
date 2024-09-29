#include <stdio.h>
int main()
{
    int x, y, max = 0;

    printf("d elements d un tableau :");
    scanf("%d", &x);

    int tab[x];
    for (int i = 0; i < x; i++)
    {
        printf("d element %d : ", i + 1);
        scanf("%d", &tab[i]);
        
    }

    for (int i = 0; i < x -1; i++)
    {
        for (int t = i + 1; t < x; t++)
        {
            if (tab[i] < tab[t])
            {
                max = tab[t];
                tab[t] = tab[i];
                tab[i] = max;
            }
        }
       
    }


    for (int i = 0; i < x ; i++)
    {
        printf("%d\t", tab[i]);
    }

    return 0;
}