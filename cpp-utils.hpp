#pragma once

#include <string>
#include <vector>
#include <iterator>
#include <regex>

std::vector<std::string> split(const std::string &s, const std::string &delim);
bool ends_with(const std::string& s, const std::string& suffix);

/* Mathematical modulus template
 * Credit: https://stackoverflow.com/questions/2581594/how-do-i-do-modulus-in-c
*/
template<typename V>
V mod(const V& a, const V& b)
{
    return (a % b + b) % b;
}
