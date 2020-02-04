#include "hash.h"
#include "Hashmap.h"

#include <unordered_map>
#include <string>
#include <iostream>


int main()
{
	tHashmap<std::string, int> favorites;
	favorites["Terry"] = 5;

	std::cout << favorites["Terry"] << std::endl;
}
