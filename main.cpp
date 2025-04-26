#include "main.hpp"


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

int readFile(const string& filename)
{
    int empl_num;
    int empl_ID;
    string e_name, e_department;
    double salary;
    double total = 0.0, avg = 0.0;

    ifstream ifs(filename);
    if (ifs.fail()) {
        cerr << "File Open Error\n";
        exit(0);
    }

    ifs >> empl_num;
    cout << "Number of employees: " << empl_num << endl;
    cout << "ID\t\tName\t\tDepartment\t\tSalary" << endl;

    for (int i = 0; i < empl_num; i++) {
        ifs >> empl_ID >> e_name >> e_department >> salary;
        if (ifs.fail()) {
            cerr << "File Read Error\n";
            exit(0);
        }
        cout << empl_ID << "\t" << e_name << "\t\t" << e_department << "\t\t" << salary << endl;
        total += salary;
    }

    if (empl_num > 0) {
        avg = total / empl_num;
    }

    cout << "\tTotal: " << total << "\tAverage: " << avg << endl;

    ifs.close();
    return empl_num;
}

// Then main() at the bottom

int main()
{
    string filename;
    int empN;

    filename = "employee.txt";
    empN = writeFile(filename);
    cout << "File created with " << empN << " employee records\n";

    empN = readFile(filename);
    cout << "The total number of employess read " << empN << endl;
}

int readFile(const string& filename)
{
    
}