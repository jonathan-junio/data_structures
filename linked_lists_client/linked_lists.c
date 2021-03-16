#include <stdio.h>
#include "../de_LinkedList.h"

int main(int argc, char const *argv[])
{
    int n, i;
    p_node list;
    p_node search;
    list = create_list();
    //search = create_list();
    //search = create_list();
    scanf("%d", &n);
    for (i = 0; i < n; i++)
    {
        list = add_element(list, i+1);
    }
    
    search = list->next->next;
    add_element_after(search, 10);
    add_element_end(list, 30);

    //search = find(5, list);
    //search = reverse(list);
    //delete_element(5, list);
    //print_list(list);
    print_list(list);
    list = remove_element(list, 5);
    printf("\n\n");
    print_list(list);
    printf("\n\n");
    list = sort(list);
    print_list(list);
    //printf("search: %d", search->data);
    destroy_list(list);
    //printf("%d\n", search->data);
    return 0;
}