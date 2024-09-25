
#include <stdio.h>
#include <stdlib.h>
#include <time.h>




int main() {

 int x;
     


    srand(time(0));
    x=rand()%8;
    
    char*jours[7] = {"dimanche", "lundi", "mardi", "mercredi", "jeudi", "vendredi", "samedi"};


    

    printf("%s",jours[x]);

    









return 0 ;


}