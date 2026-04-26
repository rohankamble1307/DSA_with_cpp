#include <iostream>
using namespace std;
void print7(int n) {
    for(int i = 0; i<n; i++) {
        // Print spaces
        for (int j = 0; j<n-i-1; j++) {
            cout << " "; 
        }
        // Print stars
        for (int j = 0; j<2*i+1; j++) {
            cout << "*"; 
        }
        // Print stars
        for (int j = 0; j<n-i-1; j++){
            cout << " ";
        }
        cout << endl;
    }}
void print8(int n) {
    for(int i = 0; i<n; i++) {
        // Print spaces
        for (int j = 0; j<i; j++) {
            cout << " "; 
        }
        // Print stars
        for (int j = 0; j<2*n - (2*i + 1); j++) {
            cout << "*"; 
        }
        // Print stars
        for (int j = 0; j<i; j++){
            cout << " ";
        }
        cout << endl;
    }}    
       int main() {
    int t;
    cin >> t;
    for (int i = 0; i < t; i++) {
       int n;
       cin >> n;
       print7(n);
       print8(n);
    }
}

/*      

        Input: 1
               5

        Output:    *
                  ***
                 *****
                *******
               *********
                *******
                 *****
                  ***
                   *
*/
