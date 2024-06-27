#include<iostream>
using namespace std;


int main(){
    int  a[]={4,45,6,8,9,50};
    int s=sizeof(a)/sizeof(a[0]);
    int i,j,max1,max2 ;
    max1= max2=0;
    for(i=0;i<s;++i)
    {
      cout<<a[i]<<" ";  
    }
    cout<<endl;
    for(j=0;j<s;++j){
        if(a[j]>max1){
            max2=max1;
            max1=a[j];
        }
        if(a[j]>max2 && a[j]<max1){
            max2=a[j];
        }

    }       cout<<"first highest "<<max1<<endl;
            cout<<"second highest "<<max2;

    return 0;
}