#include <iostream>
using namespace std;
void printValues(int Startval, int nval){
    for (int ithval = 1; ithval <= nval; ++ithval){
        cout<< Startval;
        Startval = 1- Startval;
        
    }
}
void togglepattern(int n){
    for(int curRow = 1; curRow<=n; ++curRow){
        int startval = (curRow % 2 == 1)? 1 : 0;
        printValues(startval, curRow);
        cout<<endl;
    }
}

int main() {
    int N;
    cin>>N;
    togglepattern(N);
    cout<<"	";
    }
