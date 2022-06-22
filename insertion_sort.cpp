#include <iostream>

using namespace std;

void insertion_sort(int a[], int n)
{
    for (int i = 1; i < n; i++)
    {
        int temp = a[i];
        int j = i - 1;
        while (j >= 0 && a[j] > temp)
        {
            a[j + 1] = a[j];
            j--;
        }
        a[j + 1] = temp;
    }
}

void print_array(int a[], int n)
{
    for (int i = 0; i < n; i++)
    {
        cout << a[i] << " ";
    }
}

int main()
{
    int a[] = {5, 1, 3, 9, 4, 8, 2, 6};
    int size = sizeof(a) / sizeof(a[0]);
    cout << "Original array: ";
    print_array(a, size);
    cout << "\n";
    insertion_sort(a, size);
    cout << "Sorted array: ";
    print_array(a, size);

    return 0;
}