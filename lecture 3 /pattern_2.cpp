#include<iostream>
using namespace std;

int main(){
	int n;
	cin>>n;
	int j = 0 ,i = 0, num = 1;
	while(i<n){
		while(j<=i){
			cout<<num;
			num++;
			j++;
		}
		cout<<endl;
		j=0;
		i++;

	}
}