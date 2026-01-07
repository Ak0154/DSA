#include <iostream>
using namespace std;

int main(){
    int a[5]={4,1,-6,7,2};
    int n=sizeof(a)/sizeof(a[0]);

    int max=a[0];
    int min=a[0];

    for (int i=0;i<n;i++){
        if (a[i]>max){
            max=a[i];

        }
        if(a[i]<min){
            min=a[i];
        }
    }
    cout<<"Max Element: "<<max;
    cout<<"\nMin Element: "<<min;

    return 0;
}