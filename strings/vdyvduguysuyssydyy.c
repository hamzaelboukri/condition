#include <stdio.h>

int main() {
 
    int tab[6] = {1,3,0,0,3,4};
    int taille = 6;

    int str =taille-1 ;
     int tmp ;
    for( int i=0 ; i<str ; i++){
        if(tab[i]==0){
           tmp = tab[str];
           tab[str]=tab[i];
           tab[i]=tmp;
           str--;
        }
    }
}