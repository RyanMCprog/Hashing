#pragma once

#include <limits>
#include <iostream>


template<typename T>
size_t hash(const T& val)
{
	T::please_specialize_this_template_for_your_type;
}
//hashs int
template<>
size_t hash<int>(const int& val)
{
	return val * 2654435761 % std::numeric_limits<size_t>::max();
}
//converts char to int to hash it
template<>
size_t hash<char>(const char& val)
{
	return (int)val * 2654435761 % std::numeric_limits<size_t>::max();
}

//hashs c string by taking the char of each character again changing it to an int to hash
template<>
size_t hash<char*>(char* const& val)
{
	
	unsigned int tmp=0;
	for (int i = 0; val[i] != '\0'; i++)
		tmp += (int)val[i];

	return (int)tmp * 2654435761 % std::numeric_limits<size_t>::max();
}

//hashing std string
template<>
size_t hash<std::string>(const std::string& val)
{
	
	//turns it into a c string to hash
	return hash((char*)val.c_str());

	
}