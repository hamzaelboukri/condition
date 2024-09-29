#include<stdio.h>
int main(){
    int  x,y;
     

    printf("d elements d un tableau :");
       scanf("%d",&x);

  int tab[x];
       for (int i = 0; i < x; i++)
       {
           printf("d element %d : ", i + 1);
                     scanf("%d",&tab[i]);           
       }

        
        int tmp = 0 ;
        
       for (int i = 0; i < x - 1; i++)
       {
        for (int j=i+1 ; j < x; j++){
        if(tab[i] < tab[j]){
            tmp = tab[i];
            tab[i] = tab[j];
            tab[j] = tmp;

        }

       }
              

       }



       for (int i = 0; i < x ; i++)
       {
         printf("%d ", tab[i]);

       }

            return 0;  

       }
      

       




     



 
    






    
 









