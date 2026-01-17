#include <stdio.h>

int main(){
    int a;
    int b;

    printf("a = ");
    scanf("%d", &a);

    printf("b = ");
    scanf("%d", &b);

    int sum = a + b;

    printf("The sum is %d", sum);
}