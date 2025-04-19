#include <iostream>

using namespace std;

int add(int a, int b){
    return a+b;
}



int main(){
    int sum=add(4,5);
    cout<<sum<<endl;

    for(int i=0;i<10;i++){
        cout<<i<<" ";
    }
    cout<<endl;

    cout<<"Printing in reverse"<<endl;
    for (int i=10;i>0;i--){
        cout<<i<<" ";
    }

    cout<<endl;
    return 0;
}