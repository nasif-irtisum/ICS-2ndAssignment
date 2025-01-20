#include <stdio.h>
int main ()
{
    int op; float a,b;
    scanf ("%f %f", &a, &b);
    scanf ("%d", &op);

    if (op==1) printf ("Addition: %f\n", a+b);
    else if (op==2) printf ("Subtraction: %f\n", a-b);
    else if (op==3) printf ("Multiplication: %f\n", a*b);
    else if (op==4) {
        int op; scanf ("%d", &op);
        if (op==1) printf ("Quotient: %f",a/b);

        else if (op==2) {
            int x = (int)a, y = (int)b;
            printf ("Reminder: %f", x%y);
        }
    }

    return 0;

}
