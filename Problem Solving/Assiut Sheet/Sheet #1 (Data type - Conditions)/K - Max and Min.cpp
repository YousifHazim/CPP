#include <iostream>

using namespace std;

int main()
{
    long long num1,num2,num3;cin>>num1>>num2>>num3;

    if(num1>num2 & num1>num3){
            if(num2>num3)
                cout<<num3<<" "<<num1<<endl;
            else
                cout<<num2<<" "<<num1<<endl;
    }

    else if(num2>num1 & num2>num3){
            if(num1>num3)
                cout<<num3<<" "<<num2<<endl;
            else
                cout<<num1<<" "<<num2<<endl;
    }

    else if(num3>num2 & num3>num1){
            if(num2>num1)
                cout<<num1<<" "<<num3<<endl;
            else
                cout<<num2<<" "<<num3<<endl;
    }

    else if(num1 == num2 & num3 > num1)
        cout<<num1<<" "<<num3<<endl;

    else if(num1 == num2 & num1 > num3)
        cout<<num3<<" "<<num1<<endl;


    else if(num3 == num2 & num3 > num1)
        cout<<num1<<" "<<num3<<endl;

    else if(num3 == num2 & num1 > num3)
        cout<<num3<<" "<<num1<<endl;


    else if(num1 == num3 & num2 > num1)
        cout<<num1<<" "<<num2<<endl;

    else if(num1 == num3 & num3 > num2)
        cout<<num2<<" "<<num3<<endl;

    else if( num1 == num2 & num1 == num3)
        cout<<num1<<" "<<num1<<endl;



    return 0;
}
