#include<iostream>
using namespace std;

int main(){
	int n;
	cin>>n;
	int i =0;
	int nstb = 1;
	int nsta = 1;
	int nsp = 2*n-1;
	int m =2*n+1;
	while(i<m){
		int count = n;
		int cstb = 0 ;
		while(cstb<nstb){
			cout<<count;
			cstb++;
			count--;
		}
		int csp = 0;
		while(csp<nsp){
			cout<<" ";
			csp++;
		}
		if(i==m/2){
			count+=2;
		}
		else{
			count++;
		}
		int csta = 0;
		while(csta<nsta){
			cout<<count;
			count++;
			csta++;
		}
		i++;
		if(i<m/2){
			nstb++;
			nsta++;
			nsp-=2;
		}
		else if(i==m/2){
			nstb++;
			nsp-=2;
		}
		else{
			nstb--;
			if(i!=m/2+1){
				nsta--;
			}
			

			nsp+=2;
		}

		cout<<endl;
	}
}

/*
	         5          	     5 
             5 4               4 5 
             5 4 3           3 4 5 
             5 4 3 2       2 3 4 5 
             5 4 3 2 1   1 2 3 4 5 
             5 4 3 2 1 0 1 2 3 4 5 
             5 4 3 2 1   1 2 3 4 5 
             5 4 3 2       2 3 4 5 
             5 4 3           3 4 5 
             5 4               4 5 
             5                   5 
*/