#include<iostream>
using namespace std;

int main(){
	int n ;
	cin>>n;
	int nstb = n;//check
	int nsta = n;//check
	int nsp = 0;
	int i =0;
	while(i<n){
		int cstb = 0 ;
		while(cstb<nstb){
			cout<<"*";
			cstb++;
		}
		int csp = 0 ;
		while(csp<nsp){
			cout<<" ";
			csp++;
		}
		int csta = 0;
		while(csta<nsta){
			cout<<"*";
			csta++;
		}
	}
}

//check at home 
