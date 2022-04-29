#include <iostream>
using namespace std;
int main(){
    int n=11;
    int arr[n]={1,2,1,1,3,2,4,5,5,1,1};
    int arr1[10]={0};
    for(int i=0;i<n;i++){
        arr1[arr[i]]++;
    }
    for(int i=0;i<10;i++){
        if(arr1[i]>0){
            cout << i << " occurs: " << arr1[i] << " times" << endl;
        }
    }
    return 0;
}