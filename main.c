#include <stdio.h>
#include"mymath.h"
#include"hello.h"
int main() {
    int a,b;
    hello_print();
    printf("enter 2 numbers: ");
    scanf("%d",&a);
    scanf("%d",&b);
    max_min(a,b);
    return 0;
}