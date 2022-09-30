#include<iostream>
using namespace std;

int main(){
	int n;
	cin>>n;
	int first =0;
	int second = 1;

	for(int i =0;;i++){
		int third = first + second;
		if(third == n){
			cout<<"true";
			return ;
		}
		if(third>n){
			cout<<"false";
			return ;
		}
		first = second;
		second = third;
	}
}