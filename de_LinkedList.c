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
        new_node->data = data;
        new_node->next = NULL;
        list->next = new_node;
    } else {
        add_element_end(list->next, data);
    }
}

p_node remove_first(p_node list) {
    if (list == NULL) {
        return NULL;
    }
    p_node temp = list;
    list = list->next;
    free(temp);
    return list;
}

p_node remove_last(p_node list) {
    if (list == NULL) {
        return NULL;
    }
    p_node prev;
    p_node temp = list;
    while (list->next != NULL)
    {
        prev = list;
        list = list->next;
    }
    prev->next = NULL;
    free(list);
    return temp;
    
}

p_node remove_element(p_node list, int data) {
    if (list == NULL) {
        return NULL;
    }

    if (list->data == data) {
        return remove_first(list);
    }
    p_node temp;
    p_node head = list;
    while (list->next != NULL)
    {
        if (list->next->data == data) {
            temp = list->next;
            list->next = temp->next;
            free(temp);
            return head;
        }
        list = list->next;
    }
    if (list->data == data) {
        return remove_last(list);
    }
    return head;
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

p_node sort(p_node list) {
    if (list == NULL) {
        return NULL;
    }

    if (list->next == NULL) {
        return list;
    }

    p_node min, temp, sorted;
    while (list != NULL)
    {
        min = list;
        temp = list->next;
        while (temp != NULL) {
            if (temp->data < min->data) {
                min = temp;
            }
            temp = temp->next;
        }
        printf("min %d\n", min->data);
        if (sorted == NULL) {
            printf("aqui");
            sorted = min;
        } else {
            sorted->next = min;
        }
        list = list->next;
    }
    sorted->next = NULL;
    return sorted;
    
}