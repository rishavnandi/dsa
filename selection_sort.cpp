#include <iostream>

using namespace std;

void print_array(int a[], int n)
{
    for (int i = 0; i < n; i++)
    {
        cout << a[i] << " ";
    }
}

void swap(int a[], int i, int j)
{
    int temp = a[i];
    a[i] = a[j];
    a[j] = temp;
}

void selection_sort(int a[], int n)
{
    for (int i = 0; i < n - 1; i++)
    {
        int min = i;
        for (int j = i + 1; j < n; j++)
        {
            if (a[j] < a[min])
            {
                min = j;
            }
        }
        if (min != i)
        {
            swap(a, min, i);
        }
    }
}

int main()
{
    int a[] = {5, 1, 3, 9, 4, 8, 2, 6};
    int size = sizeof(a) / sizeof(a[0]);
    cout << "Original array: ";
    print_array(a, size);
    cout << "\n";
    selection_sort(a, size);
    cout << "Sorted array: ";
    print_array(a, size);

    return 0;
}