#include<iostream>
#include<climits>
using namespace std;
int main(){
	int large = INT_MIN;
	int n ;
	cin>>n;
	for(int i =0;i<n;i++){
		int x;
		cin>>x;
		if(x>large){
			large = x;
		}
	}
	cout<<large;
}