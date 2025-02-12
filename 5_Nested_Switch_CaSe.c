#include <stdio.h>

int main()
{
    int num;
    scanf ("%d", &num);
    switch (num)
    {
    case 0:
        printf ("Input non zero number");
        break;

    default:

        switch (!(num & num-1))
        {
        case 1:
            printf ("Power of 2");
            break;

        case 0:
            printf ("Not Power of 2");
            break;

        }
    }


    return 0;
}
