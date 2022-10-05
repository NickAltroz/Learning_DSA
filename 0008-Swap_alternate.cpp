#include <iostream>
using namespace std;

void print_array(int arr[], int size)
{
    for (int i = 0; i < size; i++)
    {
        cout << arr[i] << "\t";
    }
}

void swap_alternate(int arr[], int size)
{
    for (int i = 0; i < size; i = i + 2)
    {
        if (i+1 < size)
        {
            swap(arr[i], arr[i + 1]);
        }
    }
}

int main()
{
    int arr[6] = {1, 2, 7, 8, 5, 132};
    int size = 6;

    cout << "Original Array:";
    print_array(arr, size);
    cout << endl;
    swap_alternate(arr, size);
    cout << "Swaped Array:  ";
    print_array(arr, size);
}