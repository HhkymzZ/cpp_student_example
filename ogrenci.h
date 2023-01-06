#pragma once
#include <iostream>

using namespace std;

class ogrenci {
public:
	string adi;
	double mt1;
	double mt2;
	double final;
	double labf;
	double sonuc;


	double calculate(double mt1,double mt2, double final,double lf);
	void display(ogrenci arr[],int i);
	void get();
	
};
