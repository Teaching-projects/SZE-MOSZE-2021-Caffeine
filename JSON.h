#pragma once
#include <sstream>
#include <string>
#include <vector>
#include <iostream>
#include <map>
#include <fstream>
#include <algorithm>


class JSON {
	/**
	*this class is responsible for reading and processing input JSON files
	*/
	std::vector<std::vector<int>>steps;
public:
	JSON(){}
	~JSON(){}

	static std::vector<std::map<std::string, int>> readSteps(std::string);

	static std::vector<std::map<std::string, int>> parseJson(std::string fname);
};
