#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int find_squareRoot(int n)
{
    long long int mid;
    int start = 0;
    int end = n;
    int ans = -1;
    while (start <= end)
    {
        mid = start + (end - start) / 2;
        long long int square = mid * mid;
        if (square == n)
        {
            return mid;
        }
        else if (square < n)
        {
            ans = mid;
            start = start + 1;
            
        }
        else
        {   
            end = mid - 1;
        }
    }
    return ans;
}

double decimal_part(int int_part, int precision, int n)
{
    double factor = 1;
    double ans = int_part;
    for (int i = 1; i <= precision; i++)
    {
        factor = factor / 10;
        for (double j = ans; j * j < n; j = j + factor)
        {
            ans = j;
        }
    }
    return ans;
}

int main()
{
    int n = 37;
    if (n <= 1)
    {
        cout << "Square root is: " << n;
    }
    else
    {

        int int_part = find_squareRoot(n);
        double ans = decimal_part(int_part, 3, n);
        cout << endl
             << "SquareRoot is: " << ans;
    }
}