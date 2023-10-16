#include "polynomiandef.h"
#include <sstream> 

vector<int> Polynomian::convert(string s) {
	istringstream s2(s);
	vector<int> v;
	int tmp;

	while (s2 >> tmp) {
		v.push_back(tmp);
	}

	return v;

}

unsigned int Polynomian::degree(vector<int> v)
{ 
	return v.size() - 1;
};

vector<int> Polynomian::add(vector<int> p1, vector<int> p2) {
	vector<int> result;
	for (int i = 0; i < max(p1.size(), p2.size()); ++i)
	{
		int a = i < p1.size() ? p1[i] : 0;
		int b = i < p2.size() ? p2[i] : 0;

		result.push_back(a + b);

	}

	return result;
}

vector<int> Polynomian::sub(vector<int> p1, vector<int> p2) {
	vector<int> result;
	for (int i = 0; i < max(p1.size(), p2.size()); ++i)
	{
		int a = i < p1.size() ? p1[i] : 0;
		int b = i < p2.size() ? p2[i] : 0;

		result.push_back(a - b);

	}


	return result;
}

vector<int> Polynomian::mul(vector<int> p1, vector<int> p2) {
	vector<int> result(p1.size() + p2.size() - 1);

	for (int i = 0; i < p1.size(); ++i) {
		for (int j = 0; j < p2.size(); ++j) {
			result[i + j] += p1[i] * p2[j];
		}
	}

	return result;
}
