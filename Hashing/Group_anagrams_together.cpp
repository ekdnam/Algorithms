// Practice que from gfg
// Given an array of words, print the count of all anagrams together in sorted order (increasing order of counts).
// For example, if the given array is {“cat”, “dog”, “tac”, “god”, “act”}, then grouped anagrams are “(dog, god) (cat, tac, act)”. So the output will be 2 3.



#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin>>t;
    while(t--){
        vector<int> v;
        int N;
        cin>>N;
        string a[N];
        for(int i=0;i<N;i++){
            cin>>a[i];
        }
        unordered_map<string,int> um;
        for(int i=0;i<N;i++){
            sort(a[i].begin(),a[i].end());
            um[a[i]]++;
        }
        for(auto x:um){
            v.push_back(x.second);
        }
        sort(v.begin(),v.end());
        for(int i=0;i<v.size();i++){
            cout<<v[i]<<" ";
        }
        cout<<endl;
    }
	return 0;
}
