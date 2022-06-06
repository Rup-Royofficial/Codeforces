// Problem: A. Print Recursion
// Contest: Codeforces - Sheet #7 (Recursion)
// URL: https://codeforces.com/group/MWSDmqGsZm/contest/223339/problem/A
// Memory Limit: 256 MB
// Time Limit: 1000 ms
// 
// Powered by CP Editor (https://cpeditor.org)

#include<bits/stdc++.h>
using namespace std;

void print(int n, string str){
	if(n==1) {
		cout<<str<<endl;
		return;
	}
	print(n-1,str);
	cout<<str<<endl;
}

int main(){
	int testcase;
	cin>>testcase;
	print(testcase,"I love Recursion");
}