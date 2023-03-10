#include <iostream>
#include <fstream>
using namespace std;
#include "Dijkstra.h"

int main(){
   
   //cout<<"jello"<<endl;
    ifstream filename("data.txt");
    
    if(!filename){
        cout<<"File not in file."<<endl;
        return 0;
    }

    
    Dijkstra myDijkstra;
    myDijkstra.readFile(filename);


   return 0;
}