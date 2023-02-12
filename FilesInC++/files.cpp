#include <iostream>
#include <fstream>
#include <string>

// Use the standard namespace
using namespace std;

int main() {
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
