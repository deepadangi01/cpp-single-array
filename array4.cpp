
#include<iostream>
using namespace std;

int main(){
    //single dimension array
    // int d[9];//declaration
    // d[0]=6;
    // d[1]=56;
    // d[2]=67;

    // int a[4]={8,4,98,6};//decaration with initialization
    // int k[]={9,7,54,6,7,9,10,80};//automatic taken size

    // int s=sizeof(k)/sizeof(k[0]);
    //  cout<<s;


    // for(int i=0;i<s; i++){
    //     cout<<k[i]<<endl;
   // }
    // for(int i=0;i<4; i++){
    //     cout<<a[i]<< " ";
    // }
    int k[5];
    cout<<" enter the value of an array\n";
    for(int i=0;i<5;i++){
        cin>>k[i];
    }

    for(int i=0;i<5;i++){
        if(k[i]==0){
        cout<<k[i]<<endl;

        }
    }
    
    return 0;
}