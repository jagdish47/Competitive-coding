#include <iostream>
using namespace std;

void swap(int arr[], int x, int y){
	int temp = arr[x];
	arr[x] = arr[y];
	arr[y] = temp;
}

int findMax(int arr[], int start, int last){

	int max = start;

	for(int i = 0; i <= last; i++){
		if(arr[max] < arr[i]){
			max = i;
		}
	}
	return max;
}

void selectionSort(int arr[], int arrSize){
	for(int i = 0; i < arrSize; i++){

		int last = arrSize - i - 1;
		int start = 0;
		int maxValue = findMax(arr, start, last);
		swap(arr, maxValue, last);
	}
}

int main() {
 	int arr[] = {3, 5, 2, 5, 12, 5, 2, 9};
	int arrSize = *(&arr + 1) - arr;;

	selectionSort(arr, arrSize);

	for(int i = 0; i < arrSize; i++){
		cout<<arr[i] <<" ";
	}
	
	
}