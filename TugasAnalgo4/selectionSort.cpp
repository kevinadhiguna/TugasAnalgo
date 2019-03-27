/*
Nama Program	:	Menngurutkan elemen sesuai dengan metode Selection Sort
Nama			:	Kevin Akbar Adhiguna
NPM				:	140810170055
Tanggal			:	26 Maret 2019
*/

#include<iostream>
#include<conio.h>
using namespace std;

void title(){
	cout<<"\t[ Program Selection Sort ]"<<endl<<endl;
	cout<<"Nama : Kevin Akbar Adhiguna"<<endl;
	cout<<"NPM  : 140810170055"<<endl<<endl;
}

int main(){
    int i,j,n,loc,temp,min,x[30];
    
	title();
    
    awal:
	cout<<"Masukkan jumlah elemen yang ingin diinput : "; cin>>n;
	if(n<2){
		cout<<endl<<"Input tidak valid! Silahkan coba lagi..."<<endl;
		goto awal; 
	}
	cout<<endl;
	
	cout<<"[ Input "<<n<<" buah elemen ]"<<endl;;
	for (i=0;i<n;i++){
		cout<<"Elemen ke-"<<i+1<<" : "; cin>>x[i];
	}
	
	cout<<endl<<"[ Hasil sebeleum Selection Sort ]"<<endl; 
    for(i=0;i<n;i++){
        cout<<x[i]<<" ";
    }
    getch();

    for(i=0;i<n-1;i++)
    {
        min=x[i];
        loc=i;
        for(j=i+1;j<n;j++)
        {
            if(min>x[j])
            {
                min=x[j];
                loc=j;
            }
        }
 
        temp=x[i];
        x[i]=x[loc];
        x[loc]=temp;
    }
	
	cout<<endl;
    cout<<endl<<"[ Hasil setelah Selection Sort ]"<<endl; 
    for(i=0;i<n;i++){
        cout<<x[i]<<" ";
    }
}
