/* scanf() is our workhorse here
 * it will take the numbers piped into it and 
 * via %lf automatically convert them into floats!
 * magic!
*/
#include <stdio.h>
#include <string.h>

int main(void)
{
    double t;
    int coun=0;

    while (scanf("%lf", &t) == 1) {
        printf("%4.4f\n", t);
        coun++;
    }
    printf("%i numbers were output.\n", coun);

    return 0;
}
