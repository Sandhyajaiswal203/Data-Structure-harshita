#include<stdio.h>
#include<stdlib.h>
struct Node
{
   int data;
   struct Node* next;
};
struct Node* head;
void insertatlast(struct Node* head ,int value){
    struct Node* newnode=(struct Node*)malloc(sizeof(struct Node));
    newnode->data=value;
    newnode->next=NULL;
    if(head==NULL){
        head=newnode;
    }
    else{
        struct Node* ptr=head;
        while (ptr->next!=NULL)
        {
            ptr=ptr->next;
        }
        ptr->next=newnode;
    }
}
void display(struct Node* head){

    struct Node* ptr=head;
    while (ptr!=NULL)
    {
       printf("%d\n",ptr->data);
       ptr=ptr->next;
    }
}
int main()
{
 struct Node* head=NULL;
  int a;
scanf("%d",&a);
if(a==1){
    display(&head);
}
else{
    insertatlast(&head,1);
    insertatlast(&head,1);
    insertatlast(&head,1);
    insertatlast(&head,1);
    display(&head);
}

    return 0;
}

