#include<stdio.h>
int main(){
    int  x,y,grand;
     

    printf("d elements d un tableau :");
       scanf("%d",&x);

  int     tab[x];
       for (int i = 0; i < x; i++)
       {
           printf("d element %d : ", i + 1);
                     scanf("%d",&y);
                     tab[i]=y;
       }
       grand=tab[0];
     for (int i = 0; i < x; i++)
 { 
    if (grand<tab[i])
        {
                grand=tab[i];
                    }
 
 }
    printf("le grand elemont :%d",grand);






    
 









    return 0;
}