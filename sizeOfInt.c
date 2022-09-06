#include <stdio.h>
#include <stdlib.h>

void main(){
    int x1=12, x2=14;
    printf("x1 = %p : x2 = %p\n\n", &x1, &x2);
    printf("x1 = %d : x2 = %d\n\n", &x1, &x2);
    printf ("size of int = %d\n\n", sizeof(x1));

    return 0;
}
