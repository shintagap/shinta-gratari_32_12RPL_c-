#include <iostream>

using namespace std;

int main() {
	float panjang, lebar, tinggi, volume_balok;
	cout <<"Masukkan panjang balok " <<endl; cin>>panjang;
	cout <<"Masukkan lebar balok " <<endl; cin>>lebar;
	cout <<"Masukkan tinggi balok " <<endl; cin>>tinggi;
	
	volume_balok = panjang*lebar*tinggi;
	
	cout <<"Jadi volume balok adalah " <<volume_balok;  
}
