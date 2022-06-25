//Shotcut way to sort an array
// #include <iostream>
// #include <algorithm>
// using namespace std;

// int main(){
//     int arr[] = {6, 4, 6, 8, 9, 2, 0, 4, -1};
//     int arrSize = *(&arr + 1) - arr;

//     sort(arr, arr + arrSize);

//     for(auto e : arr){
//         cout<<e << " ";
//     }

// }



//shotcut way to sort an array in descending order.
// #include <iostream>
// #include <algorithm>
// using namespace std;

// int main(){

//     int arr[] = {6, 4, 6, 8, 9, 2, 0, 4, -1};
//     int arrSize = *(&arr + 1) - arr;
//     sort(arr, arr+arrSize);
//     reverse(arr, arr+arrSize);

//     for(auto e : arr){

//         cout<<e <<" ";
//     }

//     return 0;
// }






#include<iostream>
#include<algorithm>
using namespace std;

bool cmp(int a, int b){
    // return a > b; //descending
    return a < b; //ascending
}

int main(){

    int arr[] = {6, 4, 6, 8, 9, 2, 0, 4, -1};
    int arrSize = *(&arr + 1) - arr;

    sort(arr, arr+arrSize, cmp);

    for(auto e : arr){
        cout<<e<<" ";
    }
}