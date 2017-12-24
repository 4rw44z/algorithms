#include<iostream>
using namespace std;
void strtoint(string str){
	int n = stoi(str);
	cout<< n;
}
int main(){
	int N;
	string str;
	cin>>str;
	strtoint(str);

}