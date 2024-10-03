#include <stdio.h>
int main (){
   float mention;
      
      printf("entre e mention : ");
           scanf("%f",&mention);


    if (mention<10)
    {
        printf(" il est recale");
    }
           
    else if (10<=mention && mention<=12)
    {
        printf(" la mention passable");
    }
    
    else if (12<mention && mention<=14)
    {
        printf(" assez bien");
    }
     
    else if (14< mention && mention<=16)
    {
        printf("bien");
    } 

    else if (16< mention )
    {
        printf("tres bien");
    } 
    
    




    return 0;
}