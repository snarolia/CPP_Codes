#include <iostream>
#include <filesystem>
#include <fstream>

using std::cin;
using std::cout;
using std::endl;

namespace fs = std::filesystem;

void listing_dir(std::string path){
    for (const auto& entry: fs::directory_iterator(path)){
        cout<<entry.path()<<endl;
    }
}

std::string createDirectory(std::string path, std::string folder_name){
    fs::path dir_path = fs::path(path)/folder_name;
    fs::create_directories(dir_path);
    return std::string(dir_path);
}

bool pathExists(std::string path){
    fs::path targetPath = fs::path(path);
    if(fs::exists(targetPath)){
        return true;
    }
    else{
        return false;
    }
}

int main(){
    // std::string dir_path=createDirectory("/Users/siddharthnarolia/Projects/non_git", "folderCreationTest");
    // cout<<dir_path<<endl;
    //listing_dir("");

    cout<<pathExists("/Users/siddharthnarolia/Projects/non_git/")<<endl;

    // //Need to correct below code, so that parent path is not asked in the loop
    // for(int i=0;i<5;i++){
    //     std::string target_folder;
    //     cout<<"Please enter a path to check if it exists : "<<endl;
    //     cin>>target_folder;

    //     if (pathExists(target_folder)==true){
    //         createDirectory(target_folder, std::to_string(i));
    //     }
    //     else{
    //         cout<<"Source path where folder needs to be created doesn't exist "<<endl;
    //     }
    // }

    // // Below code changes values directly in array because they are being referenced through their address
    // int numbers[] = {1,2,3};
    // for (auto& num: numbers){
    //     num+=10;
    //     cout<<num<<endl;
    // }
    
    // // Below code doesn't change the original array
    // for (int num: numbers){
    //     cout<<num<<endl;
    // }

}