#include <iostream>
using namespace std;

int binarySearch(int arr[], int target, int arrSize){
	int start = 0;
	int end = arrSize - 1;

	while(start <= end){

		int mid = start + (end - start) / 2;

		if(target > arr[mid]){
			start = mid + 1;
		}
		else if(target < arr[mid]){
			end = mid - 1;
		}
		else {
			return mid;
		}
	}
		
	return -1;

}

int main() {

	int arr[] = {2, 4, 6, 9, 11, 12, 14, 20, 36, 48};
	int target = 36;
	int arrSize = *(&arr + 1) - arr;
	

	int result = binarySearch(arr, target, arrSize);
	cout<<result;
	return 0;
}