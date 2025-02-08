
#include<iostream>
using namespace std;
int main(){
int n,i;
cout<<"Enter number of elements you want to input:"<<endl;
cin>>n;
int arr[n];
for( i=0;i<n;i++){
    cout<<"enter elements:"<<i+1<<"="<<" ";
    cin>>arr[i];
}
cout<<"elements are:"<<endl;
for(i=0;i<n;i++){
    cout<<arr[i]<<endl;
}

    cout<<"reverse elements are:"<<endl;
for(i=n-1;i>=0;i--){
    cout<<arr[i]<<endl;
}
int first,second;
if(arr[0]>arr[1]){
    first=arr[0];
    second=arr[1];
}else{
    first=arr[1];
    second=arr[0];
}
for(i=2;i<n;i++){
    if(arr[i]>first){
        second=first;
        first=arr[i];
    }else if(arr[i]>second && arr[i]!=first){
        second=arr[i];
    }
}
cout<<"second largest number is:"<<second<<endl;
int third,fourth;
if(arr[0]<arr[1]){
    third=arr[0];
    fourth=arr[1];
}else{
    third=arr[1];
    fourth=arr[0];
}
for(i=2;i<n;i++){
    if(arr[i]<third){
        fourth=third;
        third=arr[i];
    }else if(arr[i]<fourth && arr[i]!=third){
        fourth=arr[i];
    }
}
cout<<"second smallest number is:"<<fourth<<endl;
return 0;
}