#include <stdio.h>
#define MAX_DIGIT 200

int main()
{
    int fact[MAX_DIGIT];
    int number_of_digit = 4,i,carry = 0;

    for(i=0; i<number_of_digit; i++)
    {
        int x = fact[i]*10; //product
        fact[i] = (x+carry)%10;
        carry = (x+carry)/10;
        //we are at end of the number with some carry remaining
        //number of digit will increase by 1
        if (i == number_of_digit-1 && carry>0)
            number_of_digit++;
    }

    //to display the calculated factorial
    for(i=number_of_digit-1; i>=0; i--)
    {
        printf("%d",fact[i]);
    }
    printf("\n");

    return 0;
}