#include <iostream>

using namespace std;

int main()
{
    int number;cin>>number;

    int newNumber = number / 1000;

    if(newNumber % 2 == 0)
        cout<<"EVEN"<<endl;
    else
        cout<<"ODD"<<endl;

    return 0;
}
