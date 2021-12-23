#include "cpp-utils.hpp"

/* Split a string on a regex delimeter.
 * Credit: https://stackoverflow.com/questions/42310659/tokenize-string-using-sregex-token-iterator-in-case-with-heading-space
 * Min version: c++11.
*/
std::vector<std::string> split(const std::string &s, const std::string &delim)
{
	std::regex re(delim);
	std::sregex_token_iterator first{s.begin(), s.end(), re, -1}, last;
	return {first, last};
}
