#include<iostream>
using namespace std;
void printstar(int n){
	for(int i =0; i<n; ++i){
		cout<<"*";
	}
}
void printpattern(int n){
	for (int currRow = 1; currRow < n; ++currRow){
		printstar(currRow);
		cout<<" ";
		int nstar= n + 1 - currRow;
		printstar(nstar);
		cout<<" ";
		printstar(nstar);
		cout<<" ";
		printstar(currRow);
		cout<<endl;

	}
}
int main()
{
	int N;
	cin>>N;
	printpattern(N);
}