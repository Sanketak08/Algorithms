//Time Complexity -> O(n^2)

#include <iostream>
#include <iomanip>
using namespace std;

void SelectionSort(int arr[], int n)
{
    int temp{};
    for (int i = 0; i < n; i++)
    {
        for (int j = i + 1; j < n; j++)
        {
            if (arr[j] < arr[i]) //Finds the minimum element
            {
                // Swaps the minimum element with other element
                temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
            }
        }

        //printing the sorted array
        cout << arr[i] << " ";
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

    SelectionSort(arr, n);

    return 0;
}