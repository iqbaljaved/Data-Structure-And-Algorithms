 
#include "problems.h"
#include "stdafx.h"
#include <iostream>
#include <string>
#include <stack>
#include <vector>


void help(void)
{
	std::cout << "Course - Cracking Coding Interview : Data Structure & Algorithm 2020" << std::endl;
	std::cout << "         Ace your next C++/Java coding interview by mastering data structures and algorithm. " << std::endl;
	std::cout << "         Solve important Leetcode problems. This Course is Created by" << std::endl;
	std::cout << "         Ankit Thakran & Harsh Kajla " << std::endl;
}

int lengthOfLastWord(std::string str)
{
	int lwLen = 0;
	int count = 0;
	for (int i = 0; i < str.size(); i++)
	{
		if(str[i] == ' ')
			lwLen = 0;
		else
			lwLen++;
	}

	/*
	lwLen = 0;
	for (int i = str.size()-1; i>=0; i--)
	{
		if (str[i] == ' ')
			return lwLen;
		else
			lwLen++;
  	}
	*/
 
	return lwLen;
}


std::string reverseStringUsingStack (std::string  str)
{
	std::stack <char> s;

	for(int i=0; i<str.size(); i++)
		s.push(str.at(i));

	for (int i = 0; i < str.size(); i++) {
 		str.at(i) = s.top(); 
		s.pop();
	}
	return str;
}

std::string reverseStringUsingTwoPtr(std::string  str)
{
	//std::string::iterator startItr = str.begin();
	//std::string::iterator endItr  = str.end();
	int start = 0;
	int end   = str.size()-1;

	//std::cout << "str : " << str << std::endl;
	while(start<end)
	{
		char c = str[start];
		str.at(start) = str.at(end );
		str.at(end) = c;

		start++; end--;
 	}
 	return str;
}
 

std::string reverseStringUsingTwoItr(std::string  str)
{
	std::string::iterator startItr = str.begin();
	std::string::iterator endItr   = str.end()-1;
 
 	while (startItr<endItr)
	{
		char c = *startItr;
		*startItr  = *endItr;
		*endItr = c;
 		startItr++; endItr--;
	}
	return str;
}

std::string longestCommPrefix(std::vector <std::string> strArr)
{
	std::string prefixStr("");
	for (int n = 0; n < strArr.size(); n++)
		if (strArr[n].size() <= 0)
			return prefixStr;

 	for (int i = 0; i<strArr[0].size(); i++) 
	{ 
		for (int n = 0; n < strArr.size(); n++)
		{
			if( (i>strArr[n].size()) || (strArr[0].at(i) != strArr[n].at(i)) )
			{
				return prefixStr;
			}
  		}
		prefixStr.push_back(strArr[0].at(i));
 	}
	

	return prefixStr;
}