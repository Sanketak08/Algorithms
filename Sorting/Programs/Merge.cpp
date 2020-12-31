#include <iostream>
#include <iomanip>
using namespace std;

void Merge(int arr[], int start, int mid, int end)
{
    int i = start, j = mid + 1, k = start;
    int n = end + 1;
    int temp[n];

    while (i <= mid && j <= end) //to compare two arrays
    {
        if (arr[i] < arr[j])
        {
            temp[k] = arr[i];
            i++;
        }
        else
        {
            temp[k] = arr[j];
            j++;
        }
        k++; //incrementing the index of the new array
    }

    //to copy the remaining elements of the first half of the array
    while (i <= mid)
    {
        temp[k] = arr[i];
        i++;
        k++;
    }

    //to copy the remaining elements of the first half of the array
    while (j <= end)
    {
        temp[k] = arr[j];
        j++;
        k++;
    }

    //Copying all the elements of the array temp in input array
    for (int s = start; s <= end; s++)
    {
        arr[s] = temp[s];
    }
}

void MergeSort(int arr[], int start, int end)
{
    if (start < end)
    {
        int mid = (start + end) / 2; //calculate the mid index

        //calling recursively MergeSort for the elements to the left of the mid
        MergeSort(arr, start, mid);

        //calling recursively MergeSort for the elements to the right of the mid
        MergeSort(arr, mid + 1, end);

        //calling recursively Merge to merge the elements in a sorted manner
        Merge(arr, start, mid, end);
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

    MergeSort(arr, 0, n - 1);

    //printing the sorted array
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }

    return 0;
}