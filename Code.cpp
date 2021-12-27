/*
#include"Header.h"
#include<iostream>
#include<string>
#include <vector>
#include<iterator>
#include<algorithm>
int main()
{
	std::cout << "Please enter the text"<<std::endl;
	std::string str;
	getline(std::cin, str);
	int numBox;
	if (str.size() % 8 == 0)
		numBox = str.size() / 8;
	else
		numBox = (str.size() / 8) + 1;
	std::vector<Box>vec;
	vec.resize(numBox);
	std::vector<std::string> vecS;
	vecS.resize(numBox);
	for (int i = 0; i < numBox; i++)
	{
		vec[i].setBox(str.substr(0, 8));
		std::cout << "Please write which way you want to go the " << i+1 << " box, left(L), right(R), up(U), down(D)"<<std::endl;
		std::cin >> vecS[i];
		for (int j = 0; j < vecS[i].size(); j++)
		{
			if (vecS[i][j] == 'L')
			{
				vec[i].Left();
			}
			else if (vecS[i][j] == 'R')
			{
				vec[i].Right();
			}
			else if (vecS[i][j] == 'U')
			{
				vec[i].Up();
			}
			else if (vecS[i][j] == 'D')
			{
				vec[i].Down();
			}
		}
		str.erase(0,8);
		if (str.empty()) {break;}
	}
	for (int i = 0; i < numBox; i++)
	{
		std::cout << vec[i].getBox();
	}
	std::cout << "\nKey = ";
	for (int i = 0; i < vecS.size(); i++)
	{
		std::cout << i + 1;
		std::string tmp = vecS[i];
		std::copy(tmp.rbegin(), tmp.rend(), std::ostream_iterator<char>(std::cout));
	}
	std::cout << std::endl;
	return 0;
}

*/