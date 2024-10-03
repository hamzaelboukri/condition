#include <stdio.h>
#include <math.h>
int main (){
    float delt,a ,b,c, resultat1,resultat2;
     printf("entre le x1:");
           scanf("%f",&a);

     printf("entre le x2:");
           scanf("%f",&b);

     printf("entre le number:");
         scanf("%f",&c);
     delt=pow(b,2)-4 *a*c;

       if (delt>0)
       {

        resultat1 = (-b + sqrt(delt)) / (2 * a);
        resultat2 = (-b - sqrt(delt)) / (2 * a);
        printf("Deux solutions: %f%f",resultat1,resultat2);
        
       }

    else if (delt==0)
    {
      resultat1 = -b / (2 * a);
      printf("solutions: %f",resultat1);
        
    }
    else
    printf("ne pas solutoins: ");

       









return 0;



}