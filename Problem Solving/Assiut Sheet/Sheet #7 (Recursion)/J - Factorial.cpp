#include <iostream>

using namespace std;

long long factorial(long long number);

int main()
{
    long long number;cin>>number;
    cout<<factorial(number)<<endl;
    return 0;
}


long long factorial(long long number){

    if( number == 1)
        return 1;
    return factorial(number-1)*number;
}
