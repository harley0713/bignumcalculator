#include "bigInt.h"

bigInt::bigInt() {
	flag = 0;
	Int.push_back(0);
}
bigInt::bigInt(string s1) {
	if (s1[0] == '-') {
		flag = 1;
		for (int i = 1; i < s1.length(); i++) {
			Int.push_back(s1[i]);
		}
	}
	else
	{
		flag = 0;
		for (int i = 0; i < s1.length(); i++) {
			Int.push_back(s1[i]);
		}
	}
}

bigInt bigInt::operator+(bigInt Int2) {

}
bigInt bigInt::operator-(bigInt Int2) {

}
bigInt bigInt::operator*(bigInt Int2) {

}
bigInt bigInt::operator/(bigInt Int2) {

}
bigInt bigInt::operator%(bigInt Int2) {

}
bigInt bigInt::operator-() {
	flag = 0;
}

bool bigInt::operator>(bigInt compareInt) {

}
bool bigInt::operator<(bigInt compareInt) {

}
bool bigInt::operator>=(bigInt compareInt) {

}
bool bigInt::operator<=(bigInt compareInt) {

}
bool bigInt::operator==(bigInt compareInt) {

}
bool bigInt::operator!=(bigInt compareInt) {

}

