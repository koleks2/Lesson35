//#include <iostream>
//#include <fstream>
//#include "Matrix.h"
//
//int main() {
//    srand(time(NULL));
//
//    Matrix matrx1(3, 3);
//    std::cout << "Generated Matrix:\n" << matrx1 << "\n";
//
//    std::ofstream outFile("matrix.txt");
//    if (outFile.is_open()) {
//        outFile << matrx1;
//        outFile.close();
//        std::cout << "Matrix successfully saved to file.\n";
//    }
//    else {
//        std::cerr << "Error opening file for writing!\n";
//    }
//
//    Matrix matrx2(0, 0);
//    std::ifstream inFile("matrix.txt");
//    if (inFile.is_open()) {
//        inFile >> matrx2;
//        inFile.close();
//        std::cout << "\nMatrix successfully read from file:\n" << matrx2;
//    }
//    else {
//        std::cerr << "Error opening file for reading!\n";
//    }
//}