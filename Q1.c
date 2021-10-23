/*
    Name: Jyotishka Bhattacharjee
    Scholar Id: 2012025
    Department of Computer Science and Engineering,
    National Institute of Technology, Silchar
*/

#include "stdlib.h"
#include "stdio.h"

int modularExponentiation(int a, int b, int c);
int stringHash(char *str);

int main()
{

    char str[] = "CSE Rocks";

    printf("%d\n", stringHash(str));

    return 0;
}

int modularExponentiation(int a, int b, int c)
{
    int ans = 1, exp = a % c;
    while (b != 0)
    {
        if (b % 2 == 1)
            ans = ((ans % c) * (exp % c)) % c;
        exp = (exp * exp) % c;
        b >>= 1;
    }
    return ans;
}

int stringHash(char *str)
{
    int hash_value = 0, P = 53, N = 1e9 + 3, i = 0;

    while (*str != '\0')
    {
        hash_value += *str * modularExponentiation(P, i, N);
        str++;
    }
    return hash_value;
}