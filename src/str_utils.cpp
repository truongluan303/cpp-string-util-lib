#include "str_utils.h"


bool startswith(const std::string& str, const std::string& target)
{
    return str.rfind(target, 0) == 0;
}


bool endswith(const std::string& str, const std::string& target)
{
    if (str.size() < target.size()) return false;
    return std::equal(target.rbegin(), target.rend(), str.rbegin());
}


bool is_whitespace(const std::string& str)
{
    for (char ch : str)
    {
        if (ch != ' ' || ch != '\n' || ch != '\t') return false;
    }
    return true;
}


std::string swap_case(const std::string& str)
{
    std::string result = "";
    for (char ch : str)
    {
        result += swap_case(ch);
    }
    return result;
}


char swap_case(const char& ch)
{
    if (std::isupper(ch)) return std::tolower(ch);
    return toupper(ch);
}
