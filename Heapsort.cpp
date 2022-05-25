#include <iostream>
#include <algorithm>
#include <fstream>

using namespace std;
using namespace chrono;

void MaxHeapify(int tab[], int heap_size, int i)
{
    int left = 2 * i + 1;
    int right = 2 * i + 2;
    int largest = i;

    if (left < heap_size && tab[left] > tab[largest])
    {
        largest = left;
    }


    if (right < heap_size && tab[right] > tab[largest])
    {
        largest = right;
    }

    if (largest != i)
    {
        swap(tab[i], tab[largest]);
    }

}

void BuildMaxHeap(int tab[], int tab_size)
{
    for (int i = tab_size / 2 - 1; i >= 0; i--)
    {
        MaxHeapify(tab, tab_size, i);
    }
        
}
//Budowanie
void Heapsort(int tab[], int tab_size)
{
    BuildMaxHeap(tab, tab_size);
   
 for (int i = tab_size - 1; i >= 0; i--)
    {
        swap(tab[0], tab[i]);
        MaxHeapify(tab, i, 0);
    }
}