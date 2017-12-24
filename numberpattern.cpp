#include<iostream>
using namespace std;
void printPattern(int N){
	int val =  1;
	for (int curLine = 1; curLine <= N; ++curLine){
		for( int ithval =1; ithval <=curLine; ++ithval){
			cout<<val<<" ";
			++val;
		} cout<<endl;
	} 
}
int main()
{
	int N;
	cin>>N;
	printPattern(N);
}