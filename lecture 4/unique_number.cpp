#include<iostream>
using namespace std;

int main(){
	int n ;
	cin>>n;
	int a[n];
	int i = 0;
	int ans = 0;
	for(int j = 0;j<n;j++){
		cin >> a[j];
	}
	while(i<n){
		ans = ans ^ a[i];
		i++;
	}
	cout<<ans ;
}	