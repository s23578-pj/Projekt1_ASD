#include <iostream>
#include <fstream>

using namespace std;
using namespace chrono;

int *pom;
// Funkcja algorytmu MergeSorta

void merge(int A[], int left, int center, int right)
{
    int i = left, j = center + 1;


    for (int i = left; i <= right; i++)
    {
        pom[i] = A[i];
    }

        for (int k = left; k <= right; k++)
        {
            if (i <= center)
            {
                if (j <= right)
                {
                    if (pom[j] < pom[i])
                    {
                        A[k] = pom[j++];
                    }   
                    else
                    {
                        A[k] = pom[i++];
                    }
                }
                else
                {
                    A[k] = pom[i++];
                }
            }
            else
            {
                A[k] = pom[j++];
            }
        }
}

void __merge_sort(int A[], int left, int right)

// Charakterystyka działania MergeSorta
{

    if (right <= left) return;

    int center = (right + left) / 2;

    __merge_sort(A, left, center);
    __merge_sort(A, center + 1, right);

    merge(A, left, center, right);
}

void merge_sort(int A[],int n, int left, int right)
{
    pom = new int[n];
    __merge_sort(A, left, right);
}