#include <stdio.h>
int mini (int a,int b){

if (a>b)
{
    return b;
}
 else
 return a;
}
int main (){
    int a ,b;

    printf("entre number a :");
    scanf ("%d",a);
    printf("entre number b :");
    scanf ("%d",b);

 int   muni = mini (a,b);
    printf("the number minim :%d",muni);




















    return 0;
}


