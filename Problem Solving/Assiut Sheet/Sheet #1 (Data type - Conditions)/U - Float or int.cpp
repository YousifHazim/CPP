#include <iostream>

using namespace std;

int main()
{
    float number;cin>>number; // 534.958

    int intNumber = number; // 534

    float floatNumber = number - intNumber; // 0.958

    if(floatNumber == 0)
        cout<<"int "<<intNumber<<endl; // int 534
    else
        cout<<"float "<<intNumber<<" "<<floatNumber<<endl; // float 534 0.958




    return 0;
}
