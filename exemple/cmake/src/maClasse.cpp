#include "maClasse.h"

maClasse::maClasse(const boost::filesystem::path& _path)
{
    myPath = _path;
}

std::string maClasse::path()const
{
    return myPath.string();
}
