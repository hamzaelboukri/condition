#include <stdio.h>
#include <stdlib.h>
int main (){
  
   int x,y,j;
     printf("the number positive n :");
     scanf("%d",&x);

    
    y=0;
    j=0;
    while(y<x){
        if(j%2!=0){
           printf("%d\n",j);
           y++;
       }
    j++;

    }

return 0;
    
}