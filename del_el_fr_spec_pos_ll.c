 //deleting an element from a specific position 
#include <stdio.h>
#include<stdlib.h>
typedef struct Node{
     int data;
     struct Node *link;
}node;
int main() {
//    printf("Try programiz.pro");
    int n;
    printf("total elements are: ");
    scanf("%d",&n);
    node *head=NULL,*temp,*New,*prev;
    while(n--){
        New=(node *)malloc(sizeof(node));
        printf("Enter the data: ");
        scanf("%d",&New->data);
        New->link=NULL;
        
        if(head==NULL){
            head=temp=New;
        }
        else{
            temp->link=New;
            temp=New;
        }
    }
    int pos;
    printf("Enter the position ");
    scanf("%d",&pos);
    temp=head;
    if(pos==1){
        head=head->link;
        free(temp);
    }
    else{
    int count=1;
    while(count<pos){
        prev=temp;
        temp=temp->link;
        count++;
    }
    prev->link=temp->link;
    free(temp);
    
    }
    prev=head;
    while(prev!=NULL){
        printf("%d ",prev->data);
        prev=prev->link;
    }
    
    return 0;
}
