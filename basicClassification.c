
#include "NumClass.h"
#include <math.h>
int isPrime(int n)
{
    if (n == 0)
    {
        return 0;
    }
    for (int i = 2; i < n / 2; i++)
    {
        if (n % i == 0)
        {
            return 0;
        }
    }
    return 1;
}

int isStrong(int n)
{
    int digit, sum, digitfact, i;
    while (n > 0)
    {
        digit = n % 10;
        digitfact = 1;
        for (i = 0; i < digit; i++)
        {
            digitfact += digitfact * i;
        }
        sum += digitfact;
        n = n / 10;
    }
    if (sum == n)
    {
        return 1;
    }
    else
    {
        return 0;
    }

}