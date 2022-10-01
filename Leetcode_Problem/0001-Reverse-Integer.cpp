// Link : https://leetcode.com/problems/reverse-integer/

#include <iostream>
using namespace std;

int reverse(int n)
{
    int digit, ans = 0;
    while (n != 0)
    {

        if ((ans > (INT_MAX) / 10) || (ans < (INT_MIN) / 10))
        {
            return 0;
        }
        else
        {
            digit = n % 10;
            ans = (ans * 10) + digit;
            n = n / 10;
        }
    }
    return ans;
}

int main()
{

    int n;
    cout << "Enter the number: ";
    cin >> n;
    int answer = reverse(n);
    cout << "Reverse Number is: " << answer;
}