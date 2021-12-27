
#include"Header.h"
#include<iostream>
#include<string>
#include <vector>

int main()
{
	std::cout << "Please enter the coding text" << std::endl;
	std::string str;
	std::string tmp;
	getline(std::cin, str);
	std::cout << "Please write the key" << std::endl;
	std::cin >> tmp;
	int numBox;
	if (str.size() % 8 == 0)
		numBox = str.size() / 8;
	else
		numBox = (str.size() / 8) + 1;
	std::vector<Box>vec;
	vec.resize(numBox);
	int k{};
	for (int i = 0; i < numBox; i++)
	{
		vec[i].setBox(str.substr(0, 8));
		str.erase(0, 8);
		if (str.empty()) { break; }
	}
	for (int j = 0; j < tmp.size(); j++)
	{
		if (tmp[j] >= '0' && tmp[j] <= '9')
		{
			k = (tmp[j] - '0')-1;
			while (tmp[j+1] >= '0' && tmp[j+1] <= '9')
			{
				k = (k * 10 + (tmp[j] - '0'))-1;
			}
			continue;
		}
		if (tmp[j] == 'L')
		{
			vec[k].Right();
		}
		else if (tmp[j] == 'R')
		{
			vec[k].Left();
		}
		else if (tmp[j] == 'U')
		{
			vec[k].Down();
		}
		else if (tmp[j] == 'D')
		{
			vec[k].Up();
		}
	}

	for (int i = 0; i < numBox; i++)
	{
		std::cout << vec[i].getBox();
	}
	return 0;
}
