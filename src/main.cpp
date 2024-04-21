#include "kbd.h"
#include "disk.h"
#include "gpu.h"

using namespace std;

int main()
{
    string user = "User";
    string command;
    vector<unsigned int> ram_v = {0, 0, 0, 0, 0, 0, 0, 0};
    ifstream data_out;
    ofstream data_in;

    cout << "Welcome, " << user << "!" << endl;

    while (command != "exit")
    {
        cout << "Input command: ";
        cin >> command;

        if (command == "sum")
        {
            cout << "Initiating RAM sum..." << endl;
            compute(ram_v);
            cout << "Complete!" << endl;
        }
        else if (command == "save")
        {
            cout << "Saving RAM..." << endl;
            save (data_in, ram_v);
            cout << "Complete!" << endl;
        }
        else if (command == "load")
        {
            cout << "Loading RAM..." << endl;
            load (data_out, ram_v);
            cout << "Complete!" << endl;
        }
        else if (command == "input")
        {
            cout << "Input ram memory cell..." << endl;
            input_ram(ram_v);
        }
        else if (command == "display")
        {
            output_ram(ram_v);
        }
        else if (command == "exit")
        {
            cout << "Goodbye, " << user << "!" << endl;
        }
        else
        {
            cerr << "\n" << "Unknown command" << endl;
        }
    }
}