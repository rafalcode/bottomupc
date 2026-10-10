/* scanf() is our workhorse here
 * it will take the numbers piped into it and 
 * via %lf automatically convert them into floats!
 * magic!
*/
#include <stdio.h>
#include <string.h>

int main(void)
{
    double curr, prev=0, sub;
    int coun=0;

    printf("Here we take the numbers piped in and calculate the substraction of the previous from the current one.\n"); 
    while (scanf("%lf", &curr) == 1) {
        coun++;
        if(coun==1) {
            prev=curr;
            continue;
        }
        sub = curr - prev;
        printf("%4.4f\n", sub);
        prev=curr;
    }
    printf("%i subtractions were output.\n", coun-1);

    return 0;
}
