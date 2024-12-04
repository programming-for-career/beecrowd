// In the name of Allah, Most Merciful
// Written by: Md. Maruf Sarker
// Problem Link: 

#include <bits/stdc++.h>
// #include <iostream>
// #include <vector>
// #include <algorithm>
// #include <map>
// #include <unordered_map>
// #include <debug.h>
using namespace std;

#define ll long long
#define endl "\n"
#define sp " "
#define YES cout << "YES" << endl;
#define NO cout << "NO" << endl;
#define Maruf ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);

class Solution {
public:
    
};

void maruf(int t){
    vector<int> v;
    for(int i = 0; i < 10; i++){
        int x; cin >> x;
        if(x <= 0) v.push_back(1);
        else v.push_back(x);
    }

    for(int i = 0; i < v.size(); i++){
        cout << "X[" << i << "] = " << v[i] << endl;
    }
}

int main() {
    Maruf
    int t = 1;
    // cin >> t;
    for(int i = 1; i <= t; i++) maruf(i);
}