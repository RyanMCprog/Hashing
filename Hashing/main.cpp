#include "hash.h"
#include "Hashmap.h"

#include <unordered_map>
#include <string>
#include <iostream>


int main()
{
	tHashmap<std::string, int> favorites;
	favorites["Terry"] = 5;
	favorites["Ryan"] = 7;

	std::cout << favorites["Terry"] << std::endl;
	std::cout << favorites["Ryan"] << std::endl;
}
