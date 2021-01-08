#include<iostream>
#include<fstream>
#include<string>
using namespace std;

int main (){
	ifstream source;
	ofstream dest;
	source.open("cheerbook.txt");
	dest.open("cheerbook_copy.txt");
	
 
    string a;
	getline(source, a);
	dest <<"-------------------- BOOM ---------------------\n"<<a<<"\n";
	getline(source, a);
	dest<<a<<"\n";
	getline(source, a);
	dest<<a<<"\n";
	getline(source, a);
	dest<<a<<"\n";
	getline(source, a);
	dest<<a<<"\n";
	getline(source, a);
	dest<<a<<"\n";
	getline(source, a);
	dest<<a<<"\n";
	getline(source, a);
	dest<<a<<"\n";
	getline(source, a);
	dest<<a<<"\n";
	dest<< "-------------------- HA!! ---------------------";


    source.close();
    dest.close();
	return 0;
}
