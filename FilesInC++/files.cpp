#include <iostream>
#include <fstream>
#include <string>


using namespace std;

int main(){



    ofstream file("file.txt");
    
    
    if(!file.is_open()) {
        cout << "This file isn't opened";
        return 1;
    }else {
        cout << "Write the file: ";
        string write;
        getline(cin , write);
        file << write;
        }

    file.close();

    ifstream inFile("file.txt");

    if(!inFile.is_open()){
        cout << "Error, the file isn't open, that's the reason why we can't read this specific file!";
        return 1;
    }

    string line;
    while(getline(inFile, line)){
        cout << line << endl;
    }


    return 0;
}