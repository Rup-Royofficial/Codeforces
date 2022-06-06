// Problem: D. Print Digits using Recursion
// Contest: Codeforces - Sheet #7 (Recursion)
// URL: https://codeforces.com/group/MWSDmqGsZm/contest/223339/problem/D
// Memory Limit: 256 MB
// Time Limit: 1000 ms
// 
// Powered by CP Editor (https://cpeditor.org)

#include<bits/stdc++.h>
using namespace std;

void solve(string n, int index){
	if(index<n.size()){
		cout<<n[index]<<" ";
		solve(n,index+1);
	}
	else{
		cout<<endl;
		return;
	}
	
}


int main(){
	int testcase;
	cin>>testcase;
	while(testcase--){
		string n;
		cin>>n;
		solve(n,0);
	}
}