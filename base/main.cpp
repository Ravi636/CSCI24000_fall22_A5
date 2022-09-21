#include <fstream>
#include <iostream>
#include <sstream>
#include <string>
#include <ctype.h>
#include <stdio.h>


using namespace std;


int main(){
	
	ifstream inFile;
	ofstream outFile;
	string cLine;
//	stringstream converter;
	stringstream ss;
//	int counter;
//	string sCounter;
	string text;
	int num = 0;
	string sNum;
	char fLetter;

	inFile.open("input.txt");
	outFile.open("output.txt");
	
	if(!inFile.is_open()) {
		cout << "input file NOT open" << endl;
		return 0;
	}
	if(!outFile.is_open()){
		cout <<"output file NOT open" << endl;
		return 0;
	}

	while(getline(inFile, cLine)){
		
		//clear the stream
		ss.clear();
		ss.str("");
		
		//sending current line to the stream
		ss.str(cLine);
		ss >> text;
		fLetter = text[0];


		if(isdigit(fLetter)){
		
			while(getline(ss, sNum, ',')){
		
				//convert a string to int	
				num += stoi(sNum);
				cout << "s";
			}// end while	

		}// end if	
		else {
			getline(ss,text);
	
			for (int i = 0; i < num + 1; i++){
				outFile << text << " ";

			}// end for loop
	
			num = 0;
			outFile << endl;
		}// end else
		

		
		cLine = "";
		
	}// end while loop	
	
	inFile.close();
	outFile.close();

	return 0;
}// end main
