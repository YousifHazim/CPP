#include <iostream>

using namespace std;

int main()
{
    string numberString;cin>>numberString;
    int sum = 0;

    for(int i=0;i<numberString.length();i++){

        sum += (numberString[i] - 48);

    }

    cout<<sum<<endl;


    return 0;
}
