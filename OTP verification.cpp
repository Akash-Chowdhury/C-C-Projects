#include<iostream>
#include<conio.h>
#include<time.h>
#include<windows.h>
#include<unistd.h>
using namespace std;

string OTPgeneration(int n)
{
    string str = "0123456789";
    int len = str.length();
    string otp;
    int j;
    srand(time(0));
    for (int i = 1; i <= n; i++)
    {
        int j = rand()%len;
        otp[i]=str[j];
    }
    
    for (int i = 1; i <= n; i++)
    {
        cout<<otp[i];
    }
    cout<<endl;
    cout<<"OTP will expire in 5 seconds.....\n"<<endl;
    sleep(5);
    cout<<"OOPS!! OTP is expired..\n"<<endl;
    int choice;
    cout<<"1. Generate new OTP."<<endl
        <<"2. EXIT.\n"<<endl;
    cin>>choice;
switch(choice)
    {
    case 1: system("CLS");
            cout<<"New OTP: ";
			cout<<OTPgeneration(n).c_str()<<endl;
            sleep(5);
            break;
    case 2: exit(0);
            break;
    }    
}

int main()
{
    int n;
    cout<<"Enter Length: ";
    cin>>n;
    OTPgeneration(n);
    return 0;
}
