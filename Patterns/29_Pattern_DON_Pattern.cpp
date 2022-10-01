#include <iostream>
using namespace std;

int main(){

    cout << "************************************************************ Don Pattern **********************************************";
    cout << endl;

    int i=1,n;
    cout << "Enter No. of Rows: ";
    cin >> n;
    cout << endl;
    
    while(i<=n){
        int j = 1, k = 1, m = 1, p = 1;
        //1st Triangle with numbers.
        while(j<=n-i+1){
            cout << j;
            cout << "\t";
            j++;
        }
        // 2nd Triangle with Star.
        while(k <= i-1){
            cout << "*";
            cout << "\t";
            k++;
        }

        // 3rd Triangle with Star.
        while(m <= i-1){
            cout << "*";
            cout << "\t";
            m++;
        }

        // 4th Triangle with Numbers.
        while(p <= n - i + 1){
            cout << n - i - p + 2;
            cout << "\t";
            p++;
        }

        cout << endl;
        i++;
    }
}