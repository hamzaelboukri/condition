#include<stdio.h>
int main(){
    int  x,y;
     

    printf("d elements d un tableau :");
       scanf("%d",&x);

  int     tab[x];
       for (int i = 0; i < x; i++)
       {
           printf("d element %d : ", i + 1);
                     scanf("%d",&y);
                     tab[i]=y;
       }
       
 for (int i = 0; i < x; i++)
 {
    printf("%d",tab[i]);
 }
    printf("\n");






    
 









    return 0;
}