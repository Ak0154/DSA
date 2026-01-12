#include <iostream>
#include <climits>
using namespace std;

int main() {
int a[5]={4,1,0,7,2};
int n=sizeof(a)/sizeof(a[0]);

int king=INT_MIN;
int queen=INT_MIN;

for(int i=0 ; i<n; i++){
    if(a[i]>king){
        queen=king;
        king=a[i];
    }
        
    else if(a[i]>queen && a[i]!=king){
        queen=a[i];
    }

}
cout<<"2nd largest element: "<<queen;
return 0;
}