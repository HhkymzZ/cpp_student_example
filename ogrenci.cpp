#include "ogrenci.h"

double ogrenci::calculate(double mt1, double mt2, double final, double lf) {
	double sonuc;
	sonuc = 10 + mt1 * 0.20 + mt2 * 0.25 + final * 0.30 + lf * 0.15;
	if (sonuc < 101 and sonuc > -1 )
	{
		return sonuc;
	}
	else {
		cout << "Hata Var" ;
	}
	
}


void ogrenci::display(ogrenci arr[], int i){
		
	cout << arr[i].adi << "   ||   " << arr[i].sonuc << endl;

};

void ogrenci::get() {
	
		
		int i, size;
		cout << "Kac Ogrenci Var?: ";
		cin >> size;
		ogrenci* arr = new ogrenci[size];
		for (i = 0; i < size; i++) {
			cout << i + 1 << ". Ogrencinin adini giriniz: ";
			cin >> arr[i].adi;
			cout << i + 1 << ". Ogrenci mt1 giriniz: ";
			cin >> arr[i].mt1;
			cout << i + 1 << ". Ogrenci mt2 giriniz: ";
			cin >> arr[i].mt2;
			cout << i + 1 << ". Ogrenci final giriniz: ";
			cin >> arr[i].final;
			cout <<i+1<< ". Ogrenci labfinal giriniz: ";
			cin >> arr[i].labf;

			arr[i].sonuc = calculate(arr[i].mt1, arr[i].mt2, arr[i].final, arr[i].labf);

			if (i == size - 1) {
				for (i = 0; i < size; i++) {

					display(arr, i);
				}
			}
			
			
		}
		
		

		

};

