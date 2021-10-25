#include <stdio.h>
#include "mymath.h"
void max_min(int a ,int b){
    if(a>b){
        printf("max=%d and min=%d\n",a,b);
    }
    else if(a<b){
        printf("max=%d and min=%d\n",b,a);
    }
    else{
        printf("%d=%d\n",a,b);
    }
}