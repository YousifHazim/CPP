#include <iostream>

using namespace std;

int main()
{
    int numberOfelements;cin>>numberOfelements; 

    int arr[numberOfelements];
    long long sum=0;

    while(numberOfelements--){
        cin>>arr[numberOfelements];
        sum += arr[numberOfelements];
    }

    if(sum<0){
        cout<<-sum<<endl;
    }else{
        cout<<sum<<endl;
    }


    return 0;
}
