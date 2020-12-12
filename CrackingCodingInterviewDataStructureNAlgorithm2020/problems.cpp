 
#include "problems.h"
#include "stdafx.h"
#include <iostream>
#include <string>

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


std::string reverseString(std::string str)
{
	return str;
}