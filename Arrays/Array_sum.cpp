#include <iostream>
using namespace std;

int main(){
    int a[5]={4,1,0,7,2};
    int n= sizeof(a)/sizeof(a[0]);
    int sum=0;

    for(int i=0;i<n;i++){
        sum+=
        a[i];
    }
    cout<<"Sum of array is: "<<sum;
    return 0;
}