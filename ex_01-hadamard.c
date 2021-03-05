/**
 * @brief Exercise 01
 * @author Jonathan Junio G. M. nunes
 */

#include <stdio.h>
#include <stdlib.h>


/**
 * Return hadamard product between two vectors
 * @param int n length of arrays
 * @param int[] arr_1 first array
 * @param int[] arr_2 seconf array
 * @return array with hadamard product
 */ 
void * hadamard(int n, int * arr_1, int * arr_2, int * ret) {
    int i = 0;
    for (i = 0; i < n; i++) {
        ret[i] = arr_1[i] * arr_2[i];
    }
}

int main(int argc, char const *argv[])
{
    int i, n, * arr_1, * arr_2, * had;
    scanf("%d", &n);
    arr_1 = malloc(n * sizeof (int));
    arr_2 = malloc(n * sizeof (int));
    had = malloc(n * sizeof (int));
    for (i = 0; i < n; i++) {
        scanf("%d", &arr_1[i]);
    }
    for (i = 0; i < n; i++) {
        scanf("%d", &arr_2[i]);
    }
    hadamard(n, arr_1, arr_2, had);
    for (i = 0; i < n; i++) {
        printf("%d ", had[i]);
    }
    printf("\n");
    free(arr_1);
    free(arr_2);
    free(had);

    return 0;
}
