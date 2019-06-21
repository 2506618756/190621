#include <string>
#include <iostream>
#include <fstream>
using namespace std;
 
struct Referees
{
    string name;
    int grades[5];
}Referee[20];
 
int main()
{
    int n = 0;
    ifstream file("D:\information.txt", ios::in);
    if(!file.is_open())
    {
        cout << "Error: opening file fail" << endl;
        exit(1);
    }
    while(!file.eof() && n < 20)
    {
        file >> Referee[n].name >> Referee[n].age >> Referee[n].id;
        n++;
    }
 
    //test
    for (int i = 0; i < n; i++ )
        cout << "name:" << p[i].name << " age:" << p[i].age << " id:" << p[i].id << endl;
         
    in.close();
    return 0;
}

