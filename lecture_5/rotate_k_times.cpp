#include<iostream>
using namespace std;



int main(){
	int arr[7] = {10,20,30,40,50,60,70};
	int n  = sizeof(arr) / sizeof(int);
	int k = 3;
	//time O(n*k)
/*
	// while(j<k){
	// 	int temp = arr[n-1];
	// 	for(int i = n-2;i>=0;i--){
	// 		arr[i+1] = arr[i];
	// 	}
	// 	arr[0]=temp;
		
	// 	j++;
	// }
	// while(k--){
	// 	int temp = arr[n-1];
	// 	for(int i = n-2;i>=0;i--){
	// 		arr[i+1] = arr[i];
	// 	}
	// 	arr[0]=temp;
	// }
*/
	//another approach by reversing time O(2*n) ~ O(n)
	int i = 0, j=n-1;
	while(i<j){
		int temp = arr[i];
		arr[i] = arr[j];
		arr[j] = temp;
		i++;
		j--;
	}
	i=0,j=k-1;
	while(i<j){
		int temp = arr[i];
		arr[i] = arr[j];
		arr[j] = temp;
		i++;
		j--;
	}
	i = k, j=n-1;
	while(i<j){
		int temp = arr[i];
		arr[i] = arr[j];
		arr[j] = temp;
		i++;
		j--;
	}


	for(int i = 0;i<n;i++){
			cout<<arr[i]<<" ";
		}
}