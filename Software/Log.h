#pragma once

class c_Debug
{
public:
	c_Debug()
	{
	}

	~c_Debug()
	{
	}

	c_Debug& operator << (std::string str)
	{
		std::cout << str;
		return *this;
	}

	c_Debug& operator << (char *str)
	{
		std::cout << str;
		return *this;
	}

	c_Debug& operator << (int val)
	{
		std::cout << val;
		return *this;
	}

	c_Debug& operator << (double val)
	{
		std::cout << val;
		return *this;
	}
};

