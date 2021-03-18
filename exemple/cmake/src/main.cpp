#include <iostream>
#include "maClasse.h"

int main(int argc, char* const argv[])
{
    boost::filesystem::path pp ("/Users/alavenant/DEV/Formation-CPlusPlus/exemple/cmake/src/main.cpp");
    maClasse macc(pp);
    std::cout << macc.path() << std::endl;
}

