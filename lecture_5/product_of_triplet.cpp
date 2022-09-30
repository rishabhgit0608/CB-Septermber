#include<iostream>
#include<climits>
#include<cmath>
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
	int first_smallest = INT_MAX;
	int second_smallest = INT_MAX;
	for(int i =0;i<n;i++){
		if(arr[i]<first_smallest){
			second_smallest = first_smallest;
			first_smallest = arr[i];
		}
		else{
			if(arr[i]<second_smallest){
				second_smallest = arr[i];
			}
		}
	}

	int p1 = first_largest * second_largest * third_largest;
	int p2 = first_smallest * second_smallest;
	cout<<max(p1,p2);

}