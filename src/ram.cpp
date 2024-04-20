#include "ram.h"
using namespace std;

void write(vector<unsigned int> &ram_v, vector<unsigned int> vector1)
{
    cout << "Fill in 8 RAM cells :";
    for (int i = 0; i < ram_v.size(); i++)
    {
        cout << "Cell #" << i+1 << endl;
        cin >> ram_v[i];
    }
}

void read(vector<unsigned int> &ram_v)
{
    for (int i = 0; i < ram_v.size(); i++)
    {
        cout << "Cell #" << i+1 << " : " << ram_v[i] << endl;
    }
}