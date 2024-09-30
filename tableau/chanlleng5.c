#include<stdio.h>
int main(){
    int  x,y,muni;
     

    printf("d elements d un tableau :");
       scanf("%d",&x);

  int     tab[x];
       for (int i = 0; i < x; i++)
       {
           printf("d element %d : ", i + 1);
                     scanf("%d",&y);
                     tab[i]=y;
       }
       muni=tab[0];
     for (int i = 0; i < x; i++)
 { 
    if (muni>tab[i])
        {
               muni=tab[i];
        
 }
 
 }
    printf("le muni elemont :%d",muni);






    
 









    return 0;
}