#include <fstream>
#include <iostream>
#include <sstream>
#include <string>
#include <ctype.h>
#include <stdio.h>
#include <bits/stdc++.h>

using namespace std;


int main(){
	
	ifstream inFile;
	ofstream outFile;
	string cLine;
//	stringstream converter;
	stringstream ss("");
//	int counter;
//	string sCounter;
	string text;
	float num = 0;
	string sNum;
	char fLetter;
	int sum = 0;
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

		ss.clear();
		ss.str("");
		ss.str(cLine);

		if (cLine.empty()){
			outFile << "Empty line" << endl;
		}
		
		else{
			while(getline(ss, sNum, ',')) {

				num += stof(sNum);
			}	
			
			sum = round(num);

			getline(inFile, cLine);
			
			if (sum < 0){
				sum = 0;
				outFile << "The total sum is less than 0 for " << cLine;
		
			}//end if 
		
			else if (sum > 100){
		
				outFile << "The total sum is greater than 100 for " << cLine << " only 100 will be printed" << endl;
		
				for (int i = 0; i < sum; i++){
					outFile << cLine << " ";			
	
				}// end else if 
			}
		
			else {
				for (int i = 0; i < sum; i++){
					outFile << cLine << " ";

				}// end for loop
			}
		}
		num = 0;
		sum = 0;
		cLine = "";
		outFile << endl;
		//clear the stream
		/* ss.clear();
		ss.str("");
		
		//sending current line to the stream
		ss.str(cLine);
		ss >> text;
		fLetter = text[0];
		
	

		if(isdigit(fLetter)){
	//		getline(ss, sNum, ',');
			cout << sNum;
			std::cout << "Hello " << ss.str() << " \n";
			while(getline(ss, sNum, ',')){
		
				//convert a string to int	
				std::cout << "Please work\n";
				num += stoi(sNum);
				cout << "s";
			}// end while	

		}// end if	
		else {
			getline(ss,text);
	
			for (int i = 0; i < num; i++){
				outFile << text << " ";

			}// end for loop
	
			num = 0;
			outFile << endl;
		}// end else
		

		
		cLine = "";
		*/
	}// end while loop	
	
	inFile.close();
	outFile.close();
}
