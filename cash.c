#include <cs50.h>
#include <stdio.h>

int main(void)
{
    int c;
    int cd;
    do
    {
        c = get_int("How much change do you need? ");
        cd = get_int("Quarters: ");
    }
        while(c >= 25 || c < 24 );

    for( int i = 0; i < c; i++)
    {
        printf("change due is %c", cd);
    }
}
