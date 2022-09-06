#include<stdlib.h>
#include<stdio.h>
typedef struct Node{
    int data;
    struct Node* next;
} Node;
struct Node* head;
void Insert(int x){   
    struct Node* temp = (Node*)malloc(sizeof(struct Node));
    temp->data = x;
    temp->next = head;
    head = temp;
    }
void print(){
    struct Node* temp = head;
    printf("List is: ");
    while (temp != NULL)
    {
        printf("%d",temp->data);
        temp = temp->next;
    }
    printf("\n");
}
int main(){
    head = NULL;
    printf("how many numbers?\n");
    int n,i,x;
    scanf("%d",&n);
    for(i=0;i<n;i++){
        printf("\nenter the number\n");
        scanf("%d",&x);
        Insert(x);
        print();
    }
    printf("\n");
    return 0;
}
