#pragma once

#include <string>
#include <vector>

using namespace std;


class Polynomian {
	public:
		static vector<int> convert(string s);

		static unsigned int degree(vector<int> v);

		static vector<int> add(vector<int> p1, vector<int> p2);
		static vector<int> sub(vector<int> p1, vector<int> p2);
		static vector<int> mul(vector<int> p1, vector<int> p2);





};

