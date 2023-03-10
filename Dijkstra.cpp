#include <iostream>
using namespace std;
#include "Dijkstra.h"

Dijkstra::Dijkstra()
{
    return;
}

void Dijkstra::readFile(ifstream &file)
{
    string s;
    while(!file.eof()){
        getline(file,s);
        cout<<s<<endl;
    }

}
