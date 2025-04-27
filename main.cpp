#include <iostream>
#include <fstream>
#include <string>
#include "main.hpp"
using namespace std;

int writeFile(const string& filename) {
    ofstream ofs(filename);
    if (ofs.fail()) {
        cerr << "File Open Error\n";
        exit(0);
    }

    int empl_num;
    int empl_ID;
    string e_name, e_department;
    double salary;

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
}

int readFile(const string& filename) {
    ifstream ifs(filename);
    if (ifs.fail()) {
        cerr << "File Open Error\n";
        exit(0);
    }

    int empl_num;
    int empl_ID;
    string e_name, e_department;
    double salary;

    ifs >> empl_num;
    cout << empl_num << endl;

    for (int i = 0; i < empl_num; i++) {
        ifs >> empl_ID >> e_name >> e_department >> salary;
        if (ifs.fail()) {
            cerr << "File Read Error\n";
            exit(0);
        }
        cout << empl_ID << " " << e_name << " " << e_department << " " << (int)salary << endl;
    }

    ifs.close();
    return empl_num;
}

int main() {
    string filename = "employee.txt";

    readFile(filename);

    return 0;
}