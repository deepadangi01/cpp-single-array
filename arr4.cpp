#include<iostream>
using namespace std;

int main(){
    int i, pos;
    int arr[]={8,5,6,2,9};
    int s=sizeof(arr)/sizeof(arr[0]);
    for(i=0;i<s;++i){
        cout<<arr[i]<<" ";

    }
    cout<<"enter the position to delete the value"<<endl;
    cin>>pos;
    if(pos<0 ||pos>s){
        cout<<"invaild position";
    }
    else{
        for(i=pos;i<s-1;++i){
            arr[i]=arr[i+1];
        }
        s--;
        for(i=0;i<s;++i){
            cout<<arr[i]<<" ";
        }
    }
    
    
    return 0;
}