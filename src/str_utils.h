#include <string>


std::string strip(const std::string& str);


std::string* split(const std::string& str, const std::string& sep);


std::string* split(const std::string& str, const char& sep);


bool startswith(const std::string& str, const std::string& target);


bool endswith(const std::string& str, const std::string& target);


bool is_whitespace(const std::string& str);


std::string join(const std::string& delimiter, std::string* elements);


std::string swap_case(const std::string& str);


std::string to_camel(const std::string& str);


std::string to_snake(const std::string& str);


std::string to_pascal(const std::string& str);


size_t count_matches(const std::string& str, const std::string& target);


bool is_ipv4(const std::string& str);


bool is_ipv6(const std::string& str);
