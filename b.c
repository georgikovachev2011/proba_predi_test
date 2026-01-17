#include <stdio.h>

int main(){
    int a;
    int b;
    int c;

    printf("a = ");
    scanf("%d", &a);

    printf("b = ");
    scanf("%d", &b);

    printf("c = ");
    scanf("%d", &c);

    int sum;

    sum = a * b - c;


    printf("The sum is %d", sum);

    return 0;
}