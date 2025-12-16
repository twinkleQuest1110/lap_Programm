#include <stdio.h>
#include <stdlib.h>

struct Node {
    int data;
    struct Node* next;
};

void traverLL(struct Node* ptr){
    while(ptr!=NULL){
        printf("Element: %d\n",ptr->data);
        ptr=ptr->next;
    }
}

// struct Node* insertBeg(struct Node*head ,int data){
//     struct Node* ptr = (struct Node*)malloc(sizeof(struct Node));
//     ptr->data=data;
//     ptr->next=head;
//     return ptr;
// }
//here index start with ||1-already done in insertBeg||2||3||4||.......

// struct Node* insertIndex(struct Node*head,int index ,int data){
//     struct Node* ptr = (struct Node*)malloc(sizeof(struct Node));
//     struct Node* p= head;
//     int i=0;
//     while(i!=index-1){
//         p = p->next;
//         i++;
//     }
//     ptr->data =data;
//     ptr->next = p->next;
//     p->next =ptr;
//     return head;
// }

struct Node* insertEnd(struct Node*head,int data){
    struct Node* ptr = (struct Node*)malloc(sizeof(struct Node));
    ptr->data=data;
    struct Node* p = head;
    while(p->next!=NULL){
        p=p->next;

    }
    p->next=ptr;
    ptr->next=NULL;
    return head;

}


int main(){
    struct Node*head;
    head = (struct Node*)malloc(sizeof(struct Node));
    struct Node*second;
    second = (struct Node*)malloc(sizeof(struct Node));
    struct Node*third;
    third = (struct Node*)malloc(sizeof(struct Node));
    struct Node*forth;
    forth = (struct Node*)malloc(sizeof(struct Node));

    head->data=5;
    head->next=second;
    second->data=10;
    second->next=third;
    third->data=15;
    third->next=forth;
    forth->data=20;
    forth->next=NULL;

// traverLL(head);
// head = insertBeg(head,0);
head = insertEnd(head,100);
traverLL(head);
}