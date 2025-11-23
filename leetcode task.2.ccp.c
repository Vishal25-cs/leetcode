#include <stdio.h>
#include <stdlib.h>

struct Node {
    int val;
    struct Node* next;
};

struct Node* reverseList(struct Node* head){
    struct Node *prev=NULL,*cur=head,*nxt;
    while(cur){
        nxt=cur->next;
        cur->next=prev;
        prev=cur;
        cur=nxt;
    }
    return prev;
}

struct Node* create(int v){
    struct Node* n=(struct Node*)malloc(sizeof(struct Node));
    n->val=v; n->next=NULL;
    return n;
}

void printList(struct Node* head){
    while(head){ printf("%d ",head->val); head=head->next;}
    printf("\n");
}

int main(){
    struct Node* head=create(1);
    head->next=create(2);
    head->next->next=create(3);
    head=reverseList(head);
    printList(head);
    return 0;
}
