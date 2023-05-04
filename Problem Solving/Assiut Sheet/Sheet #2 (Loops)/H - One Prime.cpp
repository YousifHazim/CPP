#include <iostream>

using namespace std;

int main()
{
    int prime;cin>>prime; // 7
    int counter = 0;

    for(int i=2 ;i < prime ;i++){

        if( prime % i == 0 ) // (7 / 2 = 3.5) (
            counter++;

    }

    if(counter == 0)
        cout<<"YES"<<endl;
    else if(counter > 0)
        cout<<"NO"<<endl;

}
