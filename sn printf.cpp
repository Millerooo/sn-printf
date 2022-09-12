#include <iostream>
#include <fstream>
#include <stdio.h>
#include <cstdlib>
#include <conio.h>
using namespace std;

int main(int argc, char** argv)
{
 ifstream file; 
 ofstream fileOut; 
 char napis[50];
 int litry,jakosc;
 float cena;
 file.open("zapis.txt"); 
 fileOut.open("wynik.txt");

 if(file.good()) 
     while(!file.eof())     
     {
    		file >> litry >> cena >> jakosc;
			snprintf(napis, 50, "Ile: %d cena %2.lf jakosc: %x", litry, cena, jakosc);
			fileOut << napis << endl;
		}
     
 fileOut<< "wyniki:" << fileOut <<endl; 
 file.close();
 fileOut.close();
 return 0;
}
