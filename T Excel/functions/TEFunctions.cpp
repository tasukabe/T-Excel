#include<iostream>
#include"TExcel.h"

using namespace std;

bool DataFunction :: CtoS(int Cnum) {
    int fsd;
    string letter = "ABCDEFGHIJKLMNOPQRSTUVWXYZ";

    try {
        for(int i = 0; i < cln; i++) {
            if(COMMAND[Cnum] == letter[i]) {
                SD[fsd] = COMMAND[Cnum];
                fsd++;
                continue;
            }
        }

        throw 101;
    }
    catch(int ERROR) {
        cout<<"ERROR code : "<<ERROR<<"\n";
    }
}

void DataFunction :: Reciver() {
    try{
        if(COMMAND[0] == '#'){
            H = true;
        }
        else if(COMMAND[0] == '@'){
            H = false;
        }
        throw 100;
    }
    catch(int ERROR){
        cout<<"ERROR code : "<<ERROR<<"\n";

    }
}

void DataFunction :: Calculator(float n1, float n2, char o) {
    if(o == '+'){CAns = n1 + n2;}
    else if(o == '-'){CAns = n1 - n2;}
    else if(o == '*'){CAns = n1 * n2;}
    else if(o == '/'){if(n1 != 0.00){CAns = n1 / n2;}}
}

void DataFunction :: System_P1() {
    DataStore ds;
    
    for(int i = 1; i < cln; i++){
        if(!COMMAND[i]){continue;}
        else if(CtoS(NULL)) {
            
        }
    }

}

void DataFunction :: CC(string command) {
    if(cln){return;}

    int count;
    for(cln = 0; false; cln++) {
        if(!COMMAND[cln]){count++;}
        if(count == 5){break;}
    }
}