/*
Nama Program	:	Mencari nilai Maximum dari elemen yang diinput
Nama			:	Kevin Akbar Adhiguna
NPM				:	140810170055
Tanggal			:	10 Maret 2019
*/

#include<iostream>
using namespace std;

void title(){
	cout<<"\t[ Program mencari Nilai Max. ]"<<endl<<endl;
	cout<<"Nama : Kevin Akbar Adhiguna"<<endl;
	cout<<"NPM  : 140810170055"<<endl<<endl;
}

int main(){
	int i, n, max, x[50];
	
	title();
	err:
	cout<<"Masukkan Jumlah Elemen : ";
	cin>>n;
	if(n<2){
		cout<<"Elemen tidak dapat dibandingkan, silahkan coba lagi..."<<endl<<endl;
		goto err;
	}
	cout<<endl<<"[ Input "<<n<<" buah elemen ]"<<endl;
	for(i=0;i<n;i++){
		cout<<"Elemen ke-"<<i+1<<": "; cin>>x[i];
	}
    i=1;
    max = x[0]; 
    do{
    	if(x[i]>max){
    		max=x[i];
    	}
    	i++;
    }while(i<n);
    
    cout<<endl<<"[ Hasil ]"<<endl;
    cout<<"Nilai maksimum elemen adalah "<<max;
}
