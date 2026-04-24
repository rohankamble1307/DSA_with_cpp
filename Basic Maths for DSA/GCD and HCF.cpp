#include <bits/stdc++.h>
using namespace std;

int gcd(int a, int b){
    while(b != 0){
        int temp = b;
        b = a % b;
        a = temp;
    }
    return a;
}

int main(){
    int a, b;
    cin >> a >> b;
    cout << gcd(a, b);
}

/*
Input: 12 18
Output: 6

Input: 20 25
Output: 5
*/
