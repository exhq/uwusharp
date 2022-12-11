#include <iostream>
#include <fstream>
#include <sstream>
#include <string>
#include <stdlib.h>
#include "errors.hpp"
using namespace std;

int main(int argc, char **argv)
{
    ifstream f(argv[1]);
    string whole;
    if (f)
    {
        ostringstream ss;
        ss << f.rdbuf();
        whole = ss.str();
    }
    // getting the file completed

    if (whole.length() < 1)
    {
        sendexitcode("emptyfile", 0);
    }

    if (whole.rfind("konichiwa >3<", 0) != 0)
    {
        sendexitcode("nohello", 0);
    }

}