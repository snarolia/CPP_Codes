#include <iostream>

namespace first{
    int x=1;
}
namespace second{
    int x=2;
}

int main(){

    std::cout<<"Hello World"<<std::endl;
    int x;
    std::cout<<"Please enter a number : ", std::cin>>x;
    std::cout<<"You've entered : "<<x<<std::endl;

    bool flag=false;
    std::cout<<flag<<std::endl;
    char currency='$';
    std::cout<<currency<<std::endl;
    std::string name="Siddharth";
    std::cout<<name<<std::endl;

    std::cout<<"-----------------------------"<<std::endl;
    const double PI=3.14;
    double radius=20;
    double circumference=2*PI*radius;
    std::cout<<"circumference is "<<circumference<<std::endl;
    std::cout<<"-----------------------------"<<std::endl;
    std::cout<<"first namespace x is : "<<first::x<<std::endl;
    std::cout<<"second namespace x is : "<<second::x<<std::endl;
    using namespace first;
    std::cout<<x<<std::endl;


    return 0;
}