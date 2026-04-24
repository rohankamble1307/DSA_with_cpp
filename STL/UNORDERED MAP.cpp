#include <bits/stdc++.h>
using namespace std;

int main() {

    unordered_map<int,int> mp;

    mp[1] = 2;
    mp[2] = 3;

    // no order
    // O(1) average

    for(auto it : mp){
        cout << it.first << " " << it.second << endl;
    }

}
