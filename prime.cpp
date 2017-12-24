#include<iostream>
using namespace std;
void printprime(int N);

int main(){

	int N;
	cin>>N;
	printprime(N);
}
bool./ isprime(int n){
	int div = 2;
	while(div<n) {
		if (n % div == 0){
			return false;

		} ++div;


	}return true;

}
void printprime(int N){
	for (int curnum = 2; curnum<N; ++curnum)
	{
		if(isprime(curnum)== true){
			cout<< curnum<< endl;
		}


	}
}