#include <stdio.h>
int main (){
    float x1,x2,y1,y2,x3,y3,p;
printf("entre les coordonnee  x1,y1:");
          scanf("%f %f", &x1, &y1);
printf("entre les coordonnee  x2,y2:");
          scanf("%f %f", &x2, &y2);
printf("entre les coordonnee  c1,c2:");
          scanf("%f %f", &x3, &y3);
       p = (x2 - x1) * (y3 - y1) == (y2 - y1) * (x3 - x1);
 if ( p==0 )
          {
            printf(" trouve sur le segment");

          }
else 

          printf(" trouve ou non sur le segment");




          


















    return 0;
}