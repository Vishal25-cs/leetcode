#include <stdio.h>
#include <stdlib.h>

struct Node{
    int val;
    struct Node* next;
};

struct Node* mergeTwoLists(struct Node* l1, struct Node* l2){
    struct Node dummy; dummy.next=NULL;
    struct Node* tail=&dummy;
    while(l1 && l2){
        if(l1->val<l2->val){ tail->next=l1; l1=l1->next;}
        else{ tail->next=l2; l2=l2->next;}
        tail=tail->next;
    }
    tail->next = l1 ? l1 : l2;
    return dummy.next;
}

struct Node* create(int v){
    struct Node* n=(struct Node*)malloc(sizeof(struct Node));
    n->val=v; n->next=NULL; return n;
}

void printList(struct Node* head){
    while(head){ printf("%d ",head->val); head=head->next;}
    printf("\n");
}

int main(){
    struct Node* a=create(1); a->next=create(2); a->next->next=create(4);
    struct Node* b=create(1); b->next=create(3); b->next->next=create(4);
    struct Node* ans=mergeTwoLists(a,b);
    printList(ans);
    return 0;
}
