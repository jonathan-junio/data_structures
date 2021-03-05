#include <stdio.h>
#include <stdlib.h>
#include "LinkedList.h"

p_node create_list() {
    return NULL;
}

void destroy_list(p_node list) {
    if (list != NULL) {
        destroy_list(list->next);
    }
    free(list);
}