#pragma once
#include "ram.h"
#include <fstream>
#include <ostream>

void save (ofstream& data_in, vector<unsigned int> &ram_v);

void load (ifstream& data_out, vector<unsigned int> &ram_v);