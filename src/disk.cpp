#include "disk.h"

void save (ofstream& data_in, vector<unsigned int> &ram_v)
{
    data_in.open("data.txt");

    if (data_in.is_open())
    {
        for (int i = 0; i < ram_v.size(); i++)
        {
            data_in << ram_v[i];
        }
    }

    data_in.close();
}

void load(ifstream& data_out, vector<unsigned int> &ram_v)
{
    data_out.open("data.txt");

    if (data_out.is_open())
    {
        for (int i = 0; i < data_out.eof(); i++)
        {
            data_out >> ram_v[i];
        }
    }

    data_out.close();
}