#include <iostream>
using namespace std;

int main(){
    int a[10]={0,8,55,0,7,45,0,0,66,98};
    int n=sizeof(a)/sizeof(a[0]);
    int index=0;

    for(int i=0;i<n;i++){
        if(a[i]!=0){
            a[index]=a[i];
            index++;
        }
    }
    for(int i=index;i<n;i++){
        a[i]=0;
    }
    for(int i=0;i<n;i++){
        cout<<a[i]<<" ";
    }
    return 0;
}