#include<iostream>
using namespace std;

//Write a program to reverse an array
void revArr(){
    int arr[]={1,2,3,4,5,6};
    int size=6;
    int mid=size/2;
    int n=size;
    for(int i=0;i<mid;i++){
        int temp;
        temp=arr[i];
        arr[i]=arr[n-1];
        arr[n-1]=temp;
        n--;
    }
    for(int i=0;i<size;i++){
        cout << arr[i] << " ";
    }

}

int main(){
    revArr();
    return 0;
}