#include <iostream>
using namespace std;

int main (){
    cout << endl;
    cout << "************************************************* Pattern 13 *************************************************\n\n";

    int i=1,n;
    cout << "Enter No. of Rows:";
    cin >> n;
    cout << endl;
    while (i<=n){
        int j = 1;
        while(j<=n){
            char ch ='A'+i-1;
            cout << ch;
            cout << "\t";
            j++;
        }
        cout << endl;
        i++;
    }
}