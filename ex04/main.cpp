#include <iostream>
#include <fstream>
#include <string>

int main(int argc, char *argv[])
{
    if (argc != 4)
        std::cerr << argv[0] << "usage: <filename> <s1> <s2>" << std::endl;
    
    std::string filename(argv[1]);
    std::fstream file(filename);
    if (!file) {
        std::cerr << filename << " : error accessing" << std::endl;
        return 1;
    }

    std::string newfilename(filename + ".replace");
    std::ofstream newFile(newfilename);
    if (!newFile) {
        std::cerr << newfilename << " : creation failed" << std::endl;
        return 1;
    }

    std::string line;
    std::string s1(argv[2]);
    std::string s2(argv[3]);
    while (!file.eof()) {
        std::getline(file, line);
        size_t s1_pos(0);
        while ((s1_pos = line.find(s1)) != std::string::npos) {
            line.erase(s1_pos, s1.length());
            line.insert(s1_pos, s2);
            s1_pos += s1.length();
        }
        newFile << line;
        if (!file.eof())
            newFile << std::endl;
    }
    return 0;
}