#include<iostream>
using namespace std;

int main(){
    int arr[5];
    for(int i=0;i<5;++i){
        cin>>arr[i];
    }
    cout<<"store values ";
    for(int i=0;i<5;++i){
        cout<<arr[i]<<"\n";// pahale print fir break;

        if(arr[i]==8){
        //cout<<arr[i]<<"\n";// 
        //only print 8 fir  break;

            break;

        }
    //cout<<arr[i]<<"\n";// pahale break fir print;


        
    }
    // cout<<"store values ";
    // for(int i=0;i<5;++i){
    //     if(i==2){
    //         continue;

    //     }
    // cout<<arr[i]<<"\n";

        
    // }
    return 0;
}