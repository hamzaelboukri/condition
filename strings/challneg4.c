#include <stdio.h>
#include <string.h>

int main()
{

    char array[100], tbl[100];
    printf("entre carackter1:");
    scanf("%s", array);
    printf("entre carackter2:");
    scanf("%s", tbl);
    int a=0;



    if (strcmp(array,tbl)==0)
    
    {
        
        printf("%s",tbl);
    }

    
else 
{
    printf("text not found");
}



   

    return 0;
}