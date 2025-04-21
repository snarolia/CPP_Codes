#include <iostream>
#include <vector>

//typedef std::vector<std::pair<std::string, int>> pairlist_t; //_t is the naming convention when using typedef aliasing

using std::cout;
using std::cin;
using std::endl;

//typedef std::string text_t;

// More popular way of doing it due to recent templating operations

// using text=std::string;


int main(){
    //pairlist_t pairlist;
    // text_t name="Siddharth";
    // cout<< name<<endl;
    // text firstName="Sid";
    // cout<<firstName<<endl;

    int cost=30;
    cout<<cost/4<<endl;
    double price=40;
    cout<<price/3<<endl;

    // int x=3.14;
    // cout<<x<<endl;

    double x = int(3.14);
    cout<<x<<endl;

    char c = 100;
    cout<<c<<endl;

    // use case of type conversion

    int correct=10;
    int total_questions=25;
    double score=correct/total_questions;
    double flot_score=correct/double(total_questions);

    cout<<"without typecasting , score is : "<<score<<endl;
    cout<<"with typecasting, score is : "<<flot_score<<endl;

    // issues with input and dealing with it
    std::string fullname;
    cout<<"Enter full Name: "<<endl;
    std::cin>>fullname;
    cout<<fullname<<endl;

    cout<<"Handling space between words"<<endl;
    cout<<"Enter your name"<<endl;
    std::string name;
    //std::cin.ignore(); //otherwise below line of code is also okay, where we provide >>std::ws
    std::getline(std::cin>>std::ws, name);
    cout<<name<<endl;

    return 0;
}