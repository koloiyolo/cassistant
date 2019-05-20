#include <iostream>
#include <string>
#include <cstdlib>
#include <fstream>

using namespace std;

int main()
{


    int whattodo;


    cout << "Hi, what can I do for you?" << endl;
    cout<<"U must run this app as a root"<< endl;
    cout <<"Avilable commands: install (1), update(2),remove(3) exit(4)!!!"<<endl;
    etykieta:
    cout<<"What to do?:";

    cin>> whattodo;
    if (whattodo== 2)
    {

    cout<<"Start Upgrading"<<endl;
    std::system("apt-get update");
    std::system("apt-get upgrade");
    std::system("apt-get install -f");
    std::system("apt autoremove");

    }
    if (whattodo==1)
    {string komenda="apt-get install ", apka;
    cout<<"What can i install for ya?\n";
    cin>>apka;
    komenda+= apka;
    ofstream command;
    command.open ("command.txt");
    command <<komenda;
    command.close();
    std::system("sh command.txt");
    std::system("rm command.txt");


    }
    if (whattodo==4)
    {
    cout<<"Thanks to KoloiYolo(Main Creator)"<<endl;
    cout<<"Pastebin: https://pastebin.com/YCHA2j52"<<endl;

    return 0;
    }
    if (whattodo==3)
     {string komenda="apt-get remove ", apka;
    cout<<"What can i uninstall for ya?\n";
    cin>>apka;
    komenda+= apka;
    ofstream command;
    command.open ("command.txt");
    command <<komenda;
    command.close();
    std::system("sh command.txt");
    std::system("rm command.txt");

    }
    cout<<"Maybe something else?"<<endl;


    goto etykieta;
    return 0;
}
