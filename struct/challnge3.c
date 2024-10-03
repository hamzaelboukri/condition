#include <stdio.h>


typedef struct
{
  float longueur;
  float Largeur;
} rectangle;
 float airerectangle (float longueur,float Largeur){
return longueur*Largeur;

}
int main() {
  rectangle x;

  printf("entre la longueur : ");
  scanf("%f", &x.longueur);

  printf("entre la largeur : ");
  scanf("%f", &x.Largeur);

  float area = airerectangle(x.longueur, x.Largeur);
  printf("laire du rectangle : %.2f\n", area);

  return 0;
}











