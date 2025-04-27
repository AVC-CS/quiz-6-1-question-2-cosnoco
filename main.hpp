#include <iostream>
#include <fstream>
#include <string>
using namespace std;

int writeFile(const string &filename);
int readFile(const string &filename);

int writeFile(const string &filename) {
  
    iofstream ofs(filename);
    if (ofs.fail()){
        cerr << "File Open Error\n";
        exit(0);
    }

    cout << "Enter number of employees: ";
    cin >> empl_num;
    ofs << empl_num << endl;

    file.close();
    return empCount;
}

int readFile(const string &filename) {
    ifstream file(filename);
    if (!file.is_open()) {
        cout << "Unable to open file for reading" << endl;
        return 0;
    }

    int empCount;
    file >> empCount;
    file.ignore(); // To skip newline after the count

    string line;
    for (int i = 0; i < empCount; ++i) {
        getline(file, line); // read employee lines but ignore contents
    }

    file.close();
    return empCount;
}