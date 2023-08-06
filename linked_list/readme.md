# befor degin in linked list lets understand struct
structs are a way to group several related variables into one place. each variable in the structure kown as a member of the structure.
example : 
struct employee
{
    int id;
    char name[20];
    float salary;
};

// now lets create and allocate memory for 3 nodes:
struct node{
    int data;
    struct node *next;
};
struct node *head, *middle, *last;

head = malloc(sizeof(struct node));
middle = malloc(sizeof(struct node));
last = malloc(sizeof(struct node));

# linked list 
is a linear data structure which looks like a chaine of nodes, where each node is a different element,
unilike arrays, linked list elements are not stored at a contiguous location.

# why linked list data structure needed?
here are a few adv of a linked list that is listed below. it will help you understand why it is necessary to know.
- Dynamic Data structure : the size of memory can be allocated or be allocated at run time

# type of linked list:
1. Single linked list
2. Double linked list
3. Circular linked list

## Singly linked list :
Traversal of items can be done in the forwad direction only due to the linking of every node to its next node.


--<HEAD> -----> (<data><next>)NODE1 ---> (<data><next>)node2 ----->

in C how to declare single linked list node :
struct Node{
    int data;
    struct Node* next;
}

exe:
write a function to count the number of nodes in a given singly linked list :

/*
#include <stdio.h>
#include <stdlib.h>

// linked list node
struct Node{
    int data;
    struct Node* next;
}

void push(struct Node** head_ref, int new_data){
    // allocate node
}
*/