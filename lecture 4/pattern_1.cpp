#include<iostream>
using namespace std;

int main(){

	int n ;
	cin>>n;
	int i = 1;
	int m = n-n/2;
	int nst = 1;
	while(i<=n){
		if(i<m){
			int cst =0;
			while(cst<nst){
				cout<<"*";
				cst++;
			}
		}

		else{
			int cst = 0;
			while(cst<nst){
				cout<<"*";
				cst++;
			}
		}
		cout<<endl;
		if(i<=m){
			nst++;
		}
		else{
			nst--;
		}
		i++;
	}
}

//debug