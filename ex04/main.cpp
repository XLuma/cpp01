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
	std::string searchedstr;
	std::string newstr;
	size_t pos;

    if (argc != 4)
    {
        std::cout << "usage: ./sed [filename] [string 1] [string 2]" << std::endl;
        return 1;
    }
	newstr = std::string(argv[3]);
	searchedstr = std::string(argv[2]);
    infile.open(argv[1]);
    if (infile.is_open())
    {
        //file is open
        outfilename = std::string(argv[1]) + ".replace";
        outfile.open(outfilename);
        while (std::getline(infile, line))
        {
            if (line.compare(searchedstr) == 0)
            {
                //found a string
                outfile << newstr << std::endl;
            }
			else if (line.find(searchedstr, 0) != std::string::npos)
			{
				while (line.find(searchedstr, 0) != std::string::npos)
				{
					pos = line.find(searchedstr, 0);
					line.erase(line.find(searchedstr), searchedstr.length());
					line.insert(pos, newstr);
				}
				outfile << line << std::endl;
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