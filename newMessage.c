#include <stdio.h>
#include <stdlib.h>

void message(char* msg, int size){
    char newmsg[] = "New Message";
    if(size>sizeof(newmsg)){
        for (int i = 0; i< sizeof(newmsg);i++){
            msg[i] = newmsg[i];
        }
    } else{
        printf("New Message is very big\n\n");
    }
}

int main(){
    char rndmmsg[] = "Edit My function";
    printf("Old Message: %s\n\n", rndmmsg);
    editmsgsent(rndmmsg,sizeof(rndmmsg));
    printf("New Message: %s\n\n", rndmmsg);
    return 0;
}
    