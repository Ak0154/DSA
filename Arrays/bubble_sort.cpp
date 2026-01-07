#include <iostream>
using namespace std;

void bubble_sort(int a[], int n){
    for(int i=0;i<n-1;i++){
        for(int j=0;j<n-i-1;j++){
            if(a[j]>a[j+1]){
                int temp=a[j];
                a[j]=a[j+1];
                a[j+1]=temp;
            }
        }  
    }
     
}

int main(){
    int a[5]={4,1,7,0,2};
    int n=sizeof(a)/sizeof(a[0]);
    bubble_sort(a,n);

    cout<<"Sorted array is: ";
    for(int i=0;i<n-1;i++){
        cout<<a[i]<<" ";
    }cout<<a[n];  
    return 0;
}