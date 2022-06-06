// Problem: E. Base Converssion
// Contest: Codeforces - Sheet #7 (Recursion)
// URL: https://codeforces.com/group/MWSDmqGsZm/contest/223339/problem/E
// Memory Limit: 256 MB
// Time Limit: 1000 ms
// 
// Powered by CP Editor (https://cpeditor.org)

#include<bits/stdc++.h>
using namespace std;


void solve(int n, vector<int> &vect){
    if(n!=0){
        vect.push_back(n%2);
        n/=2;
        solve(n,vect);
    }
    else{
        return;
    }
}


int main(){
	int testcase;
	cin>>testcase;
	while(testcase--){
		int input;
		cin>>input;
		vector<int> v;
		solve(input, v);
		reverse(v.begin(),v.end());
		for(int i = 0; i<v.size(); i++){
		    cout<<v[i];
		}
		cout<<endl;
	}
}