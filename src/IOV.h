#pragma once
/***
Author: Kevin Gilliam
NetID: keving
Assignment #: 3

*/
#ifndef INPUT_H
#define INPUT_H

//#include<string>
//#include <vector>
//#include<iostream>
//#include <sstream>
//#include "Parser.h"
#include "main.h"
using namespace std;

class IOV {

public:

	//IOV();
	IOV(std::string sName, std::string sDataString, std::string sBitWidth);
	//IOV(std::string s);
	std::string getName(void);
	std::string getBitWidth();
	std::string getDataType(void);
	//unsigned int getBitWidth(void);
	void printPin();
	//std::vector<IOV> generateIOVs(std::string inputString);
	//static bool CheckType(std::string);
	static  void generateIOV(std::vector<string>* strVector, std::vector<IOV>* inputs, std::vector<IOV>* outputs, std::vector<IOV>* variables);

private:

	//unsigned int bitWidth;
	std::string sBitWidth;
	std::string name;
	std::string inputType;
	std::string dataType;

};
#endif //CONNECTION_H