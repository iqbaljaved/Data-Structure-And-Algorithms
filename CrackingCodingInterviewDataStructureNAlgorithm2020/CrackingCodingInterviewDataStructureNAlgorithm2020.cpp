// CrackingCodingInterviewDataStructureNAlgorithm2020.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
#include "problems.h"
#include <string>
#include <vector>




int main()
{
	int i = 0;
 	help();

	//section 1.
	std::string str = "I love my India";
	int len = lengthOfLastWord(str);
	std::cout << "lengthOfLastWord : " << len << std::endl;

	//section 2.
	std::string revstr(reverseStringUsingStack(str));
	std::cout  << "reverseString : " << str << " : " << revstr << std::endl;

	//std::string revstr(reverseStringUsingTwoPtr(revstr));
	str = reverseStringUsingTwoPtr(revstr);
	std::cout << "reverseString : " << revstr << " : " << str << std::endl;
	
	revstr = reverseStringUsingTwoItr(str);
	std::cout << "reverseString : " << str << " : " << revstr << std::endl;

	std::vector <std::string> strArr;
	strArr.push_back("javed");
	strArr.push_back("jawed");
	strArr.push_back("");
	std::cout << "longest common prefix in arr of strings : " <<   longestCommPrefix(strArr) << std::endl;


    return 0;
}

