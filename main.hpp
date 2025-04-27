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
}

cout << "Enter the number of employees: ";
cin >> empl_num;
ofs << empl_num << endl;

cout << "Enter each Employee's ID, Name, Department, and Salary: \n";
for (int i = 0; i < empl_num; i++) {
    cin >> empl_ID >> e_name >> e_department >> salary;
    ofs << empl_ID << " " << e_name << " " << e_department << " " << salary << endl;
}

ofs.close();
return empl_num;