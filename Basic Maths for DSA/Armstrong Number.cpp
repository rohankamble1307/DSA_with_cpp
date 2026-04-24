#include <bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin >> n;

    int temp = n;
    int sum = 0;

    while(n > 0){
        int last = n % 10;
        sum += (last * last * last);
        n = n / 10;
    }

    if(sum == temp) cout << "Armstrong";
    else cout << "Not Armstrong";
}

/*
Input: 153
Output: Armstrong

Input: 123
Output: Not Armstrong
*/
