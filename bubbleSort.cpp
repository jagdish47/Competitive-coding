#include<iostream>
using namespace std;

void bubbleSort(int arr[], int size){

	for(int i = 0; i < size; i++){

		bool isSwapped = false;
		
		for(int j = 1; j < size - i; j++){
			
			if(arr[j] < arr[j-1]){

				int temp = arr[j];
				arr[j] = arr[j-1];
				arr[j-1] = temp;
				isSwapped = true;
			}
			
		}
		if(!isSwapped){
				break;
			}
	}
	
}

int main(){

	int arr[] = {4, 3, 5, 2, 1, 3, 3};
	int arrSize = *(&arr+1) - arr;
	
	bubbleSort(arr, arrSize);

	for(int i = 0; i < arrSize; i++){
		cout<<arr[i]<<" ";
	}
	return 0;
}