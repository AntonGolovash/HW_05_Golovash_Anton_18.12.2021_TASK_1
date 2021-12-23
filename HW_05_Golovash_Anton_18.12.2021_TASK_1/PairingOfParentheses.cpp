#include "PairingOfParentheses.h"

template<typename T>
PairingOfParentheses<T>::PairingOfParentheses()
{
	cout << "Constructor" << endl;
	this->_data = nullptr;
}

template<typename T>
inline PairingOfParentheses<T>::~PairingOfParentheses()
{
	cout << "Destructor" << endl;
}

template<typename T>
inline bool PairingOfParentheses<T>::PairingCheck(T* object)
{
	_data = object;
	int i = 0;
	int roundCounter = 0;
	int figureCounter = 0;
	int squareCounter = 0;
	while (_data[i] != ';')
	{
		if (_data[i] == '(')
		{
			roundCounter++;
		}
		if (_data[i] == ')')
		{
			roundCounter--;
		}
		if (_data[i] == '{')
		{
			figureCounter++;
		}
		if (_data[i] == '}')
		{
			figureCounter--;
		}
		if (_data[i] == '[')
		{
			squareCounter++;
		}
		if (_data[i] == ']')
		{
			squareCounter--;
		}
		i++;
	}
	if ((roundCounter == 0) && (figureCounter == 0) && (squareCounter == 0))
	{
		return true;
	}
	return false;
}
