#include <stdio.h>
#include <string.h>

int main()
{
    char array[100];

    printf("entre le carackter:");
    scanf("%s",array);

    int longu;

    longu = strlen(array);

    for (int i=longu; i >=0 ; i--)
    {
       printf("%c",array[i]);
    }
    
}