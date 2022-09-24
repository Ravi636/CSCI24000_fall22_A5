#include <fstream>
#include <iostream>
#include <sstream>
#include <string>
#include <ctype.h>
#include <bits/stdc++.h>
#include <cctype>




int main(){
	
	std::ifstream inFile;
	std::ofstream outFile;
	std::string cLine;
	std::stringstream ss("");
	std::string sNum;
	char fLetter;
	double sum = 0;
	double num = 0;
	inFile.open("input.txt");
	outFile.open("output.txt");
	
	if(!inFile.is_open()) {
		std::cout << "input file NOT open" << std::endl;
		return 0;
	}
	
	if(!outFile.is_open()){
		std::cout <<"output file NOT open" << std::endl;
		return 0;
	}

	while(getline(inFile, cLine)){

		ss.clear();
		ss.str("");
		ss.str(cLine);
		sNum = "";

		if (cLine.empty()){
			outFile << "Empty line" << std::endl;
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
		
				outFile << "The total sum is greater than 100 for " << cLine << " only 100 will be printed" << std::endl;
		
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
		outFile << std::endl;
	}// end while loop	
	
	
	inFile.close();
	outFile.close();

	std::string name;
	int age;
	std::string major;
	int size;
	int letters ;
	int numbers;
	char l;
	int space;


	std::cout << "Enter your Name:" << std::endl;
	std::cin >> name;
	std::cout << std::endl;
	
	std::cout << "Enter your age:" << std::endl;
	std::cin >> age;
	std::cout << std::endl;
	
	std::cout <<"Enter your major:" << std::endl;
	std::cin >> major;
	std::cout << std::endl;
	
	inFile.open("input.txt");
	outFile.open("output.txt");
	
	outFile << "Hi " << name << std::endl;
	outFile << "Your age is " << age << std::endl;
	outFile << "Your major is " << major << std::endl;


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
		
		outFile << std::endl;

	}// end while loop
	outFile << "Number of numbers are "<<numbers << std::endl;
	outFile << "Number of letters are " << letters<< std::endl;
	outFile << "Number of spaces are " << space << std::endl;
	inFile.close();
	outFile.close();
}
