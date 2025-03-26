#include <stdio.h>
#include <stdlib.h>

// Define the node structure
struct node {
    int data;
    struct node *link;
};

int main() {
    struct node *head = NULL, *temp = NULL, *current = NULL;

    // Create 5 nodes dynamically
    for (int i = 1; i <= 5; i++) {
        struct node *new_node = (struct node *)malloc(sizeof(struct node));

        if (new_node == NULL) {
            printf("Memory allocation failed for node %d\n", i);
            return 1; // Exit if memory allocation fails
        }

        // Assign data and initialize the link
        new_node->data = i * 10;  // Assigning values like 10, 20, 30, ...
        new_node->link = NULL;

        // If it's the first node, set it as head
        if (head == NULL) {
            head = new_node;
        } else {
            temp->link = new_node; // Link the previous node to the new one
        }

        temp = new_node; // Move temp to the new node
    }

    // Traversing and printing the linked list
    printf("\nLinked List Structure:\n");
    current = head;
    while (current != NULL) {
        printf("[Data: %d] --> [Address: %p] --> [Next Link: %p]\n", 
                current->data, current, current->link);
        current = current->link; // Move to the next node
    }
    
    // Free allocated memory
    current = head;
    while (current != NULL) {
        struct node *next = current->link;
        free(current);
        current = next;
    }

    return 0;
}

