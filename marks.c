#include<stdio.h>
int main (){
struct ex
{
int m;
int e;
int s;
};

struct ex meeta={7,5,6};
struct ex eeta={5,4,9};
struct ex seeta={6,3,4};

printf("meeta has %d marks in maths\n",meeta.m);
printf("eeta has %d marks in science\n",eeta.s);
printf("seeta has %d marks in english\n",seeta.e);
printf("seeta I don't know your marks in science, Would you please let me know \n");
scanf("%d",&seeta.s);
printf("seeta has %d marks in science\n",seeta.s);


return 0;
}

