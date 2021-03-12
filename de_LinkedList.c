#include <stdio.h>
#include <stdlib.h>
#include "de_LinkedList.h"

p_node create_list() {
    return NULL;
}

p_node create_node () {
    p_node new_node;
    new_node = malloc(sizeof(Node));
    if (new_node == NULL) {
        exit(1);
    }
    return new_node;
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

p_node add_element(p_node list, int data) {
    p_node new_node;
    new_node = create_node();
    new_node->data = data;
    new_node->next = list;
    return new_node;
}

void add_element_after(p_node node, int data) {
    p_node new_node = create_node();
    new_node->data = data;
    new_node->next = node->next;
    node->next = new_node;
}

void add_element_end(p_node list, int data) {
    if (list != NULL && list->next == NULL) {
        p_node new_node = create_node();
    }
    
}

int count_elements(p_node list) {
    int count = 0;
    while (list != NULL)
    {
        count++;
        list = list->next;
    }
    return count;
    
}

void print_list(p_node list) {
    if (list != NULL) {
        print_list(list->next);
        printf("%d ", list->data);
    }
}

p_node find(int x, p_node list) {
    if (list->data == x) {
        return list;
    }
    if (list->next != NULL) {
        find(x, list->next);
    }
    return NULL;
}

p_node reverse(p_node list) {
    if (list == NULL) {
        return NULL;
    }

    if (list->next == NULL) {
        return list;
    }

    p_node rest = reverse(list->next);
    list->next->next = list;
    list->next = NULL;
    return rest;
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