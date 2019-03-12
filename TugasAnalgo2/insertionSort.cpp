/*
Nama Program	:	Menngurutkan elemen sesuai dengan metode Insertion Sort
Nama			:	Kevin Akbar Adhiguna
NPM				:	140810170055
Tanggal			:	10 Maret 2019
*/

#include<iostream>
#include<conio.h>
using namespace std;

void title(){
	cout<<"\t[ Program Insertion Sort ]"<<endl<<endl;
	cout<<"Nama : Kevin Akbar Adhiguna"<<endl;
	cout<<"NPM  : 140810170055"<<endl<<endl;
}

int main(){
    int i,j,m,temp,x[30];
    
    title();
    
    awal:
	cout<<"Masukkan jumlah elemen yang ingin diinput : "; cin>>m;
	if(m<2){
		cout<<endl<<"Input tidak valid! Silahkan coba lagi..."<<endl;
		goto awal; 
	}
	cout<<endl;
	
	cout<<"[ Input "<<m<<" buah elemen ]"<<endl;;
	for (i=0;i<m;i++){
		cout<<"Elemen ke-"<<i+1<<" : "; cin>>x[i];
	}
	
	cout<<endl<<"[ Hasil sebeleum Insertion Sort ]"<<endl; 
    for(i=0;i<m;i++){
        cout<<x[i]<<" ";
    }
    getch();
 
    for(i=1;i<=m-1;i++){
        temp=x[i];
        j=i-1;
 
        while((temp<x[j])&&(j>=0)){
            x[j+1]=x[j];    //memindahkan elemen
            j=j-1;
        }
        x[j+1]=temp;    //insert element pada tempat yang seharusnya
    }
 	cout<<endl;
    cout<<endl<<"[ Hasil setelah Insertion Sort ]"<<endl; 
    for(i=0;i<m;i++){
        cout<<x[i]<<" ";
    }
}
