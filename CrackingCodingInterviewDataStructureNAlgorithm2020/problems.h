#pragma once


#include "stdafx.h"
#include <iostream>
#include <string>
#include <stack>
#include <vector>


void help(void);

//string
int lengthOfLastWord(std::string str);
std::string reverseStringUsingStack(std::string  str);
std::string reverseStringUsingTwoPtr(std::string  str);
std::string reverseStringUsingTwoItr(std::string  str);
std::string longestCommPrefix(std::vector <std::string> strArr);



