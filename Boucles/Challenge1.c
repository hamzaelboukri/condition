#include<stdio.h>
#include <stdlib.h>
int main (){
  
    int x,y;
    printf("the number x :");
    scanf("%d",&x);
    for (int i=1 ; i <=10; i++)
    {
        //y= x*i;
         printf("%d*%d= %d\n",x,i,y);
         y= x*i;

    }


    
}