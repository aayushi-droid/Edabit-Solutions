#include <stdio.h>
int main(int argc, char const *argv[])
{
    int n, i, m = 0, z = 1;
    printf("Enter the no:");
    scanf("%d", &n);
    while (1)
    {
        m = 0;
        for (i = 1; i <= 20; i++)
        {
            if (n % i != 0)
            {
                m++;
                break;
            }
        }
        if (m == 0)
        {
            printf("%d", n);
            break;
        }

        n = n + 10;
    }

    return 0;
}
