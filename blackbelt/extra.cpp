#include <fstream>
#include <iostream>
#include <sstream>
#include <string>
#include <ctype.h>
#include <bits/stdc++.h>
#include <cctype>


using namespace std;


int main(){
	
	ifstream inFile;
	ofstream outFile;
	string cLine;
	stringstream ss("");
	string sNum;
	char fLetter;
	double sum = 0;
	double num = 0;
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
		sNum = "";

		if (cLine.empty()){
			outFile << "Empty line" << endl;
		}
		
		else{
			while(getline(ss, sNum, ',')) {

				num += stod(sNum);
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
	}// end while loop	
	
	
	inFile.close();
	outFile.close();

	string name;
	int age;
	string major;
	int size;
	int letters ;
	int numbers;
	char l;
	int space;


	cout << "Enter your Name:" << endl;
	cin >> name;
	cout << "Enter your age:" << endl;
	cin >> age;
	cout <<"Enter your major:" << endl;
	cin >> major;
	
	inFile.open("input.txt");
	outFile.open("output.txt");
	
	outFile << "Hi " << name << endl;
	outFile << "Your age is " << age << endl;
	outFile << "Your major is " << major << endl;


	while(getline(inFile, cLine)){
	
		ss.clear();
		ss.str("");

		int x = 0;
		while(cLine[x] != '\0'){      
			l = cLine[x];

			if(isdigit(l)){
				numbers ++;
			}
			else if(isalpha(l)){
				letters++;
				if(isupper(l)){
					l = toupper(l);
				}
				else{
					l = tolower(l);
				}
			}
			else if(isspace(l)){
				space++;
			}	
			outFile << l;

			x++;
		}// end loop	
		
		outFile << endl;

	}// end while loop
	outFile << "Number of numbers are "<<numbers << endl;
	outFile << "Number of letters are " << letters<< endl;
	outFile << "Number of spaces are " << space << endl;
	inFile.close();
	outFile.close();
}
