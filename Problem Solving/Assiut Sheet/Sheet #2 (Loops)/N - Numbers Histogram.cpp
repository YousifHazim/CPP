#include <iostream>

using namespace std;

int main()
{
    char histogram;
    int tnumber;
    cin>>histogram>>tnumber;

    for(int i=0;i<tnumber;i++){

        int number;cin>>number;

        while(number){
            cout<<histogram;
            number--;
        }

        cout<<endl;

    }
    return 0;
}
