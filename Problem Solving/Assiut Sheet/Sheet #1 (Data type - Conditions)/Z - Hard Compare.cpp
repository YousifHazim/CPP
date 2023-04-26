#include <iostream>
#include <math.h>

using namespace std;

int main()
{
    double num1,num2,num3,num4;cin>>num1>>num2>>num3>>num4;

    double result1 = num2*log(num1);
    double result2 = num4*log(num3);

    if(result1 > result2){
        cout<<"YES"<<endl;
    }
    else
    {
        cout<<"NO"<<endl;
    }

    return 0;
}
