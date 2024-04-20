#include "cpu.h"

void compute(vector<unsigned int> &ram_v)
{
    unsigned int sum = 0;
    for (int i = 0; i < ram_v.size(); i++)
    {
        sum += ram_v[i];
    }

    cout << "Ram memory sum: " << sum << endl;
}