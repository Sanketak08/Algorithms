//Time Complexity -> O(n^2)

#include <iostream>
#include <iomanip>
using namespace std;

void BubbleSort(int arr[], int n)
{
    int temp{};

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n - i - 1; j++)
        {
            if (arr[j] > arr[j + 1]) //Checks if previous element is greater than the next
            {
                // Swaps the minimum element with next element
                temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }

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

    BubbleSort(arr, n);

    return 0;
}