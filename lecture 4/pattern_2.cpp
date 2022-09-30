#include<iostream>
using namespace std;

int main(){
	int n;
	cin>>n;
	int i =0;
	int nsp = n/2;
	int nst = 1;
	while(i<n){
		int csp= 0;
		while(csp<nsp){
			cout<<" ";
			csp++;
		}
		int cst = 0;
		while(cst<nst){
			cout<<"*";
			cst++;
		}
		
		if(i<n/2){
			nsp--;
			nst+=2;
		}
		else{
			nsp++;
			nst-=2;
		}
		i++;
		cout<<endl;
	}
}