/* Prints a sideways sine wave...
   A large portion of credit goes to
   some anonymous guys who helped me 
   understand this and Itsacon from
   devarticles forum. */

#include <stdio.h>
#include <math.h>

#define PI 3.141592

int main(int argc, char *argv[])
{
    int i;
    int j;

    for (i = 0; i < 20; i++)
    {
        j = 18 + (int)(18 * sin(PI * i / 5)); //alter 5 to change freq.

        if (j)
        {
            printf("%*c@\n", j, ' ');
        }
        else
        {
            printf("@");
        }
    }

    return 0;
}
