#include<bits/stdc++.h>
using namespace std;

int main(){
	int testcase;
	cin>>testcase;
	while(testcase--){
		int number;
		cin>>number;
		while(number!=1){
			if(number%6==0){
				number/=6;
			}
			else{
				number*=2;
			}
		}
		cout<<number<<endl;
	}
}