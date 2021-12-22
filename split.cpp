#include "cpp-utils.hpp"

/* Split a string on delimeter.
 * Credit: https://stackoverflow.com/questions/14265581/parse-split-a-string-in-c-using-string-delimiter-standard-c
 * Min version: c++11.
*/
std::vector<std::string> split(const std::string &s, const std::string &delim)
{
	auto start = 0U;
	auto end = s.find(delim);
	std::vector<std::string> tokens;
	while (end != std::string::npos) {
		tokens.push_back(s.substr(start, end - start));
		start = end + delim.length();
		end = s.find(delim, start);
	}
	tokens.push_back(s.substr(start, end));
	return tokens;
}
