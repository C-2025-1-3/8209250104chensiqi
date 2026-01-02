#pragma once
#include<iostream>
using namespace std;
double celsius_to_fah(double cel)
{
	double fah;
	fah = 32 + (cel * 1.8);
	return fah;
}
double fah_to_celsius(double fah)
{
	double cel;
	cel = (fah - 32) / 1.8;
	return cel;
}