/*
Deskripsi	:	Quiz-1 Prak.Analgo Merge Sort
Nama		:	Kevin Akbar Adhiguna
NPM			:	140810170055
Kelas		:	A
*/

#include<iostream>
using namespace std;

void title(){
	cout<<"[ Quiz-1 Prak.Analgo Merge Sort ]"<<endl;
	cout<<"Nama : Kevin Akbar Adhiguna"<<endl;
	cout<<"NPM : 140810170055"<<endl;
}

void Merge(int* L[],int* R[],int* A){
	nl=sizeof(L[]);
	nr=sizeof(R[]);
	int i=j=k=o;
	while(i<nl && j<nr){
		if(L[i]<=R[j]{
			A[K]=L[i];
			k=k+1;
			i=i+1;
		}
		else{
			A[K]=R[j];
			k=k+1;
			j=j+1;
		}
		k=k+1;
		while(i<nl){
			A[K]=L[i]; 
			i=i+1;
		}
		while(j<nr){
			A[K]=R[j];
			j=j+1;
		}
	}
}

void Mergesort(int* A){
	n=sizeof(A[]);
	mid=n/2;
	if(n<2) {
		return mid;
	}
	left=sizeof(mid);
	right=sizeof(n-mid);
	for(int i=0;i<=(mid-1);i++){
		left[i]=A[i];
	}
	for(int g=mid;i<=(n-1);i++){
		right[i-mid]=A[i];
	}
	Mergesort(left);
	Mergesort(right);
	Mergesort(left,right,A);
}

main(){
	int i,j,m[50];
	title();
	cout<<"Masukkan jumlah elemen yang akan diurutkan : "; cin>>n;
	cout<<"[ Input Elemen ]"<<endl;
	for(int z=0;z<n;z++){
		cout<<"Masukkan elemen ke-"<<z+1<<" : "; cin>>m[z]; 
	} 
	Merge();
	Mergesort();
}
