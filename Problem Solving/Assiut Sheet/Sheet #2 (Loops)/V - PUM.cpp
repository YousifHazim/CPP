#include <iostream>

using namespace std;

int main()
{
    int number;cin>>number;

    int counter=1;

    for(int i=0;i<number;i++){

        cout<<counter<<" "<<++counter<<" "<<++counter<<" "<<"PUM"<<endl;

        counter = counter + 2;
    }
    return 0;
}
