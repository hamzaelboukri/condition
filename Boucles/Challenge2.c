#include <stdio.h>
#include <stdlib.h>
int main (){
  
    int x,y=1;
    printf("the number positive x :");
    scanf("%d",&x);

     if (x<0)
     {
        printf("entre number positive :");
     }
     else
    for (int i=1 ; i <=x; i++)
    {
        y= y*i;
         printf("%d \n",y);

    }


    
}