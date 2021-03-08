typedef struct Node {
    int data;
    struct Node * next;
} Node;

typedef struct Node * p_node;

p_node create_list();

void destroy_list(p_node list);

p_node add_element(int x, p_node list);

void print_list(p_node list);