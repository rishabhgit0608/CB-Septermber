#include<iostream>
using namespace std;

int main(){
	int n;
	cin>>n;
	int i =0;
	int num = i%2==0 ? 1 : 0;
	while(i<n){
		int j =0;
		while(j<=i){
			cout<<num;
			num = !num;
			//num = 1-num;
			j++;
		}
		cout<<endl;
		i++;
	}	
}