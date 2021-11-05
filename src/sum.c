#include "../include/sum.h"

int sum(int a[], int n)
{
    // n<0 will never happen since it is length of array
    if (n)
        return (a[n - 1] + sum(a, n - 1));
    return 0;
}