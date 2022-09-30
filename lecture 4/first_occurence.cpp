#include<iostream>
using namespace std;

int main(){
	int a[5] = {10,20,30,40,50};
	int t = 60;
	//first occurence
	for(int i =0;i<5;i++){
		if(a[i]==t){
			cout<<i;
			return 0 ;
		}
	}
	cout<<-1;
	return 0;
	// size of array in functional format

	int size = sizeof(a);
	cout<<size/4;
}