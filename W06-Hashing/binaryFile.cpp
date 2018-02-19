#include <cstdlib>
#include <fstream>
#include <iostream>
#include <string>

using namespace std;

int main(int argc, char *argv[])
{
    if (argc != 3)
    {
        cerr << "Must specify an input file!\n\n";
        return 0;
    }
    
    string input_file = string(argv[1]);
    int key = atoi(argv[2]);
    string output_file = "en-" + input_file;
    
    ifstream read(input_file.c_str(), std::ios::binary);
    ofstream print(output_file.c_str());
    char x;
    while (read.read(&x, 1))
    {
        x = x + key;
        print.write(&x, 1);
    }
    
    return 0;
}