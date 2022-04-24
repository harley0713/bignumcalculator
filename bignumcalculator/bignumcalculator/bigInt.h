
#include <iostream>
#include <string>
#include <vector>
using namespace std;


class bigInt{
public:

	vector<int> Int;
	int flag = 1;

	bigInt();
	bigInt(string);


	bigInt operator+(bigInt Int2);
	bigInt operator-(bigInt Int2);
	bigInt operator*(bigInt Int2);
	bigInt operator/(bigInt Int2);
	bigInt operator%(bigInt Int2);
	bigInt operator-();

	bool operator>(bigInt compareInt);
	bool operator<(bigInt compareInt);
	bool operator>=(bigInt compareInt);
	bool operator<=(bigInt compareInt);
	bool operator==(bigInt compareInt);
	bool operator!=(bigInt compareInt);
	
	bigInt& fixInt();

	friend istream& operator>>(istream&, bigInt&);
	friend ostream& operator<<(ostream&, bigInt);

	static bigInt factorial(bigInt num);
	static bigInt power(bigInt base, bigInt expotent);
};