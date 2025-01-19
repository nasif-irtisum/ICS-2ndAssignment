#include <stdio.h>
int main ()
{
    float a, b; char c; scanf ("%f %c %f", &a, &c, &b);
    if (c == '+') printf ("Addition: %f\n", a+b);
    else if (c=='-') printf ("Subtraction: %f\n", a-b);
    else if (c=='*') printf ("Multiplication: %f\n", a*b);
    else if (c=='/') {
        if (b==0) printf ("Zero as divisor is not valid!");
        else printf ("Division: %f\n", a/b);
    }

    return 0;
}
