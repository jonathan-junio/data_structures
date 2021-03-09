#include <stdio.h>
#include "../de_LinkedList.h"

int main(int argc, char const *argv[])
{
    int n, i;
    p_node list, search;
    list = create_list();
    search = create_list();
    scanf("%d", &n);
    for (i = 0; i < n; i++)
    {
        list = add_element(i+1, list);
    }
    print_list(list);
    find(5, list, &search);
    printf("%d\n", search->data);
    destroy_list(list);
    return 0;
}