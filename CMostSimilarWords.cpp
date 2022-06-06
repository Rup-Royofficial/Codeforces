// Problem: C. Most Similar Words
// Contest: Codeforces - Codeforces Round #790 (Div. 4)
// URL: https://codeforces.com/contest/1676/problem/C
// Memory Limit: 256 MB
// Time Limit: 2000 ms
// 
// Powered by CP Editor (https://cpeditor.org)

#include<bits/stdc++.h>
using namespace std;

int main(){
	int testcase;
	cin>>testcase;
	while(testcase--){
		int numOfStr,lnOfStr;
		cin>>numOfStr>>lnOfStr;
		string st,str1;
		int moves = 0;
		for(int i = 0;i<numOfStr; i++){
			if(i>0){
				cin>>str1;
				for(int i = 0; i<lnOfStr; i++){
					moves+=str1[i]-st[i];
				}
				cout<<moves<<endl;
				break;
			}
			cin>>st;
			
		}
	}
}