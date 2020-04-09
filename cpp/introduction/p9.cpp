#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */ 
    int **ptr,n=0/*store count of array*/,q=0/*store number of queries*/;
    cin>>n>>q;
    ptr = new int *[n];
    for(int i = 0;i<n;i++){
    int arrLength = 0;
        cin>>arrLength;
        ptr[i] = new int [arrLength];
        for(int j = 0;j<arrLength;j++){
            cin >> ptr[i][j];
        }
    }

    for(int k=0;k<q;k++){
        int arrIndex=0; //array index 
        int elIndex=0; //array element index
        cin>>arrIndex>>elIndex;
        cout<<ptr[arrIndex][elIndex]<<"\n";
    }
    delete[] ptr; //realease memory
    return 0;  
}
