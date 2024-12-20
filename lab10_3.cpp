#include<iostream>
#include<iomanip>
#include<string>
#include<cmath>
#include<fstream>
using namespace std;

int main(){
    ifstream source;
	source.open("score.txt") ;
    string count;
    int i;
    float Avg,SD;
    while(getline(source,count)){
        i++;
       Avg += atof(count.c_str());
        SD +=  atof(count.c_str())*atof(count.c_str());
    }

    SD = sqrt((SD/i)-(Avg/i)*(Avg/i));
    cout << "Number of data = " << i << "\n";
    cout << setprecision(3);
    cout << "Mean = " << Avg/i << "\n";
    cout << "Standard deviation = " << SD;
}