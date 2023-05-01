#include <iostream>

using namespace std;

int main()
{
    int counter;cin>>counter;
    long long finalNumber=1;

    for(int i=0;i<counter;i++){

        int number;cin>>number; // 5

        for(int j=1;j<=number;j++){ // from 1 -> 5
            finalNumber *= j; // final number = final number * 1
        }

        cout<<finalNumber<<endl;
        finalNumber = 1;
    }


    return 0;
}
