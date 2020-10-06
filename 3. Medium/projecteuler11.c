#include <stdio.h>
#include <math.h>

int main()
{
    int i, count,Number;
    long long int sum=5;

    for (Number = 4; Number < 2000000; Number++)
    {
        count = 0;
        for (i = 2; i <= sqrt(Number); i++)
        {
            if (Number % i == 0)
            {
                count++;
                break;
            }
        }
        if (count == 0)
        {
            sum = sum + Number;
        }
    }
    printf("%lld", sum);
    return 0;
}