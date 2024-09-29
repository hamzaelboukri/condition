#include <stdio.h>
int max(int a, int b)
{

    if (a < b)
    {
        return b;
    }
    else
        return a;
}
int main()
{
    int a, b;

    printf("entre number a :");
    scanf("%d", &a);
    printf("entre number b :");
    scanf("%d", &b);

int x =max(a,b);
    printf("max is  :%d",x);
    
      
     
}

