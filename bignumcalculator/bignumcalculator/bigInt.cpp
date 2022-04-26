#include "bigInt.h"

BigInt::BigInt() {
	flag = 0;
	Int.push_back(0);
}
BigInt::BigInt(string s1) {
	if (s1[0] == '-') {
		flag = 1;
		string tmp = "";
		for (int i = 1; i < s1.length(); i++) {
			if ((i - 1) % 9 == 0 && tmp != "") {
				Int.push_back(stoi(tmp));
				tmp = "";
			}
			tmp += s1[i];
			//Int.push_back(s1[i]);
		}
	}
	else {
		flag = 0;
		string tmp;
		for (int i = 0; i < s1.length(); i++) {
			if (i % 9 == 0 && tmp != "") {
				Int.push_back(stoi(tmp));
				tmp = "";
			}
			tmp += s1[i];
			//Int.push_back(s1[i]);
		}
	}
	return;
}
BigInt& BigInt::operator=(BigInt n) {
	flag = n.flag;
	for (int i = 0; i < n.Int.size(); i++) {
		Int.push_back(n.Int[i]);
	}
	return *this;
}
BigInt BigInt::operator+(BigInt Int2) {
	int carry = 0;
	if (flag == Int2.flag) { // same sign (++, --)
		if (Int.size() < Int2.Int.size()) {
			int i = 0;
			while (i < Int.size()) {
				Int[i] += Int2.Int[i] + carry;
				carry = 0;
				if (Int[i] > 999999999) {
					carry = Int[i] / 1000000000;
					Int[i] = Int[i] % 1000000000;
				}
				i++;
			}
			while (i < Int2.Int.size()) {
				long long int tmp = Int2.Int[i] + carry;
				carry = 0;
				if (tmp > 999999999) {
					carry = tmp / 1000000000;
					tmp = tmp % 1000000000;
				}
				Int.push_back(tmp);
				i++;
			}
		}
		else if (Int.size() == Int2.Int.size()) {
			int i = 0;
			while (i < Int.size()) {
				Int[i] += Int2.Int[i] + carry;
				carry = 0;
				if (Int[i] > 999999999) {
					carry = Int[i] / 1000000000;
					Int[i] = Int[i] % 1000000000;
				}
				i++;
			}
			if (carry != 0) {
				Int.push_back(carry);
			}
		}
		else {
			int i = 0;
			while (i < Int2.Int.size()) {
				Int[i] += Int2.Int[i] + carry;
				carry = 0;
				if (Int[i] > 999999999) {
					carry = Int[i] / 1000000000;
					Int[i] = Int[i] % 1000000000;
				}
				i++;
			}
			while (i < Int.size() && carry != 0) {
				long long int tmp = Int[i] + carry;
				carry = 0;
				if (tmp > 999999999) {
					carry = tmp / 1000000000;
					tmp = tmp % 1000000000;
				}
				Int[i] = tmp;
				i++;
			}
		}
	}
	else {

	}
	return;
}
BigInt BigInt::operator-(BigInt Int2) {
	return;
}
BigInt BigInt::operator*(BigInt Int2) {
	return;
}
BigInt BigInt::operator/(BigInt Int2) {
	return;
}
BigInt BigInt::operator%(BigInt Int2) {
	return;
}
BigInt BigInt::operator-() {
	BigInt tmp = *this;
}

bool BigInt::operator>(BigInt compareInt) {
	return;
}
bool BigInt::operator<(BigInt compareInt) {
	return;
}
bool BigInt::operator>=(BigInt compareInt) {
	return;
}
bool BigInt::operator<=(BigInt compareInt) {
	return;
}
bool BigInt::operator==(BigInt compareInt) {
	return;
}
bool BigInt::operator!=(BigInt compareInt) {
	return;
}



istream& operator>>(istream& strm, BigInt& n) {
	string a;
	strm >> a;
	BigInt tmp(a);
	n = tmp;
}
ostream& operator<<(ostream& strm, BigInt n) {
	if (n.flag == 0) {
		for (int i = 0; i < n.Int.size(); i++) {
			strm << n.Int[i];
		}
	}
	else {
		strm << "-";
		for (int i = 0; i < n.Int.size(); i++) {
			strm << n.Int[i];
		}
	}
}