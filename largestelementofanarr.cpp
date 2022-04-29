#include <iostream>
using namespace std;
int main(){
    int maxi=-1;
    int arr[10]={1,4,5,9,3,7,8,6,2,0};
    for(int i=0;i<10;i++){
        if(maxi<arr[i]){
            maxi=arr[i];
        }
    }
    cout << maxi << endl;
    return 0;
}