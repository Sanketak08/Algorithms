//Time Complexty -> O(log(n))

#include <iostream>
#include <iomanip>
using namespace std;

int BinarySearch(int arr[], int n, int x)
{
    int beg = 0;
    int end = n - 1;

    while (beg <= end)
    {
        int mid = (beg + end) / 2; //Mid index of the array

        if (arr[mid] == x)
        {
            return mid;
        }
        else if (arr[mid] < x)
        {
            beg = mid + 1;
        }
        else
        {
            end = mid - 1;
        }
    }
    return -1;
}

int main()
{
    int n{}, x{};
    cout << "\nEnter the size of the array: ";
    cin >> n;
    int arr[n];
    cout << "\nEnter the elements of the array: " << endl;
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    cout << "\nEnter element to search: ";
    cin >> x;

    int result = BinarySearch(arr, n, x);
    cout << "\nElement found at index "
         << result;

    return 0;
}