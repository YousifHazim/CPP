#include <iostream>

using namespace std;

int main()
{
    char alpha;cin>>alpha;

    if(alpha >= 97 & alpha <= 122)
        cout<<(char)(alpha-32);
    else if(alpha >= 65 & alpha <= 90)
        cout<<(char)(alpha+32);

    return 0;
}
