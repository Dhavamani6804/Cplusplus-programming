#include <iostream>
#include <fstream>
#include <string>

using namespace std;

int main() {
    string filename = "sample.txt";
    
    // Step 1: Create file and write some text
    cout << "1. Creating file and writing text..." << endl;
    
    ofstream writeFile(filename);
    
    if (writeFile.is_open()) {
        writeFile << "First line of text.\n";
        writeFile << "Second line.\n";
        writeFile << "Third line.\n";
        writeFile.close();
        cout << "File created and text written." << endl;
    } else {
        cout << "Error creating file!" << endl;
        return 1;
    }
    
    // Step 2: Open file again and add more text at the end
    cout << "\n2. Opening file to add more text..." << endl;
    
    ofstream appendFile(filename, ios::app);
    
    if (appendFile.is_open()) {
        appendFile << "Fourth line (appended).\n";
        appendFile << "Fifth line (appended).\n";
        appendFile.close();
        cout << "More text added at the end." << endl;
    } else {
        cout << "Error opening file!" << endl;
    }
    
    // Step 3: Read and print what's in the file
    cout << "\n3. Reading file contents..." << endl;
    
    ifstream readFile(filename);
    string line;
    
    if (readFile.is_open()) {
        cout << "\nFile contains:" << endl;
        
        int lineNumber = 1;
        while (getline(readFile, line)) {
            cout << lineNumber << ": " << line << endl;
            lineNumber++;
        }
        readFile.close();
    } else {
        cout << "Error reading file!" << endl;
    }
    
    // Step 4: Add text after 20th character
    cout << "\n4. Adding text after 20th character..." << endl;
    
    // First, read the whole file
    ifstream inFile(filename);
    string fileContent = "";
    char ch;
    
    while (inFile.get(ch)) {
        fileContent += ch;
    }
    inFile.close();
    
    cout << "Total characters in file: " << fileContent.length() << endl;
    
    // Add text after 20th character
    if (fileContent.length() >= 20) {
        fileContent.insert(20, "...NEW TEXT HERE...");
        cout << "Text added after 20th character." << endl;
    } else {
        cout << "File is too short (less than 20 characters)." << endl;
    }
    
    // Save the modified content
    ofstream outFile(filename);
    outFile << fileContent;
    outFile.close();
    
    // Step 5: Show text after 20th character
    cout << "\n5. Showing text after 20th character..." << endl;
    
    ifstream showFile(filename);
    
    // Move to position 20
    showFile.seekg(20);
    
    cout << "\nText after 20th character:" << endl;
    
    while (showFile.get(ch)) {
        cout << ch;
    }
    cout << endl;
    
    showFile.close();
    
    cout << "\nDone! Check the file: " << filename << endl;
    
    return 0;
}