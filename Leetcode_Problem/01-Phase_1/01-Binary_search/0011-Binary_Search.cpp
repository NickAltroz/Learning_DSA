#include <iostream>
using namespace std;

int binary_search(int arr[], int size, int key)
{
    int start = 0;
    int mid;
    int end = size - 1;
    while (start <= end)
    {
        mid = (start + end) / 2;
        if (arr[mid] == key)
        {
            return 1;
        }
        else if (key > arr[mid])
        {
            start = mid + 1;
        }
        else
        {
            end = mid - 1;
        }
    }
    return 0;
}

int main()
{
    int arr[6] = {3, 7, 11, 13, 19, 27};
    int size = 6;

    int key;
    cout << "Enter Key to be found.";
    cin >> key;
    cout << endl;
    int ans = binary_search(arr, size, key);
    if (ans)
    {
        cout << "Found.";
    }
    else
    {
        cout << "Not Found.";
    }
}