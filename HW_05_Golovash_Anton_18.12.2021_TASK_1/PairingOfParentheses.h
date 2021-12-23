#pragma once
#include <iostream>
#include <sstream>
#include <string>
#include <ostream>
using namespace std;

template<typename T>
class PairingOfParentheses
{
public:
	PairingOfParentheses();
	~PairingOfParentheses();
	bool PairingCheck(T* object);
private:
	T* _data;
};