#include<stdlib.h>
#include<stdio.h>
struct Node {
    int data;
    struct Node* next;
};
struct Node* head;
void Print();
void Insert(int data, int n)
{
    struct Node* temp1 = (struct Node*)malloc(sizeof(struct Node*));
    temp1->data = data;
    temp1->next = NULL;
    
}
int main() {
    head = NULL;
    Insert(2,1);
    Insert(3,2);
    Insert(4,1);
    Insert(5,2);
    Print();
}