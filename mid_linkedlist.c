#include <stdio.h>
#include <stdlib.h>

struct Node {
    int data;
    struct Node* next;
};

int pushNode(struct Node** head_ref, int data_val)
{
    struct Node* new_node
        = (struct Node*)malloc(sizeof(struct Node));
    if (new_node == NULL) {
        printf("Memory allocation failed.\n");
        exit(1);
    }
    new_node->data = data_val;
    new_node->next = *head_ref;
    *head_ref = new_node;
    return 0;
}

int getMiddle(struct Node* head)
{
    struct Node* slow_ptr = head;
    struct Node* fast_ptr = head;

    while (fast_ptr != NULL && fast_ptr->next != NULL) {
        fast_ptr = fast_ptr->next->next;
        slow_ptr = slow_ptr->next;
    }
    return slow_ptr->data;
}

int main()
{
    struct Node* head = NULL;
    for (int i = 5; i > 0; i--) {
        pushNode(&head, i);
    }
    printf("Middle Value Of Linked List is: %d\n",
           getMiddle(head));
    return 0;
}