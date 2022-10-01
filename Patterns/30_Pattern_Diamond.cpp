#include <iostream>
#include <cmath>
using namespace std;

int main(){

    cout << "************************************************************ Diamond Pattern **********************************************";
    cout << endl;

    int i=1,a=1,n;
    cout << "Enter No. of Rows: ";
    cin >> n;
    int u = ceil(n/2)+1;
    int v = n-u;
    cout << endl;
    
    // UPPER-PART
    while(i<=u){
       // upper-left 1st triangle with spaces.
       int p=1, q=1, r=1, s=1;
       while(p <= u - i){
        cout << " ";
        cout << "\t";
        p++;
       }
       // upper-left 2nd triangle with star.
       while(q <= i){
        cout << "*";
        cout << "\t";
        q++;
       }

       // upper-right 3rd triangle with star.
       while(r <= i - 1){
        cout << "*";
        cout << "\t";
        r++;
       }
       
       // upper-right 4th triangle with 
       while(s <= u - i){
        cout << " ";
        cout << "\t";
        s++;
       }
        cout << endl;
        i++;
    }
    //LOWER-PART
    while(a<=v){
        int b=1,c=1,d=1,e=1;
        // lower-left triangle with spaces.
        while(b <= a){
            cout << " ";
            cout << "\t";
            b++;
        }
        // lower-left triangle with star.
        while(c <= v - a +1){
            cout << "*";
            cout << "\t";
            c++;
        }

        // right-lower triangle with star.
        while(d <= v - a){
            cout << "*";
            cout << "\t";
            d++;
        }
        // right-lower triangle with spaces.
        while(e <= a){
            cout << " ";
            cout << "\t";
            e++;
        }
        cout << endl;
        a++;
    }
}