#include<iostream>
using namespace std;

int main(){
    int arr[5]{23,5,30,20,78};
    cout<<arr[3];
     int size=sizeof(arr);
        size=sizeof(arr)/sizeof(arr[0]);
     cout<<size;
    //cout<<arr[12]; unhealthy coding
    //showing some grabge value ,compiler calculate the memory address given by u.and show some garbage
    //value 
    //undefine behaviour -->terminate/garbage;
    //depended array size of decialy of inizeage value
    
    return 0;
}