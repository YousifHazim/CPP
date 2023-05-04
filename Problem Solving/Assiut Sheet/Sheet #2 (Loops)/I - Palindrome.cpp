#include<bits/stdc++.h>

using namespace std;

int main()
{
    string number;cin>>number;
    string checkNumber = number;

    reverse(number.begin() , number.end());
    number.erase(0, number.find_first_not_of('0'));
    cout<< number <<endl;

    if(checkNumber == number)
        cout<<"YES"<<endl;
    else if(checkNumber != number)
        cout<<"NO"<<endl;

    return 0;
}
