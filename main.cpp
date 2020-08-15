

#include <iostream>
#include <string>
#include <fstream>
#include <string>
#include <cassert>
#include "Lexer.h"
#include "SyntaxAnalyzer.h"
using namespace std;

int main(int argc, const char * argv[]) {
	string fileName = "";
	//cout << "Before you begin, make sure the input test file is in\nthe same folder as the .exe of this program.\n";
	cout << "----------------------------------------------------------------------\n";
	cout << "Please enter the file name and extension of the input file (input.txt).\n";
	cout << "Input: ";

    //string fileName = "test1.txt";
	
	cin >> fileName;
	
    SyntaxAnalyzer SA;
    SA.run(fileName);
	cout << "file name will be output.txt" << endl;
	system("Pause");
    return 0;
}
