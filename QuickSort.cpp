#include <iostream>
#include <algorithm>
#include <fstream>

using namespace std;

int Partition(int* A, int p, int r)
{
    int x = A[r];
    int i = p - 1;

    for (int j = p; j < r; j++)
    {
        if (A[j] <= x)
        {
            i++;
            int temp = A[i];
            A[i] = A[j];
            A[j] = temp;
        }
    }
    int temp = A[i + 1];
    A[i + 1] = A[r];
    A[r] = temp;

    return (i + 1);
}

void Quicksort(int* A, int p, int r)
{
    if (p < r)
    {
        int q = Partition(A, p, r);
        Quicksort(A, p, q - 1);
        Quicksort(A, q + 1, r);
    }
}