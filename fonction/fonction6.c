#include <stdio.h>
int  fibonacci(int a){

    if (a<=1)
    {
        return a;
    }
    return fibonacci(a-1)+fibonacci(a-2);

}
int main (){
    int b;

    printf("entre number b");
    scanf("%d",&b);
    int ru =fibonacci (b);
    printf("fibonacci:%d",ru);
















    return 0;
}



