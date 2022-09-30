#include<iostream>
using namespace std;

int main(){
	int n ;
	cin>>n;
	int row = 0;
	int nsp = n-1; //nsp = number of spaces 
	int nst = 1; //nst = number of stars(st)
	while(row < n){
		int csp = 0; //csp = counting spaces
		while(csp<nsp){
			cout<<"  ";
			csp++;
		}
		int cst = 0; //cst = counting stars
		while(cst<nst){
			cout<<"* ";
			cst++;
		}
		row++;
		cout<<endl;
		nsp--;
		nst++;
	}
}
