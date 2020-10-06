#include <stdio.h>
#include <math.h>
int main(int argc, char const *argv[])
{
    int a, b, s, m, t, n;
    for (a = 1; a < 500; a++)
    {
        for (b = 1; b < 500; b++)
        {

            if (b > a)
            {
                s = 2000 * (a + b);
                m = 1000 * 1000 + 2 * a * b;
                if (s == m)
                {
                    t = pow((1000 - a - b), 2);
                    n = a * a + b * b;
                    if (t == n)
                    {

                        printf("%d\t%d%\td", a, b, t);
                    }
                }
            }
        }
    }

    return 0;
}
