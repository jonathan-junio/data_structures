#include <stdio.h>
#include "../de_LinkedList.h"

int main(int argc, char const *argv[])
{
    int n, i;
    p_node list;
    list = create_list();
    scanf("%d", &n);
    for (i = 0; i < n; i++)
    {
        list = add_element(i+1, list);
    }
    print_list(list);
    destroy_list(list);
    
    return 0;
}
