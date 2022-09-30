#include<iostream>
using namespace std;
int main() {
	int n;
	cin>>n;
	int i = 0;
	while(i<n){
		int j = 0;
		char ch='A';
		while(j<n-i){
			cout<<ch;
			j++;
			ch++;
		}
		j=0;
		ch--;
		while(j<n-i){
			cout<<ch;
			ch--;
			j++;
		}
		cout<<endl;
		i++;
	}
}