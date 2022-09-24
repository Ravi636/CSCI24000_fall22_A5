#include <fstream>
#include <iostream>
#include <sstream>
#include <string>
#include <ctype.h>
#include <stdio.h>




int main(){
	
	std::fstream inFile;
	std::ofstream outFile;
	std::string cLine;
	std::stringstream ss("");
	std::string sNum;
	float f;
	int num;
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

		while(getline(ss, sNum, ',')) {
			num += stoi(sNum);
		}	
			
		getline(inFile, cLine);
	
		for (int i = 0; i < num; i++){
			outFile << cLine << " ";

		}// end for loop
		num = 0;
		cLine = "";
		outFile << std::endl;
		

		
		cLine = "";
		
	}// end while loop	
	
	inFile.close();
	outFile.close();

	return 0;
}// end main
