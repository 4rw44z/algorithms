#include<iostream>
using namespace std;
int power(int x, int p) {
	if (p == 0) return 1;
	return power(x, p - 1) * x;
}




int main()
{
	int n, p;

	cin >> n >> p;
	int ans;
	ans = power(n, p);
	cout<< ans<< endl;
}