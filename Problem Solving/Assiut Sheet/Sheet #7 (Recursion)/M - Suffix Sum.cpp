#include <iostream>
long long suffixSum(long long arr[]);
using namespace std;
int sizeArray;
int suffixNumber;
int counter = 0;
int main()
{
    cin>>sizeArray;
    cin>>suffixNumber;
    long long arr[sizeArray];
    for(int i=0;i<sizeArray;i++){
        cin>>arr[i];
    }
    cout<<suffixSum(arr);


    return 0;
}

long long suffixSum(long long arr[]){

    if(counter == suffixNumber )
        return 0;

    counter++;
    return arr[--sizeArray] + suffixSum(arr);
}
