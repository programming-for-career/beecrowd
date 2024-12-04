// In the name of Allah, Most Merciful
// Written by: Md. Maruf Sarker
// Problem Link: 

// #include <bits/stdc++.h>
#include <iostream>
#include <vector>
#include <algorithm>
#include <map>
#include <unordered_map>
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
    string s;
    cin >> s;
    // 10 size of char, int map
    unordered_map<char, int> mp(10);
    for(auto i : s){
        // if i is a digit then mp[i]++;
        if(i >= '0' && i <= '9') mp[i]++;
    }

    // if any digit is not present in the map then print 0
    for(int i = 0; i < 10; i++){
        if(mp.find(i + '0') == mp.end()) cout << 0 << sp;
        else cout << mp[i + '0'] << sp;
    }
    cout << endl;
}

int main() {
    Maruf
    int t = 1;
    // cin >> t;
    for(int i = 1; i <= t; i++) maruf(i);
}

#include <stdio.h>

int main(){
     int n;
     scanf("%d", &n);
     int a[n];
     for(int i = 0; i < n; i++){
         scanf("%d", &a[i]);
     }
     int m;
     scanf("%d", &m);
     int b[m];
     for(int i = 0; i < m; i++){
         scanf("%d", &b[i]);
     }
     int c[n + m];
     for(int i = 0; i < n; i++){
         c[i] = a[i];
     }
     for(int i = 0; i < m; i++){
         c[n + i] = b[i];
     }
     for(int i = 0; i < n + m; i++){
         printf("%d ", c[i]);
     }
}