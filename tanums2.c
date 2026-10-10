/* scanf() is our workhorse here
 * it will take the numbers piped into it and 
 * via %lf automatically convert them into floats!
 * magic!
*/
#include <stdio.h>
#include <string.h>

int main(void)
{
    double t, told=0, sub;
    int coun=0;

    printf("\n"); 
    while (scanf("%lf", &t) == 1) {
        coun++;
        if(coun==1) {
            told=t;
            continue;
        }
        sub = t-told;
        printf("%4.4f\n", sub);
        told=t;
    }
    printf("%i numbers were output.\n", coun);

    return 0;
}
