#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;


bool cmp(int a, int b){
    return a < b;
}

int main(){
    vector<int> a = {6, 1, 8, 2, 3};
    int n = a.size();

    sort(a.begin(), a.end(), cmp);

    for(auto e : a){
        cout<<e <<" ";
    }

    return 0;
}