#include <stdio.h>
#include <string.h>

int main()
{
    char array[100];

    printf("entre le carackter:");
    scanf("%s",array);

    int longu;

    longu = strlen(array);

    printf("%s\n",array);

    printf("%d",longu);
}