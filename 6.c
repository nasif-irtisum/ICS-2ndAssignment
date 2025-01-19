#include <stdio.h>
int main ()
{
    int number; scanf ("%d", &number);

    if (number > 0 && !(number & number - 1)) printf ("Yes\n");
    else if (number > 0 && (number & number - 1)) printf ("No\n");
    else {
        if (number==0) printf("Zero is not a valid input\n");
        else printf ("Negative input is not valid\n");
    }
    return 0;
}
