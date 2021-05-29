#pragma once
#include <sstream>
#include <string>
#include <vector>
#include <iostream>
#include <map>
#include <fstream>
#include <algorithm>

/*olvass�n be egy t�bb dimenzi�s json objektumot �s annak tartalm�t mentse el egy N x 4 dimenzi�s vektork�nt*/
class JSON {

	std::vector<std::vector<int>>steps;
public:
	JSON(){}
	~JSON(){}
//	std::vector<std::vector<int>>readSteps(std::string);
	static std::vector<std::map<std::string, int>> readSteps(std::string);
//	std::vector<std::map<std::string, int>> readSteps(std::string);
	static std::vector<std::map<std::string, int>> parseJson(std::string fname);
};