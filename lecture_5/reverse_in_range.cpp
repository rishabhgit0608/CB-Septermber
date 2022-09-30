#include<iostream>
using namespace std;

int main(){
	int arr[] = {10,20,30,40,50,60,70};
	int i  = 2;
	int j = 5;
	while(i<j){
		int temp = arr[i];
		arr[i] = arr[j];
		arr[j] = temp;
		i++;
		j++;
	}
}