#include <stdio.h>

int main()
{

    int ascitable;
    printf (" The complete ASCII table of the characters in the C ");
    for (ascitable = 0; ascitable < 255; ascitable++)
    {
        printf (" \n The value of '%c' character is: %d", ascitable, ascitable);

    }
    return 0;
}
