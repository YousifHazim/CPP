#include <iostream>

using namespace std;

int main()
{
    string conversion;cin>>conversion;

    for(int i=0;i<conversion.length();i++){

        if(conversion[i] == 44)
            conversion[i] = 32;

        if(conversion[i] >= 97  && conversion[i] <= 122){
            conversion[i] -= 32;
            continue;
        }

        if(conversion[i] >= 65 && conversion[i] <= 90)
            conversion[i] += 32;


    }

    cout<<conversion;
    return 0;
}
