#include <bits/stdc++.h>
using namespace std;

int main() {

    multimap<int,int> mp;

    mp.insert({1,2});
    mp.insert({1,3});
    mp.insert({2,4});

    // duplicate keys allowed

    for(auto it : mp){
        cout << it.first << " " << it.second << endl;
    }

}
