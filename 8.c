#include <stdio.h>
int main ()
{
    int year; scanf ("%d", &year);

    if (year%400==0) printf ("Yes\n");
    else if (year % 4==0 && year%100!=0) printf ("Yes\n");
    else printf ("No\n");

    return 0;
}
