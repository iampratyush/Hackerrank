#include <iostream>
using namespace std;
int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    int arrLength;
    scanf("%d",&arrLength);
    int arr[arrLength];
    for(int i=0;i<arrLength;i++){
        scanf("%d",&arr[i]);
    }

    for(int i=arrLength-1;i>=0;i--){
        printf("%d ",arr[i]);
    }
    return 0;
}
