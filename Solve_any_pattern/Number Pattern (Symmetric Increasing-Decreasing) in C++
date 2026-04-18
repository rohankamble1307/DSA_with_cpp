#include <iostream>
using namespace std;
void print12(int n){
    for(int i=1;i<=n;i++){

        // 1. Increasing numbers
        for(int j=1;j<=i;j++){
            cout<<j;
        }

        // 2. Spaces
        for(int j=1;j<=2*(n-i);j++){
            cout<<" ";
        }

        // 3. Decreasing numbers
        for(int j=i;j>=1;j--){
            cout<<j;
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
        print12(n);
    }
    return 0;
}

/*     


     Input: 1
            5

     Output: 1        1
             12      21
             123    321
             1234  4321
             1234554321

*/
