#include <iostream>
#include <math.h>

using namespace std;

int main()
{
    int testCases;cin>>testCases;

    for(int i=0;i<testCases;i++){

        int powNumber = 0;
        int decNumber = 0;
        int number;cin>>number;

        while(number != 0){

            if(number % 2 == 1){
                decNumber += 1 * pow(2 , powNumber);
                powNumber++;
            }

        number = number / 2;

        }

        cout<<decNumber<<endl;
    }
    return 0;
}
