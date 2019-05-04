#include <cs50.h>
#include <stdio.h>
int main(void)
{
    int n;
    do
    {
        n = get_int("Pyramid Height: ");
    }
        while (n < 0 || n >= 8);

    // displays # of rows
    for (int i = 0; i < n; i++)
        {

// j is 0, and less than the selected height by -1, then you increment backwards with -i so you get the slant , and j++ to continue that loop as many times as called upon
        for (int j = 0; j < n -1 - i; j++)
        {
          printf(" ");
        }
        // j = 0, and j is less that the ongoing loop of i + 1(column), incrementing each time loop is run
        for (int j = 1; j <= i + 1; j++)
        {
            printf("#");
        }

          printf("  ");


        for(int j = 0; j < i + 1; j++)
        {
            printf("#");

        }
        printf("\n");


}
}