#include<stdio.h>
int main(){
    int  x,y,fois,z;
     

    printf("d elements d un tableau :");
       scanf("%d",&x);

  int     tab[x];
       for (int i = 0; i < x; i++)
       {
           printf("d element %d : ", i + 1);
                     scanf("%d",&y);
                     tab[i]=y;
       }
       printf("entre le facteur :");
           scanf("%d",&fois);

 for (int i = 0; i < x; i++)
 {
      z=fois*tab[i];
   
    printf("%d",z);

   
 }
    printf("\n");






    
 









    return 0;
}