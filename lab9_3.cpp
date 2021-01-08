#include<iostream>
#include <cstdlib>
#include <fstream>
#include <cmath>
#include <iomanip>
using namespace std;

int main(){
    int count = 0;
    float sum = 0;
    float sumsd = 0;
    string a;
    ifstream source("score.txt");
    while(getline(source,a)){
        sum += atof(a.c_str());
        count++;
        sumsd += pow(atof(a.c_str()),2);
    }
    float mean = sum/count;
	float up = (sumsd/count)-pow(mean,2);
    cout << "Number of data = " << count <<"\n";
    cout <<setprecision(3); 
    cout << "Mean = " << mean << "\n";
    cout << "Standard deviation = " << sqrt(up); 
    
}
