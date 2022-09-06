#include<stdio.h>
int main () {
    char z[10]  = "riddhi";
    char (*x)[10]=&z;
    char *x1=&z[0];
    char i = 'a';
    char *h=&i;
    printf("%s \n",z);
    printf("%p \n",&x);
    printf("%c \n",i);
    printf("%p \n",h);
    printf("%d \n",&i);
    return 0;
}
