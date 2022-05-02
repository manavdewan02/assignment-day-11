#include <iostream>
using namespace std;
int main(){
    int n=11;
    int maxi=INT_MIN;
    int arr[n]={1,2,1,1,3,2,4,5,5,1,1};
    for(int i=0;i<n;i++){
        maxi=max(maxi,arr[i]);
    }
    int arr1[maxi+1]={0};
    for(int i=0;i<n;i++){
        arr1[arr[i]]++;
    }
    for(int i=0;i<maxi+1;i++){
        if(arr1[i]>0){
            cout << i << " occurs: " << arr1[i] << " times" << endl;
        }
    }
    return 0;
}
