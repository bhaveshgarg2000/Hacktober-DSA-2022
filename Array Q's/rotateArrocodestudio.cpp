#include <iostream>
using namespace std;

int main() {
    int size;
    cin>>size;
    int arr[size];
    for(int i = 0;i<size;i++){
        cin>>arr[i];
    }
    int steps;
    cin>>steps;
    for(int i = steps;i<size;i++){
        cout<<arr[i]<<" ";
    }
    for(int i = 0;i<steps;i++){
        cout<<arr[i]<<" ";
    }
    return 0;
}