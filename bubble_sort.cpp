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

void bubble_sort(int a[], int n)
{
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n - i - 1; j++)
        {
            if (a[j + 1] < a[j])
            {
                swap(a, j + 1, j);
            }
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
    bubble_sort(a, size);
    cout << "Sorted array: ";
    print_array(a, size);

    return 0;
}