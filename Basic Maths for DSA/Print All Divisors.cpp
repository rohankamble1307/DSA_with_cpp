#include <bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin >> n;

    for(int i = 1; i <= n; i++){
        if(n % i == 0){
            cout << i << " ";
        }
    }
}

/*
Input: 6
Output: 1 2 3 6

Input: 10
Output: 1 2 5 10
*/
