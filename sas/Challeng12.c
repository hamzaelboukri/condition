#include <stdio.h>
int main (){

    int h1,m1,s1,h2,m2,s2;
    printf("entre le format1 HH MM SS:");
        scanf("%d-%d-%d",&h1,&m1,&s1);
    printf("entre le format2 HH MM SS:");
        scanf("%d-%d-%d",&h2,&m2,&s2);    

        if (h1<h2)

        {
            printf("Le premier instant vient avant le deuxieme");
            if (m1<m2)
            {
                printf("Le premier instant vient avant le deuxieme");
                if (s1<s2)
                {
                    printf("Le premier instant vient avant le deuxieme");
                }
                
            }
            
        }
       else  if (h1>h2)
        {
            printf("Le premier instant vient avant le le premier");
            if (m1>m2)
            {
                printf("Le premier instant vient avant le le premier");
                if (s1>s2)
                {
                    printf("Le premier instant vient avant le le premier");
                }
                
            }
            
        }
        else 
        printf("Il s agit du meme instant.");


















 return 0;



}