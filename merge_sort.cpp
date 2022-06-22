#include <iostream>

using namespace std;

void print_array(int a[], int n)
{
    for (int i = 0; i < n; i++)
    {
        cout << a[i] << " ";
    }
}

void merge(int a[], int l, int mid, int r)
{
    int i = l;
    int j = mid + 1;
    int k = l;
    int b[100];

    while (i <= mid && j <= r)
    {
        if (a[i] <= a[j])
        {
            b[k] = a[i];
            i++;
        }
        else
        {
            b[k] = a[j];
            j++;
        }
        k++;
    }
    if (i > mid)
    {
        while (j <= r)
        {
            b[k] = a[j];
            j++;
            k++;
        }
    }
    else
    {
        while (i <= mid)
        {
            b[k] = a[i];
            i++;
            k++;
        }
    }

    for (k = l; k <= r; k++)
    {
        a[k] = b[k];
    }
}

void merge_sort(int a[], int l, int r)
{
    if (l < r)
    {
        int mid = (l + r) / 2;
        merge_sort(a, l, mid);
        merge_sort(a, mid + 1, r);
        merge(a, l, mid, r);
    }
}

int main()
{
    int a[] = {5, 1, 3, 9, 4, 8, 2, 6};
    int size = sizeof(a) / sizeof(a[0]);
    cout << "Original array: ";
    print_array(a, size);
    cout << "\n";
    merge_sort(a, 0, size - 1);
    cout << "Sorted array: ";
    print_array(a, size);

    return 0;
}