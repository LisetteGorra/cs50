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

    //n will display -1 # of the input number selected, ex: select 5, displays 4 #
    for (int i = 0; i < n; i++)
    {

// j is 0, and less than the selected height by -1, then you increment backwards with -i so you get the slant , and j++ to continue that loop as many times as called upon
        for (int j = 0; j < n -1 - i; j++)
    {
      printf(".");
    }
    // print out this many columns
        for (int j = 0; j < i + 1; j++)
        {
            printf("#");
        }
        printf("\n");
    }


}