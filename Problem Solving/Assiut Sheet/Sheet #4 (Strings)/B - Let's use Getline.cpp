#include <iostream>

using namespace std;

int main()
{
    string line;getline(cin,line);

    for(int i=0;i<line.length();i++){
        if(line[i] != '\\')
            cout<<line[i];
        else
            break;
    }

    return 0;
}
