#include<iostream>
#include<cmath>
using namespace std;

int main(){
	int n ;
	cin>>n;
	double sq = sqrt(n);
	int i =2;
	while(i<=sq){
		if(n%i == 0){
			cout<<"Not prime";
			return 0;
		}
		i++;ß
	}
	cout<<"Prime";

}