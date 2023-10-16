// Polynomian.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <numeric>
#include "polynomiandef.h"

string vec2str(vector<int> v) {
    return std::accumulate(std::begin(v), std::end(v), string(),
        [](string& ss, int& i)
        {
            return ss.empty() ? to_string(i) : ss + "," + to_string(i);
        });
}


int main()
{

    cout << Polynomian::degree(Polynomian::convert("1 2 3 4")) << endl << endl;

    cout << vec2str(Polynomian::add(Polynomian::convert("1 2 3 4"), Polynomian::convert("5 6 7 8"))) << endl << endl;
    cout << vec2str(Polynomian::add(Polynomian::convert("1 2"), Polynomian::convert("5 6 7 8"))) << endl << endl;
    cout << vec2str(Polynomian::add(Polynomian::convert("1 2 3 4"), Polynomian::convert("7 8"))) << endl << endl;

    cout << vec2str(Polynomian::sub(Polynomian::convert("1 2 3 4"), Polynomian::convert("5 6 7 8"))) << endl << endl;
    cout << vec2str(Polynomian::sub(Polynomian::convert("1 2"), Polynomian::convert("5 6 7 8"))) << endl << endl;
    cout << vec2str(Polynomian::sub(Polynomian::convert("1 2 3 4"), Polynomian::convert("7 8"))) << endl << endl;

    cout << vec2str(Polynomian::mul(Polynomian::convert("1"), Polynomian::convert("2"))) << endl << endl;
    cout << vec2str(Polynomian::mul(Polynomian::convert("1 2"), Polynomian::convert("2 3 4"))) << endl << endl;

}


