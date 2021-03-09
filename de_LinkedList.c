#include <stdio.h>
#include <stdlib.h>
#include "de_LinkedList.h"

p_node create_list() {
    return NULL;
}

void destroy_list(p_node list) {
    if (list != NULL) {
        destroy_list(list->next);
    }
    free(list);
}

p_node add_element(int x, p_node list) {
    p_node new_node;
    new_node = malloc(sizeof(Node));
    new_node->data = x;
    new_node->next = list;
    return new_node;
}

void print_list(p_node list) {
    if (list != NULL) {
        print_list(list->next);
        printf("%d ", list->data);
    }
}

int find(int x, p_node list, p_node *search) {
    if (list->data == x) {
        *search = list;
        return 1;
    }
    if (list->next != NULL) {
        find(x, list->next, search);
    }
    return 0;
}