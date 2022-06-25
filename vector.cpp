// vectors are used to store elements of similar data types.
// However, unlike arrays, the size of a vector can grow dynamically.
// That is, we can change the size of the vector during the execution of a program as per our requirements.
// Vectors are part of the C++ Standard Template Library.

#include <iostream>
// to use vector we must have to include vector library.
#include <vector>
using namespace std;

int main()
{

    // creating vector
    //  vector<int> * np = new vector<int> (); //create vector dynamically
    vector<int> v; // create vector statically

    // inser in vertor mostly we use push_back function to insert value in vector
    v.push_back(10);
    v.push_back(20);
    v.push_back(30);

    // we can also insert using [] bracket but we dont use this.
    v[3] = 40;
    v[4] = 50;
    v[5] = 60;

    // print
    //  cout<<v[0]<<endl;
    //  cout<<v[1]<<endl;
    //  cout<<v[2]<<endl;
    //  cout<<v[3]<<endl;
    //  cout<<v[4]<<endl;
    //  cout<<v[5]<<endl;

    // changing value in vector
    //  v[1] = 100;
    //  v[3] = 200;

    // cout<<v[1] <<" "<<v[3];

    //"[]" we use this for get value or update the value, but we won't use for insert.

    // cout<<v.at(5);
    // cout<<v.at(6);

    // cout<<v.at(5) use this insted cout<<v[5];

    // size of vector
    //  cout<<"size : "<<v.size();

    // iterate vector
    //  for(int i = 0; i < v.size(); i++){
    //      cout<<v.at(i)<<endl;
    //  }

    // remove element from vector
    v.pop_back();
    v.pop_back();

    for (int i = 0; i < v.size(); i++)
    {
        cout << v.at(i) << endl;
    }

    return 0;
}