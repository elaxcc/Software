#pragma once

class y_Debug
{
public:
	y_Debug()
	{
	}

	~y_Debug()
	{
	}

	y_Debug& operator << (std::string str)
	{
		std::cout << str;
		return *this;
	}

	y_Debug& operator << (char *str)
	{
		std::cout << str;
		return *this;
	}

	y_Debug& operator << (int val)
	{
		std::cout << val;
		return *this;
	}

	y_Debug& operator << (double val)
	{
		std::cout << val;
		return *this;
	}
};

