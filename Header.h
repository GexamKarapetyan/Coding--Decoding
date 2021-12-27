#ifndef _HEADER_
#define _HEADER_
#include<iostream>

class Box
{
private:
	std::string str;
public:
	Box()
	{
		str.resize(8, ' ');
	}
	void setBox(std::string);
	std::string getBox() const;
	void Left();
	void Right();
	void Up();
	void Down();
	
};
std::string Box::getBox() const
{
	return str;
}

void Box::setBox(std::string _str)
{
	for(int i = 0 ; i < _str.size() ; ++i)
		this->str[i] = _str[i];
}

void Box::Up()
{
	char tmp = str[0];
	str[0] = str[4];
	str[4] = str[7];
	str[7] = str[3];
	str[3] = tmp;
	tmp = str[1];
	str[1] = str[5];
	str[5] = str[6];
	str[6] = str[2];
	str[2] = tmp;
}

void Box::Down()
{
	char tmp = str[4];
	str[4] = str[0];
	str[0] = str[3];
	str[3] = str[7];
	str[7] = tmp;
	tmp = str[5];
	str[5] = str[1];
	str[1] = str[2];
	str[2] = str[6];
	str[6] = tmp;
}

void Box::Right()
{
	char tmp = str[1];
	str[1] = str[0];
	str[0] = str[3];
	str[3] = str[2];
	str[2] = tmp;
	tmp = str[5];
	str[5] = str[4];
	str[4] = str[7];
	str[7] = str[6];
	str[6] = tmp;
}

void Box::Left()
{

	char tmp = str[0];
	str[0] = str[1];
	str[1] = str[2];
	str[2] = str[3];
	str[3] = tmp;
	tmp = str[4];
	str[4] = str[5];
	str[5] = str[6];
	str[6] = str[7];
	str[7] = tmp;
}




#endif // !_HEADER_

