#include<iostream>
using namespace std;

int reverse(int x){
	if(x<0){
		flag = true;
	}
	int reversed_num = 0;
	while(x!=0){
		reversed_num = reversed_num*10 + x%10;
		x /= 10;
	}
	return reversed_num;
}

int main(){
	int num ;
	cin>>num;
	cout<<reverse(num);
}
