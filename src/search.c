#include "../include/search.h"
#include <stdbool.h>

bool search(int a[], int n, int x)
{
    // n<0 will never happen since it is length of array

    if (!n)
        return false;
    else if (a[n - 1] != x)
        return search(a, n - 1, x);
    else
        return true;
}