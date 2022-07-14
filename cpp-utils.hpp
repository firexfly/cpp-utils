#pragma once

#include <string>
#include <vector>
#include <iterator>
#include <regex>

std::vector<std::string> split(const std::string &s, const std::string &delim);
bool ends_with(const std::string& s, const std::string& suffix);
