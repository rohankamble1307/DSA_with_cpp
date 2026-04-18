#include <iostream>
using namespace std;
void print17(int n){
    for(int i=0;i<n;i++){

        // spaces
        for(int j=0;j<n-i-1;j++){
            cout<<" ";
        }

        // increasing chars
        char ch = 'A';
        for(int j=1;j<=i+1;j++){
            cout<<ch;
            ch++;
        }

        // decreasing chars
        ch = 'A' + i - 1;
        for(int j=1;j<=i;j++){
            cout<<ch;
            ch--;
        }

        cout<<endl;
    }
}
int main() {
    int t;
    cin >> t;
    for (int i = 0; i < t; i++) {
        int n;
        cin >> n;
        print17(n);
    }
    return 0;
}


/*

   Input: 1
          5


   Output:     A
              ABA
             ABCBA
            ABCDCBA
           ABCDEDCBA

*/
