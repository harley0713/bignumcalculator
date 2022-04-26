
#include <iostream>
#include <string>
#include <vector>
using namespace std;


class BigInt{
public:
	vector<long long int> Int;
	int flag;

	BigInt();
	BigInt(string);

	BigInt& operator=(BigInt Int2);
	BigInt operator+(BigInt Int2);
	BigInt operator-(BigInt Int2);
	BigInt operator*(BigInt Int2);
	BigInt operator/(BigInt Int2);
	BigInt operator%(BigInt Int2);
	BigInt operator-();

	bool operator>(BigInt compareInt);
	bool operator<(BigInt compareInt);
	bool operator>=(BigInt compareInt);
	bool operator<=(BigInt compareInt);
	bool operator==(BigInt compareInt);
	bool operator!=(BigInt compareInt);
	
	BigInt& fixInt();

	friend istream& operator>>(istream&, BigInt&);
	friend ostream& operator<<(ostream&, BigInt);

	static BigInt factorial(BigInt num);
	static BigInt power(BigInt base, BigInt expotent);
};