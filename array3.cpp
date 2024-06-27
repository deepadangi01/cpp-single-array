//arr={1,2,3,4,5} 2 is even number stored at index 1  ,,,4 is even number stored at index 3
#include<iostream>
using namespace std;

int main(){
    int arr[5]= {1,2,3,4,5};
    for(int i=0;i<5;i++){
        if(arr[i]%2==0){
            cout<<arr[i]<<" is even number stored at index "<<i<<endl;
        }
        else{
         cout<<arr[i]<<" is odd number stored at index "<<i<<endl;

        }
    }
    
    return 0;
}