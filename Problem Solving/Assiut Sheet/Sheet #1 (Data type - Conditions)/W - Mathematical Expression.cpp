#include <iostream>

using namespace std;

int main()
{
    int number1,number2,number3;
    char operation,equalOperation;

    cin>>number1>>operation>>number2>>equalOperation>>number3;

    if(operation == 43 & number1+number2 == number3)
        cout<<"Yes"<<endl;
    else if(operation == 45 & number1-number2 == number3)
        cout<<"Yes"<<endl;
    else if(operation == 42 & number1*number2 == number3)
        cout<<"Yes"<<endl;
    else if(operation == 43)
        cout<<number1+number2<<endl;
    else if(operation == 45)
        cout<<number1-number2<<endl;
    else if(operation == 42)
        cout<<number1*number2<<endl;
    return 0;
}
