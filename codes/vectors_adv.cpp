#include <iostream>
#include <vector>
#include <sstream>

using std::cin;
using std::cout;
//using std::string;
using std::endl;

// pre-requisite --> Working with S Stream

/*
sstream lets us treat strings like stream , similar to cin(input) and cout(output).

osstringstream -- Output string stream -- Building strings piece by piece
isstringstream -- Input string stream -- Reading (parsing) strings like input

Initialiser_List --> Fixed Size | Immutable (parallel to tuple in python) | 
    - Short life time, generally passed as a function call
*/

void outputStream(){
    std::ostringstream oss;

    oss<<"hello ";
    oss<<42;
    oss<<" jersey number";
    
    std::string finaltext = oss.str();
    cout<<finaltext<<endl;
}

void parseString(std::string text){
    std::istringstream iss(text);

    int age;
    std::string name;
    iss>>age>>name;
    cout<<"Age : "<<age<<" name is : "<<name<<endl;

    std::string word;
    while(iss>>word){
        cout<<word<<endl;
    }
}

class Row{
    std::vector<int> data;
    public:
        Row(std::initializer_list<int> values) : data(values){}
        //Allow iteration over Row
        auto begin() const {return data.begin();}
};

int main(){
    // outputStream();
    // parseString("32 Siddharth");

    // std::vector<int> testVector;
    // std::initializer_list<int> values;
    // values={1,2,3};
    // for(int num:values){
    //     cout<<num<<endl;
    // }
    // testVector=values;

    // for (int num:testVector){
    //     cout<<num<<endl;
    // }

    // std::vector<int> v(4);
    // v.push_back(1);
    // v.push_back(2);
    // v.push_back(3);
    // v.push_back(4);
    // v.push_back(5);

    // for (int& i:v){
    //     i+=1;
    // }
    // for (int i:v){
    //     cout<<i<<" ";
    // }
    // cout<<endl;

    // std::vector<int> v2({11,22,33,44});
    // for (int i:v2){
    //     cout<<i<<" ";
    // }
    // cout<<endl;
    // cout<<*v2.begin()<<endl;
    // cout<<&(*v2.begin())<<endl;

}