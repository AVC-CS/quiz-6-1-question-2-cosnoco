#include <iostream>
#include <fstream>
#include <iomanip>
#include <string>
using namespace std;

int writeFile(const string& filename);
int readFile(const string& filename);

int writeFile(const string& filename){
    int empl_num;
    string e_name, e_department;
    int empl_ID;
    double salary;
    
    ofstream ofs(filename);
    if (ofs.fail()){
        cerr << "File Open Error\n";
        exit(0);
    }