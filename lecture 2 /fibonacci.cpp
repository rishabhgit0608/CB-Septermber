#include<iostream>
using namespace std;

int main(){
	int n ;
	cin>>n;
	int first = 0;
	int second = 1;
	int nth = 0;
	for(int i = 1;i<n;i++){
		nth = first + second;
		first = second ;
		second = nth;
	}
	cout<<nth;
}