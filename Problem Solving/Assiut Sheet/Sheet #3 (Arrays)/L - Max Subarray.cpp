#include <iostream>

using namespace std;

int main()
{
    int testcases;cin>>testcases;

    while(testcases--){

        int numberOfElements;cin>>numberOfElements;
        int arr[numberOfElements];

        /* first case */
        for(int i=0;i<numberOfElements;i++){
            cin>>arr[i];
            cout<<arr[i]<<" ";
        }

        int maxNumber;
        int i = 0 , x = 0;

        while(1){

            if(x == numberOfElements-1)
                break;

            /* first input */
            if(i == x){
                maxNumber = max(arr[i] , arr[i+1]);
            }
            /* non first input */
            else {
                maxNumber = max(maxNumber , arr[i+1]);
            }

            cout<<maxNumber<<" ";
            i++;

            if( i == numberOfElements-1){ // final element array
                x++;
                i = x;
            }
        }
        cout<<endl;
    }
    return 0;
}
