#include<fstream>
#include<iostream>
#include<string.h>
using namespace std;

int main()
{
    ifstream file1;
    ofstream file2;
    file1.open("file1.txt", ios::app);
    file2.open("file2.txt", ios::trunc | ios::app);
    string a;

    while(getline(file1, a))                                        
    {
        file2<<a<<endl;
    }

    file1.close();
    file2.close();
return 0;
}

