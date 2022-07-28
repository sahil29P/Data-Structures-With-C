#include <stdio.h>
#include <stdlib.h>

struct node
{
    int data;
    struct node *next;
};

void LinkedListTraversal(struct node *ptr)
{
    while (ptr != NULL)
    {
        printf("The elements in the Linked List are : %d\n", ptr->data);
        ptr = ptr->next;
    }
}

struct node *DeleteTheFirstNode(struct node *head);

int main()
{
    struct node *head;
    struct node *second;
    struct node *third;
    struct node *fourth;
    struct node *fifth;

    head = (struct node *)malloc(sizeof(struct node));
    second = (struct node *)malloc(sizeof(struct node));
    third = (struct node *)malloc(sizeof(struct node));
    fourth = (struct node *)malloc(sizeof(struct node));
    fifth = (struct node *)malloc(sizeof(struct node));

    head->data = 10;
    head->next = second;

    second->data = 20;
    second->next = third;

    third->data = 30;
    third->next = fourth;

    fourth->data = 40;
    fourth->next = fifth;

    fifth->data = 50;
    fifth->next = NULL;

    printf("Linked list before Deletion of first node : \n\n");
    LinkedListTraversal(head);

    printf("\n\n");

    printf("Linked list after Deletion of first node : \n\n");
    head = DeleteTheFirstNode(head);
    LinkedListTraversal(head);

    return 0;
}

struct node *DeleteTheFirstNode(struct node *head)
{
    struct node *ptr = head;
    head = head->next;
    free(ptr);
    return head;
}