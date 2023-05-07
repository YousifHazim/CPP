#include <iostream>

using namespace std;

int main()
{

    int testCases;cin>>testCases;

    for(int i=0;i<testCases;i++){

        int number1,number2;
        cin>>number1>>number2;
        long long sum=0;


        if(number1>=number2)
            for(int i=number2+1;i<number1;i++){

                number2++;

                if(number2 % 2 != 0)
                sum += number2;


            }

        else if(number2>=number1)
            for(int i=number1+1;i<number2;i++){

                number1++;

                if(number1 % 2 != 0)
                sum += number1;


            }

        cout<<sum<<endl;


    }

}
