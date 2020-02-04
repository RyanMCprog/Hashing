#pragma once

#include <limits>
#include <iostream>


template<typename T>
size_t hash(const T& val)
{
	T::please_specialize_this_template_for_your_type;
}

template<>
size_t hash<int>(const int& val)
{
	return val * 2654435761 % std::numeric_limits<size_t>::max();
}

template<>
size_t hash<char>(const char& val)
{
	return (int)val * 2654435761 % std::numeric_limits<size_t>::max();
}

template<>
size_t hash<char*>(char* const& val)
{
	
	unsigned int tmp=0;
	for (int i = 0; val[i] != '\0'; i++)
		tmp += (int)val[i];

	return (int)tmp * 2654435761 % std::numeric_limits<size_t>::max();
}

template<>
size_t hash<std::string>(const std::string& val)
{
	//val="abcdegh";
	//unsigned int tmp=0;
	//for(int i=0;val[i]!='\0';i++)
	//    tmp+=(int)val[i]
	
	return hash((char*)val.c_str());

	//return (int)val * 2654435761 % std::numeric_limits<size_t>::max();
}