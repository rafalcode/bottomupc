/* scanf() is our workhorse here
 * it will take the numbers piped into it and 
 * via %lf automatically convert them into floats!
 * magic!
*/
#include <stdio.h>
#include <string.h>

int main(void)
{
    int m, s, sum=0;
    int coun=0;

    printf("Here we take the numbers piped in and calculate the substraction of the previous from the current one.\n"); 
    while (scanf("%d:%d", &m, &s) == 2) {
        coun++;
        sum += m*60+s;
        printf("%i\n", sum);
    }
    printf("%i numbers were summed.\n", coun);

    return 0;
}
