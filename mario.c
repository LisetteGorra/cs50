#include <cs50.h>
#include <stdio.h>

int main(void)
{
    int height;
    do
    {
        height = get_int("height:");
        for(int i = 1; i <= height; i++)
            {
                for(int j = 0; j < i; j++)
                printf("#");
                printf("\n");


            }

    }
    while (height < 1 || height > 8);


}
