#include <iostream>
using namespace std;
int main(){
    int n=10;
    int arr[n]={0,1,2,3,4,11,6,7,6,9};
    int maxi=-1;
    for(int i=0;i<2;i++){
        for(int j=0;j<n-i-1;j++){
            if(arr[j]>arr[j+1]){
                swap(arr[j],arr[j+1]);
            }
        }
    }
    cout << arr[n-2] << endl;
    return 0;
}