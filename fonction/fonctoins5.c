#include <stdio.h>
int fois(int a)
{
   int y=1;
    for (int i = 1; i < a; i++)
    {
        y*=i;
    }
   return y  ;
}
int main()
{

    int t , x;

    printf("entre number :");
    scanf("%d", &x);
 t  =  fois(x);

    printf("%d \n%d",x, t);
}
