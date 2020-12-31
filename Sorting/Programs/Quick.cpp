#include <iostream>
#include <iomanip>
using namespace std;

void swap(int *a, int *b)
{
    int temp = *a;
    *a = *b;
    *b = temp;
}

int partition(int arr[], int start, int end)
{
    int pivot = arr[end]; // lastelement as pivot
    int i = (start - 1);  // i = -1

    for (int j = start; j <= end - 1; j++)
    {
        // checks if the current element is smaller than the pivot
        if (arr[j] < pivot)
        {
            i++;                    // increment index of smaller element
            swap(&arr[i], &arr[j]); //swapping the current element and the smaller one
        }
    }
    swap(&arr[i + 1], &arr[end]);
    return (i + 1);
}

void QuickSort(int arr[], int start, int end)
{
    if (start < end)
    {
        //getting the index of the pivot
        int pi = partition(arr, start, end);

        //calling recursively Quicksort for the elements smaller than pivot
        QuickSort(arr, start, pi - 1);

        //calling recursively Quicksort for the elements greater than pivot
        QuickSort(arr, pi + 1, end);
    }
}

int main()
{
    int n{};
    cout << "\nEnter the size of the array: ";
    cin >> n;
    int arr[n];
    cout << "\nEnter the elements of the array: " << endl;
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    QuickSort(arr, 0, n - 1);

    //printing the sorted array
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }

    return 0;
}