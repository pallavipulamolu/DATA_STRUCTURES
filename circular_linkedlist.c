#include <stdio.h> 
#include <stdlib.h> 
  
struct Node { 
    int data; 
    struct Node* next; 
}; 
  
int isCircular(struct Node* head) 
{ 
    if (head == NULL) 
        return 1; 
    struct Node* ptr; 
    ptr = head->next; 
    while (ptr != NULL && ptr != head) 
        ptr = ptr->next; 
    return (ptr == head); 
} 
struct Node* newnode(int data) 
{ 
    struct Node* temp; 
    temp = (struct Node*)malloc(sizeof(struct Node)); 
    temp->data = data; 
    temp->next = NULL; 
    return temp; 
} 
int main() 
{ 
    struct Node* head = newnode(1); 
    head->next = newnode(2); 
    head->next->next = newnode(3); 
    head->next->next->next = newnode(4); 
    if (isCircular(head)) 
        printf("Yes\n"); 
    else
        printf("No\n"); 
        
    head->next->next->next->next = head; 
    if (isCircular(head)) 
        printf("Yes\n"); 
    else
        printf("No\n"); 
    return 0; 
}