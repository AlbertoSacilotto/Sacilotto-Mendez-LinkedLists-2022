#include <stdio.h>
#include <stdlib.h>
struct LinkedList{
    int data;
    struct LinkedList *next;
};
typedef struct LinkedList *node;

node createNode(){
    node temp;
    temp = (node)malloc(sizeof(struct LinkedList));
    temp->next = NULL;
    return temp;
}
node addNode(node head, int value){
    node temp,p;
    temp = createNode();
    temp->data = value;
    if(head == NULL){
        head = temp;
    }
    else{
        p  = head;
        while(p->next != NULL){
            p = p->next;
        }
        p->next = temp;
    }
    return head;
}
int main() {
    printf("Hello, World!\n");
    return 0;
}