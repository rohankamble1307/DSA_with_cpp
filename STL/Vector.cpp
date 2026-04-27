vector<int> v;

v.push_back(1);       // {1}
v.emplace_back(2);    // {1, 2}

vector<pair<int,int>> vec;

vec.push_back({1,2});     // {{1,2}}
vec.emplace_back(3,4);    // {{1,2}, {3,4}}

vector<int>::iterator it = v.begin();

it++;               // move to next
cout << *(it) << " ";

it = it + 2;        // jump

vector<int>::iterator it = v.end();     // after last
vector<int>::iterator it = v.rend();    // reverse end
vector<int>::iterator it = v.rbegin();  // reverse begin

// {10,20,30,40}

for(vector<int>::iterator it = v.begin(); it != v.end(); it++){
    cout << *(it) << " ";
}

for(auto it = v.begin(); it != v.end(); it++){
    cout << *(it) << " ";
}

for(auto it : v){
    cout << it << " ";
}

// erase
v.erase(v.begin()+1);             // remove 2nd element

v.erase(v.begin()+2, v.begin()+4);// remove range


