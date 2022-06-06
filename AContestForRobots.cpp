// Problem: A. Contest for Robots
// Contest: Codeforces - Codeforces Round #625 (Div. 2, based on Technocup 2020 Final Round)
// URL: https://codeforces.com/contest/1321/problem/A
// Memory Limit: 256 MB
// Time Limit: 1000 ms
// 
// Powered by CP Editor (https://cpeditor.org)

#include<bits/stdc++.h>
using namespace std;

int main(){
	int size;
	cin>>size;
	int robo[size];
	int bion[size];
	for(int i = 0; i<size; i++){
		cin>>robo[i];
	}
	for(int i = 0; i<size; i++){
		cin>>bion[i];
	}
	int robo1=0,bion1=0;
	for(int i =0; i<size; i++){
		if(robo[i]==1) robo1++;
		else if(bion[i]==1) bion1++;
	}
	if(robo1 == 0 && bion1 == 0) cout<<-1<<endl;
	else if(robo1>bion1) cout<<1<<endl;
	else{
		long long int ans = 0,prev = robo1;
		while(1){
			if(robo1>bion1) break;
			ans++;
			long long int temp = ans*prev;
			robo1 = temp;
		}
		cout<<ans<<endl;
	}
}