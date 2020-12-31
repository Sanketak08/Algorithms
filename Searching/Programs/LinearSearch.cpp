//Time Complexty -> O(n)

#include <iostream>
#include <iomanip>
using namespace std;

int LinearSearch(int arr[], int n, int x) //function of Linear Search
{
    for (int i = 0; i < n; i++)
    {
        if (arr[i] == x)
        {
            return i;
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

    int result = LinearSearch(arr, n, x);
    cout << "\nElement found at index "
         << result;

    return 0;
}