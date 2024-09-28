#include <stdio.h>
int main (){
    float tab[5]={36.5,37.8,38.2,35.9,36.1};
   float max,mun;
   int i;
   // max=tab[0];
       for (int i = 0; i < tab[4]; i++)
       {
           if (tab[i]>max)
          
           { 
             max=tab[i];
           }
         
       }
        printf(" la plus haute temperature  %.1f\n",max)  ;




      //  mun=tab[0];
       for (int i = 4; i > tab[0]; i--)
       {
            if (tab[i]<mun){ 
                mun<max;
             mun=tab[i];
             }
         
       }
        printf("la plus base  temperature  %.1f",tab[i])  ;

       
   






















return 0;
}