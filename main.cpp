#include <iostream>
#include <limits>
using namespace std;


int main()
{   int a,b,div,muL1,muL2,remd,bitmul_1,bitmul_2;

    cout<<endl<<"please input Your 1st Number between 32 to 127: ";
    cin>>a;

    while(cin.fail()||(a<32 ||a>127)) // Input checking, whether user input their data inbetween 32 to 127
    {   cin.clear();
        cin.ignore(100,'\n');
        cout<<endl<<"please input Your 1st Number between 32 to 127: ";
        cin>>a;

    }
    cout<<endl<<"please input Your 2nd Number between 32 to 127: ";
    cin>>b;
    while(cin.fail()||a<32 ||a>127) // Input checking, whether user input their data inbetween 32 to 127
    {   cin.clear();
        cin.ignore(100,'\n');
        cout<<endl<<"please input Your 2nd Number between 32 to 127: ";
        cin>>a;

    }

    char Num1=static_cast<char>(a);
    cout<<"the corresponding characters of "<<a<<" from the ASCII-table is :"<<Num1<<endl<<endl;

    char Num2=static_cast<char>(b);
    cout<<"the corresponding characters of "<<b<<" from the ASCII-table is :"<<Num2<<endl<<endl<<endl;

    muL1= a*2;
    muL2= b*2;
    div=a/b;
    remd=a%b;
    bitmul_1=(a<<1);
    bitmul_2=(b<<1);

    cout<<" Multiplication of (Number 1* 2) = "<<muL1<<endl<<endl;
    cout<<" Multiplication of (Number 2* 2) = "<<muL2<<endl<<endl;
    cout<<" Resul of division = "<<div<<endl<<endl;
    cout<<" Reminder of Number 1 / Number 2: "<<remd<<endl<<endl;
    cout<<" After bit shifting multiplication:"<<a<<"* 2: "<<bitmul_1<<endl<<endl;
    cout<<" After bit shifting multiplication:"<<b<<"* 2: "<<bitmul_2<<endl<<endl;
    cout<<" Result of division as real numbers is: "<< (static_cast<float>(a))/(static_cast<float>(b))<<endl<<endl;
}
