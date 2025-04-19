#include <iostream>
using namespace std;

int main(){
    int nums[]={10,20,30};
    // This provides total number of elements in an array
    // sizeof=total size in bytes
    int size=sizeof(nums)/sizeof(nums[0]);
    cout<<"The number of elements in array : "<<size<<endl;

    cout<<"Printing elements of array: "<<endl;
    for (int num:nums){
        cout<<num<<" ";
    }
    cout<<endl;
    cout<<"Printing array in reverse:"<<endl;

    for (int i=size-1;i>=0;i--){
        cout<<nums[i]<<" ";
    }
    cout<<endl;

    cout<<"Making changes in array in place: "<<endl;
    for (int& num : nums){
        num=num*num;
    }
    for (int num:nums){
        cout<<num<<" ";
    }
}
