#include <iostream>
using namespace std;

int main(){
	float panjang_bak, tinggi_bak, lebar_bak, volume_bak;
	float tinggi_tabung, jari_tabung, volume_tabung;
	float jumlah_volume;
	cout <<"Masukkan panjang bak " <<endl; cin>>panjang_bak;
	cout <<"Masukkan lebar bak " <<endl; cin>>lebar_bak;
	cout <<"Masukkan tinggi bak " <<endl; cin>>tinggi_bak;
	cout <<"Masukkan tinggi tabung  " <<endl; cin>>tinggi_tabung;
	cout <<"Masukkan jari jari tabung " <<endl; cin>>jari_tabung;
	
	volume_bak = panjang_bak*lebar_bak*tinggi_bak;
	volume_tabung = 3.14*tinggi_tabung*jari_tabung*jari_tabung;
	
	cout <<"Volume bak adalah "<<volume_bak <<endl ;
	cout <<"Volume tabung adalah " <<volume_tabung <<endl; 
	jumlah_volume = volume_bak+volume_tabung;
	
	cout <<"Jadi jumlah volume  bak dan tabung adalah " <<jumlah_volume;
	
}
