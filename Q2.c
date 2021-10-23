/*
    Name: Jyotishka Bhattacharjee
    Scholar Id: 2012025
    Department of Computer Science and Engineering,
    National Institute of Technology, Silchar
*/

#include "stdlib.h"
#include "stdio.h"
#include "time.h"

void insertionSort(int *arr, int n);
void arrayPrinting(int *arr, int n);

int main()
{
    int N = 450000, r;
    int arr[N];

    srand(time(0));
    r = -100000;
    for (int i = 0; i < N; i++)
    {
        r = r + rand() % 10;
        arr[i] = r;
    }

    clock_t time;

    time = clock();
    insertionSort(arr, N);
    time = clock() - time;
    printf("Insertion Sort: %f\n", (double)time / CLOCKS_PER_SEC);
}

void insertionSort(int *arr, int n)
{
    for (int i = 0; i < n; i++)
    {
        int key = arr[i], index = i;
        while (index != 0 && arr[index - 1] < key)
        {
            arr[index] = arr[index - 1];
            index--;
        }
        arr[index] = key;
    }
}

void arrayPrinting(int *arr, int n)
{
    for (int i = 0; i < n; i++)
    {
        printf("%d ", arr[i]);
    }
    printf("\n");
}