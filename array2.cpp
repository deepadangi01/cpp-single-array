#include<iostream>
using namespace std;

int main(){
    int n,e=0,o=0,count_p=0,count_n=0;
    double avg,sum=0;
    cout<<"enter size of array";
    cin>>n;
    int arr[n];
    int high=0;
    int se_h=0;
    for(int i=0; i<n;i++){//i=0 i=1 i=2 i=3

        cout<<"enter number of index "<<i<<":";
        cin>>arr[i]; //23 90 98 46 ;
        if(arr[i]>high){
        high=arr[i];


        }


        
    } 

     cout<<"hight value of array"<<high<<endl;
     cout<<"second hight value of array"<<se_h<<endl;


        //  if(arr[i]>0){
        //     count_p++;
        // }
        // else{
        //     count_n++;
        // }
       
        // if(arr[i]%2==0){
        //     e=e+arr[i];
        // }
        // else{
        //     o=o+arr[i];
        // }
        // sum=sum+arr[i];


    
    // avg=sum/(float)n;
    // cout<<" sum of all opration:"<<endl;
    // cout<<"sum :"<<sum<<endl;
    // cout<<"sum of even number :"<<e<<endl;
    // cout<<"sum of odd number : "<<o<<endl;
    // cout<<" avg of all number:"<<avg<<endl;
    // cout<<" count of positive number: "<<count_p<<endl;
    // cout<<" count of nagtive number: "<<count_n<<endl;


   


    // for(int i=0;i<n;i++){
    //     cout<<"number at index :"<<i<<":"<<arr[i]<<endl;

    // }
    // cout<<"reverse a:"<<endl;
    // for(int i=n-1;i>=0;i--){
    //     cout<<"number at index :"<<i<<":"<<arr[i]<<endl;
    //     }
  

    
    return 0;
}

