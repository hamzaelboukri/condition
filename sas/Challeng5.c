#include<stdio.h>
int main (){
   long int ans,choixce,mois,jour,Heures,Minutes,Secondes;
   
                 printf("entre  le nombre d annees a convertir :");
                                 scanf("%ld",&ans);
printf("Choisissez l unite de conversion :\n");
      printf("1-mois\n");
      printf("2-jour\n");
      printf("3-Heures\n");
      printf("4-Minutes\n");
      printf("5-Secondes\n");
       scanf("%d",&choixce);
      switch (choixce)
      {
      case 1:
      mois=ans*12;
        printf("mois:%ld",mois);
        
        break;

        case 2:
        jour=ans*365;
        printf("jour:%ld",jour);
    break;
        case 3:
        Heures=ans*8766;
        printf("Heures:%ld",Heures);
    break;
        case 4:
        Minutes=ans*525960;
        printf("Minutes:%ld",Minutes);
    break;
        case 5:
        Secondes=ans*31557600;
        printf("Secondes:%ld",Secondes);

      break;
      default:
      printf(" enter number 1to5");
        break;
      }
















}