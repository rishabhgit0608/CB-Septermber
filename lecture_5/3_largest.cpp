#include<iostream>
#include<climits>
using namespace std;

int main(){
	int arr[7] = {10,20,30,40,50,60,70};
	int n  = sizeof(arr) / sizeof(int);

	int first_largest = INT_MIN;
	int second_largest = INT_MIN;
	int third_largest = INT_MIN;
	for(int i = 0;i<n;i++){
		if(arr[i]>first_largest){
			third_largest = second_largest;
			second_largest = first_largest;
			first_largest = arr[i];
		}
		else{
			if(arr[i]>second_largest){
				third_largest = second_largest;
				second_largest = arr[i];
			}
			else{
				if(arr[i]>third_largest){
					third_largest = arr[i];
				}
			}
		}
	}
	cout<<first_largest<<endl<<second_largest<<endl<<third_largest;
}