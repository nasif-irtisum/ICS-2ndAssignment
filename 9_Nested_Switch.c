#include <stdio.h>
int main ()
{
    char ch; scanf ("%c", &ch);

    switch ((ch>='a' && ch<='z')||(ch>='A' && ch <= 'Z'))
    {
    case 1:
        printf ("Alphabet\n");
        break;

    default:
        switch (ch>='0' && ch <= '9')
        {
        case 1:
            printf ("Digit\n");
            break;

        default:
            printf ("Special character\n");
        }

    }
}
