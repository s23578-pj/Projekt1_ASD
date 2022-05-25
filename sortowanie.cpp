//  GŁÓWNY PLIK
#include<iostream>
#include <fstream>
#include "Bubblesort.cpp"
#include "HeapSort.cpp"
#include "MergeSort.cpp"
#include "QuickSort.cpp"

using namespace std;


int main()
{
    // INICJALIZACJA DANYCH

	int tab[500000];
	int tab_size = 500000;

    //   ALGORYTM  MERGESORT
    ifstream file;
    file.open("masaliczb.txt");

    if (!file.good())
    {
        return 0;
    }
    else
    {
        for (int i = 0; i < 500000; i++)
            file >> tab[i];
    }

    file.close();

    auto start = high_resolution_clock::now();
    
    merge_sort(tab, tab_size, 0, tab_size - 1);

    auto stop = high_resolution_clock::now();
    auto time = duration_cast<milliseconds>(stop - start);
    cout << "Czas wykonania algorytmu Mergesort dla tablicy nieposortowanej wynosi: " << time.count() << "ms" << endl;


    start = high_resolution_clock::now();

    merge_sort(tab, tab_size, 0, tab_size - 1);

    stop = high_resolution_clock::now();
    time = duration_cast<milliseconds>(stop - start);
    cout << "Czas wykonania algorytmu Mergesort dla tablicy posortowanej wynosi: " << time.count() << "ms" << endl;

    reverse(begin(tab), end(tab));
    start = high_resolution_clock::now();

    merge_sort(tab, tab_size, 0, tab_size - 1);

    stop = high_resolution_clock::now();
    time = duration_cast<milliseconds>(stop - start);
    cout << "Czas wykonania algorytmu Mergesort dla tablicy posortowanej odwrotnie wynosi: " << time.count() << "ms" << endl;
    cout << endl;

    //  ALGORYTM   MERGESORT

    //     HEAPSORT
    file.open("masaliczb.txt");

    if (!file.good())
    {
        return 0;
    }
    else
    {
        for (int i = 0; i < 500000; i++)
            file >> tab[i];
    }

    file.close();

     start = high_resolution_clock::now();

     Heapsort(tab, tab_size);

     stop = high_resolution_clock::now();
     time = duration_cast<milliseconds>(stop - start);
     cout << "Czas wykonania algorytmu Heapsort dla tablicy nieposortowanej wynosi: " << time.count() << "ms" << endl;


    start = high_resolution_clock::now();

    Heapsort(tab, tab_size);

    stop = high_resolution_clock::now();
    time = duration_cast<milliseconds>(stop - start);
    cout << "Czas wykonania algorytmu Heapsort dla tablicy posortowanej wynosi: " << time.count() << "ms" << endl;

    reverse(begin(tab), end(tab));
    start = high_resolution_clock::now();

    Heapsort(tab, tab_size);

    stop = high_resolution_clock::now();
    time = duration_cast<milliseconds>(stop - start);
    cout << "Czas wykonania algorytmu Heapsort dla tablicy posortowanej odwrotnie wynosi: " << time.count() << "ms" << endl;
    cout << endl;

    //      ALGORYTM    HEAPSORT

    //      ALGORYTM     QUICKSORT
    file.open("masaliczb.txt");

    if (!file.good())
    {
        return 0;
    }
    else
    {
       for (int i = 0; i < 1000; i++)
           file >> tab[i];
    }

    file.close();

    start = high_resolution_clock::now();

    Quicksort(tab, 0, 1000);

    stop = high_resolution_clock::now();
    time = duration_cast<milliseconds>(stop - start);
    cout << "Czas wykonania algorytmu Quicksort dla tablicy nieposortowanej wynosi: " << time.count() << "ms" << endl;


    start = high_resolution_clock::now();

    Quicksort(tab, 0, 1000);

    stop = high_resolution_clock::now();
    time = duration_cast<milliseconds>(stop - start);
    cout << "Czas wykonania algorytmu Quicksort dla tablicy posortowanej wynosi: " << time.count() << "ms" << endl;

    reverse(begin(tab), end(tab));
    start = high_resolution_clock::now();

    Quicksort(tab, 0, 1000);

    stop = high_resolution_clock::now();
    time = duration_cast<milliseconds>(stop - start);
    cout << "Czas wykonania algorytmu Quicksort dla tablicy posortowanej odwrotnie wynosi: " << time.count() << "ms" << endl;
    cout << endl;

    //      ALGORYTM     QUICKSORT

    //      ALGORYTM     BUBBLESORT
    file.open("masaliczb.txt");

    if (!file.good())
    {
        return 0;
    }
    else
    {
        for (int i = 0; i < 500000; i++)
            file >> tab[i];
    }

    file.close();

     start = high_resolution_clock::now();

    Bubblesort(tab, tab_size);

     stop = high_resolution_clock::now();
     time = duration_cast<milliseconds>(stop - start);
    cout << "Czas wykonania algorytmu Bubblesort dla tablicy nieposortowanej wynosi: " << time.count() << "ms" << endl;


    start = high_resolution_clock::now();

    Bubblesort(tab, tab_size);

    stop = high_resolution_clock::now();
    time = duration_cast<milliseconds>(stop - start);
    cout << "Czas wykonania algorytmu Bubblesort dla tablicy posortowanej wynosi: " << time.count() << "ms" << endl;

    reverse(begin(tab), end(tab));
    start = high_resolution_clock::now();

    Bubblesort(tab, tab_size);

    stop = high_resolution_clock::now();
    time = duration_cast<milliseconds>(stop - start);
    cout << "Czas wykonania algorytmu Bubblesort dla tablicy posortowanej odwrotnie wynosi: " << time.count() << "ms" << endl;
    cout << endl;

	return 0;
}