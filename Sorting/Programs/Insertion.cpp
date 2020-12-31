//Time Complexity -> O(n^2)

#include <iostream>
#include <iomanip>
using namespace std;

void InsertionSort(int arr[], int n)
{
    int key{};
    for (int i = 0; i < n; i++)
    {
        key = arr[i]; //to get the current element

        int j = i - 1;

        //to swap the elements till we reach the correct position
        while (j >= 0 && arr[j] > key)
        {
            arr[j + 1] = arr[j];
            j--;
        }

        //placing current element i.e. key at corret position
        arr[j + 1] = key;
    }

    //printing the sorted array
    for (int k = 0; k < n; k++)
    {
        cout << arr[k] << " ";
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

    InsertionSort(arr, n);

    return 0;
}