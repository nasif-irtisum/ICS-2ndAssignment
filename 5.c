#include <stdio.h>
int main()
{
    int number; scanf ("%d", &number);

    if (number>0) {
        if (!(number & number-1)) printf ("Yes\n");
        else printf ("No\n");
    }
    else printf ("No\n");

    return 0;
}
