#include<stdio.h>
int main (){
    char alphabit;
    printf("entre alphabit :");
     scanf("%c",&alphabit);

     if (alphabit>=65 && alphabit <= 90 )
     {
        printf("Le lettres majuscule %c",alphabit);
     }
      else {

        printf("Le clettre  n'est pas un majuscule:%c",alphabit);

      }










     return 0;
}