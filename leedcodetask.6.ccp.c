#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

struct Node{
    int val;
    struct Node* next;
};

bool hasCycle(struct Node* head){
    struct Node *slow=head,*fast=head;
    while(fast && fast->next){
        slow=slow->next;
        fast=fast->next->next;
        if(slow==fast) return true;
    }
    return false;
}

struct Node* create(int v){
    struct Node* n=(struct Node*)malloc(sizeof(struct Node));
    n->val=v; n->next=NULL; return n;
}

int main(){
    struct Node* head=create(3);
    head->next=create(2);
    head->next->next=create(0);
    head->next->next->next=create(-4);
    head->next->next->next->next=head->next; // cycle
    if(hasCycle(head)) printf("Cycle detected\n");
    else printf("No cycle\n");
    return 0;
}
