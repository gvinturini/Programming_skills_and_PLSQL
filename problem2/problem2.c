#include <stdio.h>

int main()
{
    for (int i = 1; i <=100 ; i++ )
    {
        if (i%3 == 0 && i%5 == 0 )
        {
            printf("FooBaa\n");
        } else if (i%3 == 0)
        {
            printf("Foo\n");
        } else if (i%5 == 0)
        {
            printf("Baa\n");
        } else {
            printf("%d\n", i);
        }
    }

    return 0;
}