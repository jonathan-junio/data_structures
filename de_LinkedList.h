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

p_node add_element(p_node list, int data);

void add_element_after(p_node node, int data);

void add_element_end(p_node list, int data);

p_node remove_first(p_node list);

p_node remove_last(p_node list);

p_node remove_element(p_node list, int data);

int count_elements(p_node list);

void print_list(p_node list);

p_node find(int x, p_node list);

p_node reverse(p_node list);

p_node sort(p_node list);

#endif
