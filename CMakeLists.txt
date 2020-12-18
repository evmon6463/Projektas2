cmake_minimum_required(VERSION 3.17)
project(Projektas_su_vektoriais)

set(CMAKE_CXX_STANDARD 17)
add_subdirectory(lib/googletest-master)
include_directories(lib/googletest-master/googletest/include)
include_directories(lib/googletest-master/googlemock/include)

set(SOURCE_FILES main.cpp)
add_executable(Projektas_su_vektoriais main.cpp random.h random.cpp klausimai.h klausimai.cpp skaiciavimai.h skaiciavimai.cpp studentas.h pazymiai.h pazymiai.cpp studento_sukurimas.h studento_sukurimas.cpp rusiavimas.h rusiavimas.cpp isvedimas.h isvedimas.cpp nuskaityti_duomenys.h "nuskaityti duomenys.cpp" studentai.h studentai.cpp rusiavimas.cpp "studentai_faile.h" "studentai_faile.cpp" Tests/Class.h Tests/TESTS.cpp)
target_link_libraries(Projektas_su_vektoriais gtest gtest_main)
