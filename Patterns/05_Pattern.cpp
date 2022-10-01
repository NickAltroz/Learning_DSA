#include <iostream>
using namespace std;

int main (){
    cout << endl;
    cout << "************************************************* Pattern 5 *************************************************\n\n";

    int i=1,n;
    cout << "Enter No. of Rows:";
    cin >> n;
    cout << endl;

    int count =1;
    while (i<=n){
        int j =1;
        while(j<=n){
            cout << count;
            cout << "\t";
            count++;
            j++;
        }
        cout << endl;
        i++;
    }
}