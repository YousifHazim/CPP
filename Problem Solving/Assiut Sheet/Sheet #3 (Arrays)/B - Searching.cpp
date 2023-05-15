#include <iostream>

using namespace std;

int main()
{
    int numberOfElements;cin>>numberOfElements;
    int arr[numberOfElements];
    int NumberIndex,flag=0;

    for(int i=0;i<numberOfElements;i++){
        cin>>arr[i];
    }

    cin>>NumberIndex;

    for(int i=0;i<numberOfElements;i++){

        if(arr[i] == NumberIndex){
            cout<<i<<endl;
            flag++;
            break;
        }
    }

    if(flag == 0){
        cout<<-1<<endl;
    }

    return 0;
}
