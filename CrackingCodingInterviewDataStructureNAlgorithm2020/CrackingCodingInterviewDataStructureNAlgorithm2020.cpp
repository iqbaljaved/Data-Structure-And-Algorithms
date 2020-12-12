// CrackingCodingInterviewDataStructureNAlgorithm2020.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
#include "problems.h"




int main()
{
	int i = 0;
 	help();

	//section 1.
	std::string str = "I love my India";
	int len = lengthOfLastWord(str);
	std::cout << "lengthOfLastWord : " << len << std::endl;

	//section 2.
	std::string revstr(reverseString(str));
	std::cout  << "reverseString : " << str << " --> " << revstr << std::endl;

    return 0;
}

