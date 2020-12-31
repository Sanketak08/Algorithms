//Time Complexty -> O(log(n))

#include <iostream>
#include <iomanip>
using namespace std;

int FibonacciSearch(int arr[], int n, int x)
{
    //Generating a fibonacci series
    int fibM2 = 0;
    int fibM1 = 1;
    int fibM = fibM2 + fibM1;

    //to obtain the fibonacci no. just greater than or equal to length of the array
    while (fibM < n)
    {
        fibM2 = fibM1;
        fibM1 = fibM;
        fibM = fibM2 + fibM1;
    }

    int offset = -1;
    //Comparing elements while there are to be inspected
    while (fibM > 1)
    {
        int i = min(offset + fibM2, n - 1);

        if (arr[i] < x) //Move fibonacci variables one down
        {
            fibM = fibM1;
            fibM1 = fibM2;
            fibM2 = fibM - fibM1;
            offset = i;
        }
        else if (arr[i] > x) //Move fibonacci variables two down
        {
            fibM = fibM2;
            fibM1 = fibM1 - fibM;
            fibM2 = fibM - fibM1;
        }
        else
        {
            return i;
        }
    }

    //comparing the last element
    if (fibM1 && arr[offset + 1] == x)
    {
        return offset + 1;
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

    int result = FibonacciSearch(arr, n, x);
    cout << "\nElement found at index "
         << result;

    return 0;
}