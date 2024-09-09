#include<stdio.h>
#include<stdlib.h>
struct Node
{
   int data;
   struct Node* next;
};

void insertatlast(struct Node** head ,int value){
    struct Node* newnode=(struct Node*)malloc(sizeof(struct Node));
    newnode->data=value;
    newnode->next=NULL;
    if(*head==NULL){
        *head=newnode;
    }
    else{
        struct Node* ptr=*head;
        while (ptr->next!=NULL)
        {
            ptr=ptr->next;
        }
        ptr->next=newnode;
    }
}
void deletionatlast(struct Node** head){
    

}
    
void display(struct Node** head){

    struct Node* ptr=*head;
    while (ptr!=NULL)
    {
       printf("%d\n",ptr->data);
       ptr=ptr->next;
    }
    if(ptr==NULL){
        printf("is empty");
    }
}
int main()
{
 struct Node*head=NULL;
 int a;
   while (1)
    {

        printf("\n\nPress any key :-)\n");
        printf("1 --> Insertion in last \n");
        printf("2 --> Deletion \n");
        printf("3 --> Display\n ");
        printf("4 --> Exit \n");
        printf("enter your choice :");
        scanf("%d", &a);
        int b;

        switch (a)
        {
        case 1:
            printf("\nenter the element you want to insert :");
            scanf("%d", &b);
           insertatlast(&head ,b);
            break;

        case 2:
            
            break;

        case 3:
            display(&head);
            break;

        case 4:
            exit(1);
            break;

        default:
            printf("Invalid Choice");
            break;
        }
    }


    return 0;
}

