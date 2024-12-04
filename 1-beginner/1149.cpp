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
    int a, n;
    cin >> a >> n;

    ll sum = 0;

    while(n <= 0) cin >> n;

    for(int i = 1; i <= n; i++){
        sum += a;
        a++;
    }

    cout << sum << endl;
}

int main() {
    Maruf
    int t = 1;
    // cin >> t;
    for(int i = 1; i <= t; i++) maruf(i);
}