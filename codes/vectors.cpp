#include <iostream>
#include <vector>

using std::vector;
using std::cin;
using std::cout;
using std::endl;
using std::string;

int main(){
    vector<int> v;
    v.push_back(1);
    v.push_back(2);

    for (int num:v){
        cout<<num<<endl;
    }

    cout<<"--------------------------------------------------"<<endl;

    vector<vector<int>> nested_vector;
    nested_vector.push_back({1,2,3,4});
    nested_vector.push_back({11,22,33,44});

    for (const auto row:nested_vector){
        cout<<"[";
        for (const auto value:row){
            cout<<value<<",";
        }
        cout<<"],"<<endl;
    }
    cout<<"End"<<endl;
    
    return 0;
}