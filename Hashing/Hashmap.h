#pragma once
#include "hash.h"

template<typename K, typename V>
class tHashmap
{
	V* data;
	size_t dataCapacity;

public:
	tHashmap();
	~tHashmap();

	V& operator[] (const K& key);
};

template<typename K, typename V>
inline tHashmap<K, V>::tHashmap()
{
	data = new V[100];
	dataCapacity = 100;

}

template<typename K, typename V>
inline tHashmap<K, V>::~tHashmap()
{
	delete data[];
}

template<typename K, typename V>
inline V & tHashmap<K, V>::operator[](const K & key)
{
	auto hashedKey = hash(key) % dataCapacity;
	return data[hashedKey];
}
