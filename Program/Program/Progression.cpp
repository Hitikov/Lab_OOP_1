#pragma once
#include <iostream>
#include "Progression.h"

double Progression::Power(int a, int i) {
	double res = 1;
	for (int j = 0; j < i; j++){
		res *= a;
	}
	return res;
}

void Progression::Init(double first, int second) {
	this->first = first;
	this->second = second;
}

void Progression::Set1(double vfirst) {
	this->first = vfirst;
}

void Progression::Set2(int vsecond) {
	this->second = vsecond;
}

void Progression::Show() {
	std::cout << "first: " << this->first << std::endl;
	std::cout << "second: " << this->second << std::endl;
}

double Progression::element(int j) {
	double res = this->first * Power(this->second, j);
	return res;
}