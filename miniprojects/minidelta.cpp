#include <iostream>
#include <fstream>
#include <filesystem>

using std::cin;
using std::cout;
using std::endl;
namespace fs = std::filesystem;


class MiniDelta{
    public:
        std::string table_path;
        std::string data;
        MiniDelta(std::string table_path, std::string data);
        int getVersion(std::string table_path);

};

MiniDelta::MiniDelta(std::string table_path, std::string data){
    this->table_path=table_path;
    this->data=data;

    cout<<this->table_path<<" : "<<this->data<<endl;
}

int main(){
    MiniDelta delta("/usr/sidd", "123 Sidd");
}