//In a movie festival n movies will be shown you know the starting and ending time of each movie timeof each movie.
// what is the maximum number of movies you can watch entirly

// Hint - using greedy algorithm


#include<iostream>
#include<algorithm>
using namespace std;

bool cmp(pair<int, int>a, pair<int, int>b){
    return a.second< b.second;
}

int main(){
    int n;
    cin>>n;
    vector<pair<int, int>>v;

    for(int i = 0; i < n; i++){
        int x, y;
        cin>>x>>y;
        v.push_back({x,y});
    }

    sort(v.begin(), v.end(), cmp);

    int c = 1, ed = v[0].second;

    for(int i = 1; i < n; i++){
        if(v[i].first >= ed){
            ed = v[i].second;
            c++;
        }
    }
    cout<<c;
    return 0;
}


