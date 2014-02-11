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
	ss << std::hex << std::uppercase << std::setw(2) << (0x000000FF & ((int)value));
	return ss.str();
}

} // StringService

