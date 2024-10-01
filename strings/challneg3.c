#include <stdio.h>
#include <string.h>

int main()
{

    char array[100], tbl[100];
    printf("entre carackter1:");
    scanf("%s", array);
    printf("entre carackter2:");
    scanf("%s", tbl);
    char *fus;

    fus=strcat(array, tbl);

    printf("%s",fus);

    return 0;
}