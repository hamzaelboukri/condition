#include<stdio.h>
int main (){
    char alphabit;
    printf("entre alphabit :");
             scanf("%c",&alphabit);
             


 if (alphabit>=65 && alphabit <= 90 )
     {
            printf("Le caractere majuscule : %c",alphabit);
     }
   else  if (alphabit>=97 && alphabit <= 122 )
     {
            printf("Le caractere minuscule: %c",alphabit);
     }


     
      else {

         printf("n'est pas caractere :%c",alphabit);

      }













      return 0;
}