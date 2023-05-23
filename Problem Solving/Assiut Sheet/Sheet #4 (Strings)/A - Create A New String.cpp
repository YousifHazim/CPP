#include <iostream>

using namespace std;

int main()
{
    string one;cin>>one; // LEVEL -> 5
    string two;cin>>two; // ONE -> 3
    int counter = 0;

    for(int i=0;i<one.length();i++){
        if(one[i] != '/')
            counter++;
        else
            break;
    }
    cout<<counter<<" ";
    counter = 0;

    for(int i=0;i<two.length();i++){
        if(one[i] != '/')
            counter++;
        else
            break;
    }
    cout<<counter<<endl;

    cout<<one<<" "<<two<<endl;
    return 0;
}
