#include <iostream>
#include <algorithm>
using namespace std;


int main(){
    int arr[] = {6, 4, 6, 8, 9, 2, 0, 4, -1};
    int arrSize = *(&arr + 1) - arr;

    sort(arr, arr + arrSize);

    for(auto e : arr){
        cout<<e << " ";
    }

}