/**
 * @brief Exercise 03 - find π using random points on the first quadrant
 * using the distribution of points and area from the circle we can approximate π value
 * @author Jonathan Junio G. M. nunes
 */

#include <stdio.h>
#include <stdlib.h>
#include <math.h>

/**
 * structure representing point
 */
typedef struct Point {
    float x;
    float y;
} Point;

/**
 * Return distance point - origin
 * @param Point p 
 * @return distance between point and origin
 */
float distance_origin(Point p) {
    float x, y;
    x = p.x * p.x;
    y = p.y * p.y;

    return sqrt(x + y);
}

/**
 * @return random number between 0 and 1
 */ 
float random_float() {
    float x = (float)rand()/(float)RAND_MAX;

    return x;
}

/**
 * Return approximated value of π
 * @param int n number of points used in approximation
 * @return approximation of π
 */ 
float find_pi(int n) {
    int i;
    float inside, prob, pi;
    Point p;
    inside = 0;
    for (i = 0; i < n; i++)
    {
       p.x = random_float();
       p.y = random_float();
       if (distance_origin(p) <= 1) {
           inside++;
       }
    }
    prob = inside / n;
    pi = prob * 4;

    return pi; 

}

int main(int argc, char const *argv[])
{
    int n;
    float pi;
    scanf("%d", &n);
    pi = find_pi(n);

    printf("Value of pi approximated using %d points: %.4f\n", n, pi);

    return 0;
}
