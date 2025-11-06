// Nazario, Xavier
// October 25, 2025 ©
// Chapter 12 Programming Assignment Line Numbers
// References:
//  Gaddis, Tony. Starting Out with C++ (10th Edition). Pearson Education
//  C++ Tutorial - Input/Output with files https://cplusplus.com/doc/tutorial/files/


					//	*** Use forChap12.txt ***
#include <iostream>
#include <fstream>
#include <string>
using namespace std;

// Function Protype
void displayFile(string fileName);

// Main Function starts here
int main()
{
	// Step 1: Declare variable
	//	Use fileName
	string fileName;

	// Step 2: Get file name
	cout << "Please enter the name of the file you're looking for.: " << endl;
	getline(cin, fileName);

	// Step 3: Display searching file
	cout << "Searching for " << fileName << "." << endl;
	
	// Step 4: Call displayFile(fileName)
	displayFile(fileName);

	// Return 0
	return 0;
}

// Function Definition
void displayFile(string fileName)
{
	// Step 1: Open file
	//	ifstream infile()
	ifstream infile(fileName);

	// Validate file exists
	//	Use if statement
	if (!infile)
	{
		cout << "File does NOT exist, please try your search again." << endl;

		// Return
		return;
	}

	// Step 2: Declare variable
	//	Use lineOnSc, line, lineNum, lineCntr
	const int lineOnSc = 24;	// Holds number of lines, 24 per
	string line;				// Holds file's line contents
	int lineNum = 1;			// Holds line number, initialize to 1
	int lineCntr = 0;			// Holds counter, initialize to 0

	// Step 3: Read then Display file
	//	Use while loop, getline(infile, line)
	while (getline(infile, line))
	{
		// Display line number and its contents
		cout << lineNum << ":" << line << endl;

		// Increment lineNum and lineCntr
		lineNum++;
		lineCntr++;

		// Step 4: Pause AFTER 24 lines
		//	WAIT for user to press Enter to continue
		//	Use if statement
		if (lineCntr == lineOnSc)
		{
			cout << "Please press 'Enter' to continue." << endl;
			cin.get();

			// Reset lineCntr, NOT lineNum
			lineCntr = 0;
		}
	}

	// Step 4: Empty file
	//	Use if statement
	if (lineNum == 1)
	{
		cout << "The file has no content to display. Please try your search again." << endl;
	}

	// Step 5: Close file
	//	Use infile.close()
	infile.close();
}