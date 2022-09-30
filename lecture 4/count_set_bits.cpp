#include<iostream>
using namespace std;
int main(){
	int n;
	cin>>n;
	int count = 0;
	while(n!=0){
		int rem = n%2;
		if(rem == 1){
			count++;
		}
		n/=2;
	} 
	cout<<count;
}

/*
	for(int k = 0 ;k<=31;k++){ // 0 to ceil(log2(n+1))
		if((n>>k)&1){
			count++;
		}
	}

*/