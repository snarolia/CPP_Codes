#include <iostream>
using namespace std;

void update(int& a){
    a=a+2;
}

int main(){
    int x=10;
    int& y=x;
    cout<<x<<endl;
    cout<<y<<endl;
    x=x+10;
    cout<<x<<endl;
    cout<<y<<endl;

    int b=10;
    update(b);
    cout<<b<<endl;

    cout<<&x<<endl;
    cout<<&y<<endl;
    cout<<&b<<endl;

    cout<<"__________________"<<endl;

    int* ptr = &x;
    cout<<ptr<<endl;
    cout<< &ptr<<endl;
    *ptr=100;
    cout<<x<<endl;
}