//my pad
#include <stdio.h>
#include <string.h>
#include <cstdlib>

typedef struct Node{
    int value;
    struct Node* next;    
}node;

node* getNode(int val)
{
    node* tmp = (node*)malloc(sizeof(struct Node));
    tmp->next=NULL;
    tmp->value=val;
    return tmp;
}

void print_list(node* head)
{
    node* tmp=head;
    while(tmp!=NULL)
    {
        printf("%d ", tmp->value);
        tmp=tmp->next;
    }
    printf("\n");
    
}
void add_element(node* head, node* newNode)
{
    node* tmp=head;
    while(tmp->next!=NULL)
    {
        tmp=tmp->next;
    }
    tmp->next=newNode;
    
}
node* delete_element_pos(node* head, int pos)
{
    node* tmp=head;
    node* curr=head->next;
    int count=0;
    
    if (head==NULL){
        printf("List is empty");
        return NULL;
    }
    else if(pos==1){
        head=head->next;
        free(tmp);
        return head; 
    }
    else{
        while(count<pos-2)
        {
            tmp=tmp->next;
            curr=curr->next;
            count++;
        }
        tmp->next=curr->next;
        free(curr);
        return head;
    }
    
   
    
}
int main() {
    node* head;
    head=getNode(5);
    int pos=3;
    node* tmp=head;
    int arr[5]={10,20,30,40,24};
    int i=0;
    for(i=0;i<5;i++)
    {
        tmp->next=getNode(arr[i]);
        tmp=tmp->next;
    }
    print_list(head);
    add_element(head, getNode(56));
    printf("After adding an element\n");
    print_list(head);
    head=delete_element_pos(head, pos);
    printf("After Deleting an element\n");
    print_list(head);
    return 0;
}
