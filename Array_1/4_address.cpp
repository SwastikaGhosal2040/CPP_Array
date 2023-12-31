#include<iostream>
using namespace std;
int main()
{
    int arr[5];
    cout<<arr<<endl;//0x61fefc//address of array
    cout<<&arr[0]<<endl;//0x61fefc//address of array
    cout<<&arr[0]<<endl;//0x61fefc//address of 1st element
    //address of array always the address of 1st element's 1st byte
    cout<<&arr[1]<<endl;//0x61ff00
    cout<<&arr[2]<<endl;//0x61ff04
    cout<<&arr[3]<<endl;//0x61ff08
    cout<<&arr[4]<<endl;//0x61ff0c

    //0 1 2 3 4 5 6 7 8 9 a b c d e f

}