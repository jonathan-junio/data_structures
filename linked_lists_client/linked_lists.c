#include <stdio.h>
#include "../de_LinkedList.h"

int main(int argc, char const *argv[])
{
    int n, i;
    p_node list;
    //p_node search;
    list = create_list();
    //search = create_list();
    scanf("%d", &n);
    for (i = 0; i < n; i++)
    {
        list = add_element(i+1, list);
    }
    
    //find(5, list, &search);
    delete_element(5, list);
    print_list(list);
    destroy_list(list);
    //printf("%d\n", search->data);
    return 0;
}