//
// Created by XLuma on 2022-04-15.
//
#include <iostream>
#include <fstream>
#include <string>
int main(int argc, char **argv)
{
    std::fstream infile;
    std::ofstream outfile;
    std::string line;
    std::string outfilename;

    if (argc != 4)
    {
        std::cout << "usage: ./sed [filename] [string 1] [string 2]" << std::endl;
        return 1;
    }
    infile.open(argv[1]);
    if (infile.is_open())
    {
        //file is open
        outfilename = std::string(argv[1]) + ".replace";
        outfile.open(outfilename);
        while (std::getline(infile, line))
        {
            std::cout << line << std::endl;
            if (line.compare(std::string(argv[2])) == 0)
            {
                //found a string
                outfile << argv[3] << std::endl;
            }
			else if (line.find(std::string(argv[2])))
			{
				
			}
            else
            {
                outfile << line << std::endl;
            }
        }
        infile.close();
        outfile.close();
    }
    else
    {
        std::cout << "Unable to open file " << argv[1];
        return 1;
    }
    return 0;
}