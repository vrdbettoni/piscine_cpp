#include <iostream>
#include <fstream>

int main(int ac, char *av[])
{
    std::string output;

    if (ac == 1) {
        while (std::getline(std::cin, output))
            std::cout << output << std::endl;
    }
    else {
        for (int i = 1; av[i] != nullptr; ++i) {
            std::ifstream file (av[i], std::ifstream::in);
            if (file.fail()) {
                std::cerr << "cato9tails: "<< av[i] << ": No such file or directory" << std::endl;
                continue ;
            }
            while (std::getline(file, output))
                std::cout << output << std::endl;
        }
    }
}
