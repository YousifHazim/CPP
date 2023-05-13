#include <iostream>

using namespace std;

int main()
{
    int numberOfElements;cin>>numberOfElements; 
    int arr[numberOfElements];
    int minNumber,indexMin=0;
    int maxNumber,indexMax=0;

    for(int i=0;i<numberOfElements;i++){
        cin>>arr[i];

        if( arr[i] < minNumber )
        {
            minNumber = arr[i];
            indexMin = i;
        }

        if(arr[i] > maxNumber)
        {
            maxNumber = arr[i];
            indexMax = i;
        }

        if(i == 0){
            minNumber = maxNumber = arr[i];
        }
    }

    arr[indexMin] = maxNumber;
    arr[indexMax] = minNumber;

    for(int i=0;i<numberOfElements;i++){
        cout<<arr[i]<<" ";
    }

    return 0;
}
