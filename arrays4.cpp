#include<iostream>
using namespace std;


// Reversing an array using two pointer approach
void revarr(){
    int arr[]={1,2,3,4,5,6};
    int size=6;
    int start=0;
    int end=size-1;
    while(start<end){
        swap(arr[start],arr[end]);
        start++;
        end--;
    }
    for(int i=0;i<size;i++){
        cout << arr[i] << " ";
    }
}

int main(){
    revarr();
    return 0;
}