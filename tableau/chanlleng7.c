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
      
     for (int i = 0; i < x; i++)
 { 
    for (int t = 0; t >=0; t--)
         if (tab[i]<tab[t])
             {
              muni=tab[t];

         tab[t]=tab[i];
         muni=tab[i];
        
                  
                    }
                     printf("%d",muni);
 }
    






    
 









    return 0;
}