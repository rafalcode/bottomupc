/* scanf() is our workhorse here
 * it will take the numbers piped into it and 
 * via %lf automatically convert them into floats!
 * magic!
*/
#include <stdio.h>
#include <string.h>

int main(void)
{
    int m, s;
    int coun=0;

    // does not use %i for scanning ... because 0 prefix means octal!
    while (scanf("%d:%d", &m, &s) == 2) {
        printf("%i secs\n", m*60+s);
        coun++;
    }
    printf("%i numbers were output.\n", coun);

    return 0;
}
