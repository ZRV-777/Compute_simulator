#include "kbd.h"

void input_ram(vector<unsigned int> &ram_v)
{
    for (int i = 0; i < ram_v.size(); i++)
    {
        cout << "Enter value for RAM[" << i+1 << "]: ";
        cin >> ram_v[i];
    }
}