# Объявить минимальную версию, требуемую cmake
cmake_minimum_required(VERSION 2.8)
 # Объявить проект cmake
project(complex)
set(CMAKE_BUILD_TYPE "Debug")  # Возможные варианты:"Release" "Debug"
 # Добавить общую библиотеку статическая библиотека не имеет SHARED
add_library(Complex SHARED Complex.cpp)  
 # Сгенерировать исполняемый файл в демонстрационном формате:add_executable(Исходный файл названия программы)
add_executable(main main.cpp)  
   # Установить библиотеку, которая будет связана с исполняемым файлом, который должен быть размещен после add_executable
target_link_libraries(main Complex)