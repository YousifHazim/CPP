#include <iostream>

using namespace std;

int main()
{
        int number1,number2;

    while(cin>>number1>>number2){

        long long sum=0;

        if(number1 <= 0 || number2 <=0)
                return 0;
        else if(number1>=number2)
            for(int i=number2;i<=number1;i++){
                cout<<number2<<" ";
                sum += number2;
                number2++;
            }
        else if(number2>=number1)
            for(int i=number1;i<=number2;i++){
                cout<<number1<<" ";
                sum += number1;
                number1++;
            }

        cout<<"sum ="<<sum<<endl;

    }

}
