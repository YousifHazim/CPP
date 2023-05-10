#include <iostream>

using namespace std;

int main()
{
    int testcases;cin>>testcases; // 5
    int counter = 0;
    char timur[10];
    char codeforce[10] = {'c','o','d','e','f','o','r','c','e','s'};

    while(testcases){

        for(int i=0;i<10;i++){

            cin>>timur[i];

        }

        // codeforces

        for(int i=0;i<10;i++){

            if(timur[i] != codeforce[i])
                counter++;

        }
            cout<<counter<<endl;
            counter = 0;
            testcases--;
    }
    return 0;
}
