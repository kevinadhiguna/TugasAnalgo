/*
Nama Program	:	Mencari nilai dengan metode Binary Search
Nama			:	Kevin Akbar Adhiguna
NPM				:	140810170055
Tanggal			:	10 Maret 2019
*/

#include<iostream>
#include<math.h>
using namespace std;

void title(){
	cout<<"\t[ Program Binary Search ]"<<endl<<endl;
	cout<<"Nama : Kevin Akbar Adhiguna"<<endl;
	cout<<"NPM : 140810170055"<<endl<<endl;
}

int main(){
	int n,x[30],cari,pertama,tengah,akhir;
	title();
	start :
	cout<<"Masukkan jumlah elemen yang diinput : "; cin>>n;
	if(n<2){
		cout<<"Input anda tidak valid! Silahkan ulangi..."<<endl;
		goto start;
	}
	cout<<endl<<"[ Input "<<n<<" buah elemen ]"<<endl;
	cout<<"* input elemen harus terurut dari yang terkecil hingga terbesar *"<<endl;
	for(int i=0;i<n;i++){
		cout<<"Elemen ke-"<<i+1<<" : "; cin>>x[i];
	}
	cout<<endl;
	
	cout<<"[ Binary Search ]"<<endl;
	cout<<"Masukkan elemen yang ingin dicari : "; cin>>cari; 
	cout<<endl;
	pertama=0; akhir=n; tengah;
	while(pertama<akhir){
		tengah=floor((pertama+akhir)/2);
		if(x[tengah]<cari){
			pertama = tengah+1;
		}
		else{
			akhir=tengah;
		}
	}
	int indeks;
	if(cari==x[pertama]){
		indeks=pertama+1;
		cout<<"Berhasil! Elemen ditemukan pada indeks ke-"<<indeks;
	}else{
		indeks=0;
		cout<<"Elemen tidak ditemukan..";
	}
}


