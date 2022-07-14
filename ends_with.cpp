#include "cpp-utils.hpp"

bool ends_with(const std::string& s, const std::string& suffix)
{
    if (suffix.length() > s.length())
        return false;

    auto s_iterator = s.rbegin(), suffix_iterator = suffix.rbegin();
    while (suffix_iterator != suffix.rend()) {
        if (*s_iterator != *suffix_iterator)
            return false;
        s_iterator++;
        suffix_iterator++;
    }
    return true;
}

