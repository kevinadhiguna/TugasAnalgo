/*
Deskripsi	:	Mencari nilai dengan metode Sequential Search
Nama		:	Kevin Akbar Adhiguna
NPM			:	140810170055
Kelas		:	A
Tanggal		:	10 Maret 2019
*/

#include <iostream>
using namespace std;

void title(){
	cout<<"\t[ Program Sequential Search ]"<<endl<<endl;
	cout<<"Nama : Kevin Akbar Adhiguna"<<endl;
	cout<<"NPM : 140810170055"<<endl<<endl;
}

int main(){
	int n, x[50], cari;	
	title();
	
	awal:
	cout<<"Masukkan jumlah data yang ingin diinput : "; cin>>n;
	if(n<2){
		cout<<endl<<"Input tidak valid! Silahkan coba lagi..."<<endl;
		goto awal; 
	}
	cout<<endl;
	cout<<"[ Input "<<n<<" buah data ]"<<endl;;
	for (int i=1;i<=n;i++){
		cout<<"Data ke-"<<i<<" : "; cin>>x[i];
	}

	cout<<endl<<"[ Memulai Sequantial Search ]"<<endl;
	cout<<"Masukkan data yang dicari : "; cin>>cari; cout<<endl;
    int ketemu=0;

	cout<<"[ Hasil Sequential Search ]"<<endl;
    for(int i=1;i<=n;i++){
        if (x[i]==cari){
			ketemu=1;
			cout<<"Berhasil! Data ditemukan pada indeks ke-"<<i;
			break;
		}
	}
	if(ketemu==0){
		cout<<"Oops.. data yang dicari tidak dapat ditemukan..";
	}
}



