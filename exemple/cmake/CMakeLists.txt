cmake_minimum_required (VERSION 3.2)

#nom du projet
project( monProjetCMake )

#dossier contenant mes libs externes (en dur pour l'exemple)
SET (SOCLE_EXTERN_ROOT "/opt/miniconda3/envs/socle-externs-IGN/")
list(APPEND CMAKE_PREFIX_PATH "/opt/miniconda3/envs/socle-externs-IGN/")

#include
include_directories(include)

#fichiers .h et .cpp à prendre en compte
file(GLOB_RECURSE SRC_FILES src/*.cpp include/*.h)

#recherche de boost
find_package( Boost REQUIRED COMPONENTS filesystem)

#définition de l'executable
add_executable(monProjetCMake ${SRC_FILES})

#link avec les librairies en plus
target_link_libraries(monProjetCMake ${Boost_SYSTEM_LIBRARY} ${Boost_FILESYSTEM_LIBRARY})

