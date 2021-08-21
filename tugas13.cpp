#include <iostream>

using namespace std;

int main(){
	struct rumah{
		string tipe_rumah;		
		int jumlah_kamar;
		float luas_rumah;
		float tinggi_rumah;
		string pemilik_rumah;
	};
	
	rumah rumah1[3];
	
	rumah1[0].tipe_rumah;
	rumah1[0].jumlah_kamar;
	rumah1[0].luas_rumah;
	rumah1[0].tinggi_rumah;
	rumah1[0].pemilik_rumah;
	
	cout<<"Inputkan Tipe Rumah : ";
	cin>>rumah1[0].tipe_rumah;
	cout<<"Inputkan Jumlah Kamar : ";
	cin>>rumah1[0].jumlah_kamar;
	cout<<"Inputkan Luas Rumah : ";
	cin>>rumah1[0].luas_rumah;
	cout<<"Inputkan TInggi Rumah : ";
	cin>>rumah1[0].tinggi_rumah;
	cout<<"Inputkan Pemilik Rumah : ";
	cin>>rumah1[0].pemilik_rumah;
	cout<<endl;
	
	rumah1[1].tipe_rumah;
	rumah1[1].jumlah_kamar;
	rumah1[1].luas_rumah;
	rumah1[1].tinggi_rumah;
	rumah1[1].pemilik_rumah;
	
	cout<<"Inputkan Tipe Rumah : ";
	cin>>rumah1[1].tipe_rumah;
	cout<<"Inputkan Jumlah Kamar : ";
	cin>>rumah1[1].jumlah_kamar;
	cout<<"Inputkan Luas Rumah : ";
	cin>>rumah1[1].luas_rumah;
	cout<<"Inputkan Tinggi Rumah : ";
	cin>>rumah1[1].tinggi_rumah;
	cout<<"Inputkan Pemilik Rumah : ";
	cin>>rumah1[1].pemilik_rumah;
}
