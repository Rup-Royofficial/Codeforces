// Problem: B. Print from 1 to N
// Contest: Codeforces - Sheet #7 (Recursion)
// URL: https://codeforces.com/group/MWSDmqGsZm/contest/223339/problem/B
// Memory Limit: 64 MB
// Time Limit: 1000 ms
// 
// Powered by CP Editor (https://cpeditor.org)

#include<bits/stdc++.h>
using namespace std;

void solve(int n){
	if(n==1) {
		cout<<n<<endl;
		return;
	}
	solve(n-1);
	cout<<n<<endl;
}


int main(){
	int times;
	cin>>times;
	solve(times);
}