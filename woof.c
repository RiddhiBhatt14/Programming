#include <stdio.h>
#include <stdlib.h>

struct dog{
    char *name; //Bella,Max,Luna,Charlie,Lucy,Cooper,Daisy,Milo
    char *breed; //Golden Retriever,Labrador Retriever,French Bulldog,Beagle,German Shepherd,Poodle,Bulldog
    int age;
    int heightInCm;
    int weightInKg; 
};


void main{
    struct dog panda ={"Panda","Labrador",3,76,82};
    dofInfo(panda);
}

