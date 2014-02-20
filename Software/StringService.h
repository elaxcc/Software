#ifndef _STRING_SERVICE_H_
#define _STRING_SERVICE_H_

namespace StringService
{

void Replace(std::string &source, const std::string &lookup, const std::string &replace);

std::string CharToHexStr(char value);
std::string VectorCharToHexSrt(std::vector<char> vec_values);

} // StringService

#endif // _STRING_SERVICE_H_
