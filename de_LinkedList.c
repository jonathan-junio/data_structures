#include <stdio.h>
#include <stdlib.h>
#include "de_LinkedList.h"

p_node create_list() {
    return NULL;
}

bool is_empty(p_node list) {
    bool is_empty;
    is_empty = list == NULL;
    return is_empty;
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

void delete_element(int x, p_node list) {
    p_node temp, prev, head;
    prev = NULL;
    head = list;
    while (list != NULL)
    {
        if (list->data == x) {
            temp = list;
            if (prev == NULL) {
                head = list->next;
            } else if(list->next == NULL) {
                prev->next = NULL;
            } else {
                prev->next = list->next;
            }
            //free(temp);
        } else {
            prev = temp;
        }
        list = list->next;
    }
    list = head;
}