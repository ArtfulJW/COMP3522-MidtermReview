#include <iostream>
#include <fstream>
#include <string>
#include <vector>
#include <ostream>

void readFile(){
    // Open declared File - <fstream> header for file Reading and Writing
    std::fstream f{"data.txt"};

    // Can manually open as well
    //    f.open("data.txt");

    // String for output
    std::string input;
    int numLine = 0;
    if (f.is_open()){

        // Keep getting next Line
        while(std::getline(f,input)){
            std::cout << input << std::endl;
            numLine++;
        }
        f.close();
    }
    std::cout << "Number of lines in File: " << numLine << std::endl;
}

void readFileChar(std::string fileName){
    // Open given File.
    std::fstream file{"words.txt"};

    char outputChar;

    while (file.is_open() && outputChar != EOF){
        outputChar = file.get();
        if (outputChar == ' ' ){
            std::cout << "-" << std::endl;
        } else {
            std::cout << outputChar << std::endl;
        };
    }

    // Remember to close file
    file.close();

}

void fileTokenize(std::string fileName){
    // Open File
    std::fstream file{fileName};

    char delim = ' ';
    std::string intermediate;
    std::vector <std::string> tokens;

    // Get Line, Tokenize, and push_back to vector<string>
    while (std::getline(file,intermediate,delim)){
        tokens.push_back(intermediate);
    }

    //  For Each loop to print each word in vector<std::string>
    for (std::string word : tokens){
        std::cout << word << std::endl;
    }

    std::cout << "First char of First Token: " << tokens[0].at(0) << std::endl;

    // Remember to close file
    file.close();
}

void copyText(std::string fileName){
    // Open Requested file to copy.
    std::fstream file{fileName};

    // Create file to write to
    std::ofstream outputFile{"output.txt"};

    std::string intermediate;

    std::cout << "Copying Data.." << std::endl;
    if (file.is_open()){
        while (std::getline(file, intermediate)){
            outputFile << intermediate << std::endl;
        }
    }

    std::cout << "Closing File.." << std::endl;
    file.close();
    outputFile.close();
}

int main() {

    copyText("words.txt");
    fileTokenize("output.txt");


    return 0;
}
