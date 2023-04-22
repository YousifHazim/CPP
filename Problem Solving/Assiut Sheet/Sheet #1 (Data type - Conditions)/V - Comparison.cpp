#include <iostream>

using namespace std;

int main()
{
    int number1,number2;
    char operation;
    cin>>number1>>operation>>number2;

    if(operation == 62 & number1 > number2)
        cout<<"Right"<<endl;
    else if(operation == 60 & number1 > number2)
        cout<<"Wrong"<<endl;
    else if(operation == 60 & number1 < number2)
        cout<<"Right"<<endl;
    else if(operation == 62 & number1 < number2)
        cout<<"Wrong"<<endl;
    else if(operation == 61 & number1 == number2)
        cout<<"Right"<<endl;
    else if(operation == 61 & number1 != number2)
        cout<<"Wrong"<<endl;
    else
        cout<<"Wrong"<<endl;
    return 0;
}
