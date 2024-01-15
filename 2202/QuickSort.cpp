#include <bits/stdc++.h>
using namespace std;

int partition(int arr[], int low, int high, int len)
{

    int pivot = arr[high];

    int i = (low - 1);

    for (int j = low; j <= high; j++)
    {

        if (arr[j] < pivot)
        {

            i++;
            swap(arr[i], arr[j]);
        }
    }
    swap(arr[i + 1], arr[high]);
    cout << "pivot: " << pivot << endl;
    for (int i = 0; i < len; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
    return (i + 1);
}

void quickSort(int arr[], int low, int high, int len)
{

    if (low < high)
    {

        int pi = partition(arr, low, high, len);
        quickSort(arr, low, pi - 1, len);
        quickSort(arr, pi + 1, high, len);
    }
}

int main()
{
    int arr[] = {100, -30, 279, 310, -10, 20, -50, -120, -100, 14};
    int n = sizeof(arr) / sizeof(arr[0]);

    quickSort(arr, 0, n - 1, 10);

    cout << "Sorted Array\n";
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    return 0;
}
