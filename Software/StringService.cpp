#include "stdafx.h"

#include "StringService.h"

namespace StringService
{

void Replace(std::string &source, const std::string &lookup, const std::string &replace)
{
	if (!lookup.empty())
	{
		size_t start = 0;
		while (true)
		{
			size_t pos = source.find(lookup, start);
			if (std::string::npos == pos)
			{
				return;
			}
			source.replace(pos, lookup.length(), replace);
			start = pos + replace.length();
		}
	}
}

std::string CharToHexStr(char value)
{
	std::stringstream ss;
	ss << std::hex << std::setfill('0') << std::setw(2) << (0x000000FF & ((int)value));
	return ss.str();
}

std::string VectorCharToHexSrt(std::vector<char> vec_values)
{
	std::string str;
	for (unsigned i = 0; i <vec_values.size(); ++i)
	{
		str = str + CharToHexStr(vec_values[i]);
	}
	return str;
}

} // StringService

