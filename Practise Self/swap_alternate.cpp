#include<iostream>
using namespace std; 

int main(){
	int n;
	cin>>n;
	int arr[n];
	for(int i =0;i<n;i++) {
		cin>>arr[i];
	}
	if(n==1) return 0;
	for(int i =0; (n%2==0) ? i<n : i<n-1;i+=2){
		int temp = arr[i];
		arr[i] = arr[i+1];
		arr[i+1] = temp;
	}
	for(int i =0;i<n;i++) {
		cout<<arr[i]<<"  ";
	}
}