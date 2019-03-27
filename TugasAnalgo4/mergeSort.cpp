/*
Nama Program	:	Mengurutkan nilai elemen dengan metode Merge Sort
Nama			:	Kevin Akbar Adhiguna
NPM				:	140810170055
Tanggal			:	10 Maret 2019
*/
#include <iostream>
using namespace std;

void title(){
	cout<<"\t[ Program Merge Sort ]"<<endl<<endl;
	cout<<"Nama : Kevin Akbar Adhiguna"<<endl;
	cout<<"NPM  : 140810170055"<<endl<<endl;
}

void cetak(int *array, int n) {
  for (int i = 0; i < n; ++i){
    cout<<array[i]<< " ";
  }
  cout<<endl;
}
 
void Merge(int arr[], int lo, int  mi, int hi){
    int *temp = new int[hi-lo+1];
    int i = lo, j = mi + 1;
    int k = 0;
    while(i <= mi && j <=hi){
        if(arr[i] <= arr[j])
            temp[k++] = arr[i++];
        else
            temp[k++] = arr[j++];
    }
    while(i <= mi)
        temp[k++] = arr[i++];
    while(j <= hi)
        temp[k++] = arr[j++];
    for(k = 0, i = lo; i <= hi; ++i, ++k)
        arr[i] = temp[k];
    delete []temp;
}

void MergeSort(int arr[], int lo, int hi){
    int mid;
    if(lo < hi){
        mid = (lo + hi) >> 1;
        MergeSort(arr, lo, mid);
        MergeSort(arr, mid+1, hi);
        Merge(arr, lo, mid, hi);
    }
}

void fungsiMerge(int arr[], int arr_size){
    MergeSort(arr, 0, arr_size-1);
}
 
int main() {
  int array[] = {-100, 322, 150, 395, 333, 68, 59, 156, 0, 4234,12,17,24,31,47,45,78,123,23,99};
  int n = sizeof(array)/sizeof(array[0]);
  title();
  
  cout<<"Sebelum Merge Sort :"<<endl;
  cetak(array, n); cout<<endl;
 
  fungsiMerge(array, n);
 
  cout<<"Hasil Merge Sort :" <<endl;
  cetak(array, n);
}


