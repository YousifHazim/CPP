#include <iostream>

using namespace std;

int main()
{
    string name1;cin>>name1;
    string name2;cin>>name2;
    char firstCharName1 = name1[0];

    cout<<name1.length()<<" "<<name2.length()<<endl;
    cout<<name1+name2<<endl;

    name1[0] = name2[0];
    name2[0] = firstCharName1;

    cout<<name1<<" "<<name2<<endl;

    return 0;
}
