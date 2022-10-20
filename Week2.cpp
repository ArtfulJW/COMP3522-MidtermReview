//
// Created by jj554 on 2022-10-20.
//

#include <iostream>
#include <sstream>
#include <fstream>
#include <random>
#include <time.h>
#include <iomanip>


// Stringstream test
void readFile(std::string fileName){
    // Open given File
    std::fstream file{fileName};
    std::string intermediate;
    std::vector <double> tokens;

    if (file.is_open() && file){

        // Iterates through line, delimits by ' '
        while (std::getline(file, intermediate)){
            tokens.push_back(stod(intermediate));
        }

        for (double number : tokens){
            // Remember to convert from string to double
            std::cout << std::left << std::setfill('0') << std::setw(10) << number << std::endl;
        }

    } else {
        std::cout << "Error occured opening File" << std::endl;
    }
    // Remember to close File
    file.close();
}

void genRandomNumberFile(){
    // Generate random amount of random numbers
    int countNumbers = rand() % (10 + 1 - 1) + 1;
    std::vector<double> numbers;
    std::ofstream outputFile("generatedNumbers.txt");

    for (int x = 0; x < countNumbers; x++) {
        double randomNumber = ((double)rand()*(10-1)/RAND_MAX) + 1;
        numbers.push_back(randomNumber);
    }

    for (double num : numbers){
        outputFile << num << std::endl;
    }
}

//int main(){
//
//    // Seed Time for random gen
//    srand(time(NULL));
//    genRandomNumberFile();
//    readFile("generatedNumbers.txt");
//    return 0;
//}

