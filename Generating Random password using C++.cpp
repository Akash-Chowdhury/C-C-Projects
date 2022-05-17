#include <iostream>
#include<cstdlib>
#include<ctime>
using namespace std;

const char arr[] = "0123456789!@#$%&abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ";
int length = sizeof(arr)-1;
int main()
{
    int n;
    cout<<"Enter the length of password:";
    cin>>n;
    srand(time(0));
    cout<<"Generated password is: ";
    for(int i = 0; i < n; i++)
    cout << arr[rand() % length];
    return 0;
}
