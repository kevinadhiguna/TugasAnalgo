/*
Nama Program	:	Menngurutkan elemen sesuai dengan metode Bubble Sort
Nama			:	Kevin Akbar Adhiguna
NPM				:	140810170055
Tanggal			:	26 Maret 2019
*/
#include<iostream> 
using namespace std;

void title(){
	cout<<"\t[ Program Bubble Sort ]"<<endl<<endl;
	cout<<"Nama : Kevin Akbar Adhiguna"<<endl;
	cout<<"NPM  : 140810170055"<<endl<<endl;
}
 
int main()
{
	int a[50],n,i,j,temp;
	title();
	cout<<"Masukkan Jumlah elemen yang diinput: ";
	cin>>n;
	
	for(i=0;i<n;++i){
		cout<<"Masukkan Elemen ke-"<<i+1<<": "; cin>>a[i];
	}
	for(i=1;i<n;++i)
	{
		for(j=0;j<(n-i);++j)
			if(a[j]>a[j+1])
			{
				temp=a[j];
				a[j]=a[j+1];
				a[j+1]=temp;
			}
	}
	
	cout<<endl<<"Hasil Bubble Sort:";
	for(i=0;i<n;++i)
		cout<<" "<<a[i];
}


