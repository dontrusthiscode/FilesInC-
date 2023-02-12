File I/O Example in C++

This code demonstrates how to open a file for writing and reading in C++ using the ofstream and ifstream classes.
Requirements

    A C++ compiler (such as GCC or Clang)
    A text editor to write the code

Steps

    1. Open a new file in your text editor and copy and paste the code below:
    #include <iostream>
#include <fstream>
#include <string>

using namespace std;

int main(){
  // Open a file with the name "file.txt" for writing
  ofstream file("file.txt");
  
  // Check if the file was successfully opened
  if (!file.is_open()) {
    // If the file isn't opened, print an error message
    cout << "This file isn't opened." << endl;
    // Return 1 to indicate an error
    return 1;
  } else {
    // If the file was successfully opened, prompt the user to write to the file
    cout << "Write the file: ";
    // Read a line of text from the user
    string write;
    getline(cin, write);
    // Write the user's input to the file
    file << write;
  }
  // Close the file
  file.close();

  // Open the same file for reading
  ifstream inFile("file.txt");

  // Check if the file was successfully opened
  if (!inFile.is_open()) {
    // If the file isn't open, print an error message
    cout << "Error, the file isn't open, that's the reason why we can't read this specific file!" << endl;
    // Return 1 to indicate an error
    return 1;
  }

  // Read the contents of the file line by line
  string line;
  while (getline(inFile, line)) {
    // Print each line to the console
    cout << line << endl;
  }

  // Return 0 to indicate success
  return 0;
}


    2. Save the file with a .cpp extension, such as file_io.cpp.

    3. Open a terminal and navigate to the directory where you saved the file.

    4. Compile the code using the following command:
    g++ file_io.cpp -o file_io

    5. Run the executable with the following command:
    ./file_io
    
    6. The program will prompt you to write to the file file.txt. Enter a line of text and press enter.

    7. The program will then read the contents of the file.txt file and print it to the console.

Explanation

The ofstream class is used to open a file for writing. In this code, we use the constructor ofstream file("file.txt") to open a file with the name "file.txt" for writing.

We use the ifstream class to open the same file for reading. The constructor ifstream inFile("file.txt") is used to open the file.

The getline function is used to read a line of text from the user and from the file. The file << write statement writes the user's input to
