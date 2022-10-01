#include <iostream>
using namespace std;

int main (){
    cout << endl;
    cout << "************************************************* Pattern 20 *************************************************\n\n";

    int i=1,n;
    cout << "Enter No. of Rows:";
    cin >> n;
    cout << endl;


    while (i<=n){
        int j = 1;
        //char start = 'A' + n - i;
        while(j<=i){
            char ch = 'A' + n - i + j -1; //cout << start
            cout << ch;
            cout << "\t";
            j++;
        }
        cout << endl;
        i++;
    }
}