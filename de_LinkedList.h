#ifndef DE_LINKED_LIST_H
#define DE_LINKED_LIST_H

#include <stdio.h>
#include <stdlib.h>

#ifndef bool
typedef enum _bool {
    false, true
} bool;
#endif

typedef struct Node {
    int data;
    struct Node * next;
} Node;

typedef struct Node * p_node;

p_node create_list();

bool is_empty(p_node list);

void destroy_list(p_node list);

p_node add_element(int x, p_node list);

void print_list(p_node list);

int find(int x, p_node list, p_node *search);

void delete_element(int x, p_node list);

#endif
