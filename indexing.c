#include <stdio.h>

int main(){
    int prime[] = {2,3,5,7,11};
    printf("first index : %d\n\n", prime[1]);
    printf("first indexing : %d\n\n", *(prime+1));
    return 0;
}
