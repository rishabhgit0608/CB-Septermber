#include<iostream>
using namespace std;

int main(){
	int n ; 
	cin>>n;
	int row = 1;
	while(row<=n){
		int j  =0 ;
		while(j<row){
			cout<<"* ";
			j++;
		}
		cout<<endl;
		row++;
	}
}