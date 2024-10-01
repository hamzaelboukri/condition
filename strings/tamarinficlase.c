#include<stdio.h>

int main (){
    int x,y;
    printf("entre number the arry");
    scanf("%d",&x);
    int tab[x+1];


    for (int i = 0; i < x; i++)
    {
        printf("entre elemnt the arry %d:",i+1);
    scanf("%d",&tab[i]);
    }
    printf("entre you want git back in the arry");
    scanf("%d",&y);
    tab[x]=y;
    for (int i = 0; i <= x; i++)
    {
       printf("%d",tab[i]);
        
    }
    
    
    
















    return 0;
}