#include<stdio.h>
int main () {
    int x= 5;
    int *y= &x;
    // char z[10]  = "riddhi";
    // char i = 'a';
    printf("%d \n",x);
    printf("%p \n",&x);
    printf("%p \n",y);
    // printf("%s \n",z );
    // printf("%c \n",i);
    printf("%d \n",*y);
    printf("%p \n",&y);
    return 0;
}