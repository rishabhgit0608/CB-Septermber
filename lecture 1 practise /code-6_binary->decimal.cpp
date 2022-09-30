#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int main(){
	long long int n ; 
	cin>>n;
	int decimal = 0;
	int i=0;
	while(n!=0){
		int rem = n%10;
		decimal += rem * pow(2,i);
		i++;
		n = n/10;
	}
	cout<<decimal<<endl;
	return 0;
} 