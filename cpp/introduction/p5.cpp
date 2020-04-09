#include <iostream>
#include <cstdio>
#include <bits/stdc++.h>
using namespace std;

int main() {
    // Complete the code.
    int startNum;
    int endNum;
    string num[9]={"one","two","three","four","five","six","seven","eight","nine"};
    scanf("%d",&startNum);
    scanf("%d",&endNum);   

for(int i=startNum;i<=endNum;i++){
    if(i<=9){
        cout << num[i-1] << "\n"; 
    }
    else{
        if(i%2==0){
            printf("even\n");
        }
        else{
            printf("odd\n");
        }
    }
    }
    return 0;
}
