#include "gpu.h"

void output_ram (vector<unsigned int> &ram_v)
{
    for (int i = 0; i < ram_v.size(); i++)
    {
        cout << ram_v[i] << " ";
    }
    cout << endl;
}