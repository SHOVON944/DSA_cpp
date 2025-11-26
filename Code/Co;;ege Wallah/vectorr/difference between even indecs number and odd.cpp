#include<iostream>
#include<vector>
using namespace std;

int main()
{
    int arr[]={1,2,3,4,5,6};
    int sum = 0;
    for(int i=0; i<6; i++){
        if(i%2==0){
            sum+=arr[i];
        } else{
            sum-=arr[i];
        }
    }
    cout<<sum;
    return 0;
}