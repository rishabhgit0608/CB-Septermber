#include<iostream>
using namespace std;

int main(){
	int n ;
	cin >> n;
	int reversed_num = 0;
	while(n>0){
		reversed_num = reversed_num*10 + (n%10);
		n/=10;
	}
	cout<<reversed_num;
}