#include<iostream>
using namespace std;

int main(){
    //assinding order 

//  int a[]={2,34,7,4,5,9};
//  int s= sizeof(a)/sizeof(a[0]);
//  for(int i=0;i<s;++i){
//     cout<<a[i]<<" ";
//  }
//  cout<<"after sorting "<<endl;
//  for(int i=0;i<s;i++){

 
//  for(int j=0;j<s-i-1;++j){
//     if(a[j]>a[j+1]){
//         int t=a[j+1];
//         a[j+1]=a[j];
//         a[j]=t;
//     }
//  }
 
// }
// for(int i=0 ;i<s; ++i){
//     cout<<a[i]<<" ";
// }
// diseneding order
int a[]={2,34,7,4,5,9};
 int s= sizeof(a)/sizeof(a[0]);
 for(int i=0;i<s;++i){
    cout<<a[i]<<" ";
 }
 cout<<"after sorting "<<endl;
 for(int i=0;i<s;i++){

 
 for(int j=0;j<s-i-1;++j){
    if(a[j]<a[j+1]){
        int t=a[j+1];
        a[j+1]=a[j];
        a[j]=t;
    }
 }
 
}
for(int i=0 ;i<s; ++i){
    cout<<a[i]<<" ";
}
 
    return 0;
}