#include<stdio.h>
int main(int argc, char const *argv[])
{
    long ssquare,sum,n,answer;
    printf("Enter the number:");
    scanf("%ld",&n);
    sum=(n*(n+1))/2;
    ssquare=(n*(n+1)*(2*n+1))/6;
    answer=ssquare-sum*sum;
    printf("%ld",answer);

    return 0;
}
