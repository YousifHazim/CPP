#include <iostream>

using namespace std;

int main()
{
    int counter;cin>>counter; 
    int maxNumber=0;
    int i;
    for(i=1 ; i<=counter ; i++){

        int number; cin>>number;

        if( i == 1 ){
            maxNumber = number;
        }

        if( number > maxNumber){
            maxNumber = number;
        }
    }

    cout<<maxNumber<<endl;


    return 0;
}
