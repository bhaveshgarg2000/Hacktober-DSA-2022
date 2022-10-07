#include<iostream>
using namespace std;

int sumArr(int arr[],int s){
    int sum = 0;
    for(int i=0;i<s;i++){
        cin>>arr[i];
        sum  = sum + arr[i];
    }
    return sum;
}


int main(){

    int size ;
    cout<<"Enter the size of an Array : ";
    cin>>size;

    int arr[100];

    cout<<"Sum : "<<sumArr(arr,5)<<endl;



    return 0;
}