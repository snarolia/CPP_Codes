#include <iostream>
#include <cmath>

using std::cout;
using std::cin;
using std::endl;

int main(){
    // double x=2;
    // double y=4;
    // double z=std::max(x,y);
    // double p = pow(3,4);
    // double q = abs(-124);
    // double c_value=ceil(3.15);
    // double f_valie=floor(3.15);
    // cout<<p<<endl;
    // cout<<q<<endl;
    // cout<<"absolute value of -124 is : "<<q<<endl;
    // cout<<"Ceil of 3.14 is : "<<c_value<<" and floor of 3.14 is : "<<f_valie<<endl;
    // cout<<z<<endl;

    double marks;
    cout<<"Enter your marks"<<endl;
    cin>>marks;
    double total_marks;
    cout<<"Enter total obtainable marks"<<endl;
    cin>>total_marks;

    if((marks/total_marks)>0.6){
        cout<<"First Division";
    }
    else if ((marks/total_marks)>0.5)
    {
        cout<<"Second Division";
    }
    else{
        cout<<"Third Division";
    }
    
    
}