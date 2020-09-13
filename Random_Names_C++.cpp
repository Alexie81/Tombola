#include <iostream>
#include <fstream>
#include <cstdlib>
#include <ctime>
#include <vector>

using namespace std;

ifstream in("Names.txt");
ofstream out("Names.copy console.txt");

int main() {


    srand(time(NULL));
    vector<string> v;
    string nume;
    while (in >> nume) {
        v.push_back(nume);
    }
    string x = v[rand() % v.size()];
    cout << endl;
    cout << endl;
    cout << "\t\t\t\t\t|------------------------------|" << endl;
    cout << "\t\t\t\t\t|                              |" << endl;
    cout << "\t\t\t\t\t   Castigatorul este: " << x << endl;
    cout << "\t\t\t\t\t|                              |" << endl;
    cout << "\t\t\t\t\t|------------------------------|" << endl;
    cout << endl;
    cout << endl;
    out << endl;
    out << endl;
    out << "\t\t\t\t\t|------------------------------|" << endl;
    out << "\t\t\t\t\t|                                  |" << endl;
    out << "\t\t\t\t\t   Castigatorul este: " << x << endl;
    out << "\t\t\t\t\t|                                  |" << endl;
    out << "\t\t\t\t\t|------------------------------|" << endl;
    out << endl;
    out << endl;

    return 0;
}
