#include <iostream>
using namespace std;
int main(){
    int arr[10]={1,2,1,4,5,5,2,1,1,3};
    int count=1;
    for(int i=0;i<10;i++){
        count=1;
        for(int j=i+1;j<10;j++){
            if(arr[i]==arr[j] && arr[j]!=-1){
                count++;
                arr[j]=-1;
            }
            
        }
        if(arr[i]!=-1){
            cout << arr[i] << " occurs: " << count << " times." << endl;
        } 
            
    }
    return 0;
}