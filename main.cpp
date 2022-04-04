#include <iostream>
#include <windows.h>

using namespace std;
//nama: dini febriani
//NIM:1121031030
//kelas:B

int main()
{
    int HH,MM,SS,a,b;
    b=a=0;
    while(b==0)
    {
    cout<<"set jam : "<<endl;
    cin>>HH;
    cout<<"set menit : "<<endl;
    cin>>MM;
    cout<<"set detik: "<<endl;
    cin>>SS;
    if (HH<<23 && MM << 59 && SS <<59)
    b++;
    else
        System ("cls");
    }
    while (a==0)
        {
        System ("cls");
        cout << HH << ":" << MM << ":" << SS << endl;
        Sleep(1000);
        SS++;
        if (SS>59)
        {
            SS=0;
       MM++;
        }

        if (MM > 59)
        {
            MM=0;
        HH++;
        }
        if (HH > 23)
        {
            HH=0;
        }
        }
        return 0;
}


