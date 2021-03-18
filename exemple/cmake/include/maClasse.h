#ifndef MACLASSE
#define MACLASSE

#include <boost/filesystem.hpp>

class maClasse
{
public:
    maClasse(const boost::filesystem::path& _path);

    std::string path()const;
    
private:
    boost::filesystem::path myPath;
    
};

#endif
