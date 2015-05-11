#include <iostream>
#include <fstream>

using namespace std;

int main()
{
    //INPUT/OUTPUT THROUGH FILE
    string line;

    ifstream input("input");
    ofstream output("output");

    if (input.is_open() && output.is_open()) {

        while(getline(input, line)) {
            cout << "check " << line << endl;
        }

        input.close();
        output.close();
    }
    else cout << "Open file error" << endl;

    return 0;
}