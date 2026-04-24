#include <bits/stdc++.h>
using namespace std;

int main() {

    map<int,int> mp;

    mp[1] = 2;        // {1,2}
    mp.emplace(3,1);  // {3,1}
    mp.insert({2,4}); // {2,4}

    // key unique
    // sorted order by key

    for(auto it : mp){
        cout << it.first << " " << it.second << endl;
    }

    cout << mp[1]; // 2
    cout << mp[5]; // 0 (default)

}
