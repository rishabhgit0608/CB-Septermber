#include<iostream>
using namespace std;

int main(){
	int n;
	cin>>n;
	int row = 0;
	int nsp = n-1;
	int nst = 1;
	while(row<n){
		int csp = 0;
		while(csp<nsp){
			cout<<"  ";
			csp++;
		}
		int cst = 0;
		while(cst<nst){
			cout<<"* ";
			cst++;
		}
		row++;
		nst = 2*row+1;
		nsp--;
		cout<<endl;
	}	
}