#include <iostream>

using namespace std;

int main()
{
    int number;cin>>number; // 10
    int counter =0;

    for(int i=1;i<=number;i++){ // 10

        if(i % 2 == 0){ // even only
            cout<<i<<endl;
            counter++;
        }

    }

    if(counter == 0 )
        cout<<-1<<endl;


    return 0;
}
