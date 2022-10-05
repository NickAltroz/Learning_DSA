#include <iostream>
using namespace std;

void print_array(int arr[], int size)
{
    for (int i = 0; i < size; i++)
    {
        cout << arr[i] << "\t";
    }
}

void reverse_array(int arr[], int size)
{
    int start = 0, end = size - 1;
    for (int i = 0; i < size; i++)
    {
        if (start < end)
        {
            swap(arr[start], arr[end]);
        }
        start++;
        end--;
    }
}

int main()
{
    int arr[6] = {12, -2, 5, 3, 8, 45};
    int size = 6;

    cout << "original Array: ";
    print_array(arr, size);
    reverse_array(arr, size);
    cout << endl;
    cout << "Reverse Array: ";
    print_array(arr, size);
}