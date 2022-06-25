// 1) shotcut way to sorting array in ascending order

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



// 2) shotcut way to shorting arry in descending order

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




// 3) shotcut way to sorting array in ascending or descending order

// #include<iostream>
// #include<algorithm>
// using namespace std;

// bool cmp(int a, int b){
//     // return a > b; //descending
//     return a < b; //ascending
// }

// int main(){

//     int arr[] = {6, 4, 6, 8, 9, 2, 0, 4, -1};
//     int arrSize = *(&arr + 1) - arr;

//     sort(arr, arr+arrSize, cmp);

//     for(auto e : arr){
//         cout<<e<<" ";
//     }
// }




// 4) shotcut way to sort an array in descending order.

#include <iostream>
#include <algorithm>
using namespace std;

int main(){

    int arr[] = {6, 4, 6, 8, 9, 2, 0, 4, -1};
    int arrSize = *(&arr + 1) - arr;
   
    sort(arr, arr+arrSize, greater<int>());

    for(auto e : arr){

        cout<<e <<" ";
    }

    return 0;
}