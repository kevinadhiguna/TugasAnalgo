/*
Anggota Kelompok (NPM)	: Kevin Akbar Adhiguna (55) , Yoga Prambudi S.P. (65)
Program 				: Mencari Minimum Spanning Tree dengan Algoritma Prim 
Tanggal					: 29 Mei 2019
*/
 
#include<stdio.h> 
#include<limits.h> 
#include<stdbool.h>  
#include<iostream>
using namespace std;
#define V 5 // Number of vertices in the graph
int minKey(int key[], bool mstSet[]) 
{ 
int min = INT_MAX, min_index; // Initialize min value  
for (int v = 0; v < V; v++) {
	printf("Checking Key... ");
	printf("v = %d mstSet = %d key = %d \n",v,mstSet[v],key[v]);
	if (mstSet[v] == false && key[v] < min){ 
		min = key[v], min_index = v;
		printf("%d added to min_index \n",v);
	}
}
return min_index; 
} 

int printMST(int parent[], int n, int graph[V][V]) { 
printf("Edge \tWeight\n"); 
for (int i = 1; i < V; i++) 
	printf("%d - %d \t%d \n", parent[i], i, graph[i][parent[i]]); 
} 

void primMST(int graph[V][V]) { 
	int parent[V]; 
	int key[V]; 
	bool mstSet[V]; 
	// Initialize all keys as INFINITE 
	for (int i = 0; i < V; i++) 
		key[i] = INT_MAX, mstSet[i] = false; 
	// Always include first 1st vertex in MST. 
	key[0] = 0;	 
	parent[0] = -1; // First node is always root of MST 
	// The MST will have V vertices 
	for (int count = 0; count < V-1; count++) { 
		int u = minKey(key, mstSet); 
		// Add the picked vertex to the MST Set 
		mstSet[u] = true; 
		printf("Node  %d-------------------\n",u);
		for (int v = 0; v < V; v++){
		printf("%d kesatu %d kedua %d ketiga \n",graph[u][v],!mstSet[v],graph[u][v] < key[v]);
		if (graph[u][v] && mstSet[v] == false && graph[u][v] < key[v]){
			parent[v] = u, key[v] = graph[u][v];
			printf("WARNING-------  %d added as child with key = %d \n",v,key[v]);
		}
	}
	}
	// print the constructed MST 
	printMST(parent, V, graph); 
} 

int main() 
{ 
/* Graph
		2   3 
	(0)--(1)--(2) 
	|    / \  | 
	6| 2/  \5 |7 
	|  /	\ | 
	(3)-------(4) 
			9		 */
int graph[V][V] = {{0, 2, 0, 6, 0}, 
					{2, 0, 3, 2, 5}, 
					{0, 3, 0, 0, 7}, 
					{6, 2, 0, 0, 9}, 
					{0, 5, 7, 9, 0}}; 
	// Print the solution 
	cout<<"\t\t[Program MST - Algoritma Prim]"<<endl; 
	cout<<"Nama (NPM) : Kevin Akbar Adhiguna (55) , Yoga Prambudi (65)"<<endl;
	cout<<endl;
	primMST(graph); 
	return 0; 
} 

