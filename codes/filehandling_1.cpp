#include <iostream>
#include <fstream>

using namespace std;

int main(){
    // ofstream outfile("/Users/siddharthnarolia/Projects/Github/CPP_Codes/output/sample.txt");

    // if (outfile.is_open()) {
    //     outfile<<"Hello, this is sample text insert";
    //     outfile.close();
    //     cout<<"Data Written successfully";
    // }else{
    //     cout<<"Error opening file"<<endl;
    // }

    fstream readfile("/Users/siddharthnarolia/Projects/Github/CPP_Codes/output/sample.txt");
    string line;
    if (readfile.is_open()){
        while(getline(readfile,line)){
            cout<<line<<endl;
        }
        readfile.close();
    }else{
        cout<<"Unable to open file";
    }
}