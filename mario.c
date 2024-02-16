#include<stdio.h>
#include<cs50.h>

int main (void)
{
    int n= get_int("altura? ");
    int m = get_int("largura? ");

    while(n < 1)
    {
        n= get_int("altura? ");

    }
    while(m < 1)
    {
        m= get_int("largura? ");
    }

        for (int i=0; i<n;i++)
    {

        for (int j=0; j<m;j++)
        {
            printf("#");
        }
        printf("\n");
    }
}