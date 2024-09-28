#include <stdio.h>


int main (){

    //char alphabit []= {'a','b','c','d'};
    char test[] = "abcdnyhhyyhnxuhnuhuhuuhx";
    
    

    

    for (int i = 0;  test[i] != '\0' ; i++)
    {
       if (test[i]=='x')
       {
         test[i]='z';
       }
       
    }
    
   printf("%s",test);
     











}