#include <iostream>
using namespace std;

int find_pivot(int arr[], int size)
{
    int mid, start = 0, end = size - 1;

    while (start < end)
    {
        mid = start + (end - start) / 2;
        if (arr[mid] >= arr[0])
        {
            start = mid + 1;
        }
        else
        {
            end = mid;
        }
    }
    return start;
}


int main()
{
    int arr[5] = {7, 9, 1, 2, 3};
    int size = 5;
    int key = 7;

    int pivot = find_pivot(arr, size);
    cout << "Pivot(index) is: " << pivot << endl;

}