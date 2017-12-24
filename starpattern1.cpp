#include<iostream>
using namespace std;
void printChar(int n, char c){
	for(int i= 0; i<n; ++i){
		cout<<c;
	}
}
void printpattern(int N){
	int incN = N/2 +1;
	int decN = N/2;
	for (int curLine= 1; curLine < incN ; ++curLine)
	{
		printChar(incN - curLine, ' ');
		printChar(2 * curLine - 1, '*');
		cout<<endl;
	}
	for(int curLine = decN; curLine>0; --curLine){
		printChar(decN+1 - curLine, ' ');
		printChar(2 * curLine - 1, '*');
	}
}
int main()
{ int n;
	cin>> n;
	printpattern(n);

}