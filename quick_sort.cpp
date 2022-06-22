#include <iostream>

using namespace std;

void swap(int a[], int i, int j)
{
    int temp = a[i];
    a[i] = a[j];
    a[j] = temp;
}

void print_array(int a[], int n)
{
    for (int i = 0; i < n; i++)
    {
        cout << a[i] << " ";
    }
}

int partition(int a[], int l, int h)
{
    int pivot = a[l];
    int i = l;
    int j = h;

    while (i < j)
    {
        while (a[i] <= pivot)
        {
            i++;
        }
        while (a[j] > pivot)
        {
            j--;
        }
        if (i < j)
        {
            swap(a, i, j);
        }
    }

    swap(a, j, l);
    return j;
}

void quick_sort(int a[], int l, int h)
{
    if (l < h)
    {
        int pivot = partition(a, l, h);
        quick_sort(a, l, pivot - 1);
        quick_sort(a, pivot + 1, h);
    }
}

int main()
{
    int a[] = {5, 1, 3, 9, 4, 8, 2, 6};
    int size = sizeof(a) / sizeof(a[0]);
    cout << "Original array: ";
    print_array(a, size);
    cout << "\n";
    quick_sort(a, 0, size - 1);
    cout << "Sorted array: ";
    print_array(a, size);

    return 0;
}