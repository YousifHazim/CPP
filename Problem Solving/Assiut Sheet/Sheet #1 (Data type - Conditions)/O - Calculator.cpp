#include <iostream>

using namespace std;

int main()
{
    int num1,num2;
    char operation;

    cin>>num1>>operation>>num2;

    if(operation == 43)
        cout<<num1+num2<<endl;
    else if(operation == 42)
        cout<<num1*num2<<endl;
    else if(operation == 45)
        cout<<num1-num2<<endl;
    else
        cout<<num1/num2<<endl;

    return 0;
}
