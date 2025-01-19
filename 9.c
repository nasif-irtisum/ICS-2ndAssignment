#include <stdio.h>
int main ()
{
    char ch; scanf ("%c", &ch);
    int charValue = (int)ch;

    if (charValue>=33 && charValue<=47) printf ("Special\n");
    else if (charValue>=48 && charValue<=57) printf ("Digit\n");
    else printf ("Alphabet\n");

    return 0;


}
