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

int binary_search(int arr[], int s, int e, int key)
{
    int start = s;
    int end = e;
    int mid;

    while (start <= end)
    {
        mid = start + (end - start) / 2;
        if (key == arr[mid])
        {
            return mid;
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
    return -1;
}



int main()
{
    int arr[5] = {7, 9, 1, 2, 3};
    int size = 5;
    int key = 7;

    int pivot = find_pivot(arr, size);
    cout << "Pivot is: " << pivot << endl;

    int ans;
    if(key >= arr[pivot] && key <= arr[size-1]){
        ans = binary_search(arr, pivot, size-1, key);
    }else{
        ans = binary_search(arr, 0, pivot-1, key);
    }

    cout << endl;
    cout << "element is located at index: " << ans;

}