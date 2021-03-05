/**
 * @brief Exercise 02
 * @author Jonathan Junio G. M. nunes
 */

#include <stdio.h>
#define ERR 1e-5

/**
 * Return the absolute of a double digit
 * @param double n double to find the absolute
 * @return absolute of n
 */ 
double absolute(double n) {
    double ret;
    ret = n < 0? n * (-1): n;
    return ret;
}

/**
 * Return square root of a number using the babylonian method
 * @param int n number to find sqrt
 * @return square root of n
 */ 
double babylonian_sqrt(double n) {
    double sqrt;
    double x = n;
    sqrt = (x + n/x) * 0.5;
    int i = 1;
    while (absolute(sqrt - x) > ERR) {
        x = sqrt;
        sqrt = (x + n/x) * 0.5;
        i++;
    }
    
    return sqrt;    
}

int main(int argc, char const *argv[]) {
    double n, sqrt;
    scanf("%lf", &n);
    sqrt = babylonian_sqrt(n);
    printf("Square number of %.2f is approximately %.4f.\n", n, sqrt);
    return 0;
}
