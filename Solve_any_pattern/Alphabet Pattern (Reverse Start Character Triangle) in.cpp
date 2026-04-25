#include <iostream>
using namespace std;
void print18(int n){
    for(int i=0;i<n;i++){

        for(char ch = 'A' + (n-1-i); ch <= 'A' + (n-1); ch++){
            cout<<ch;
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
        print18(n);
    }
    return 0;
}

/*


      Input: 1
             5

      Output: E
              DE
              CDE
              BCDE
              ABCDE

*/
