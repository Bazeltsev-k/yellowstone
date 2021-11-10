#! /bin/sh

classes_sources="main.cpp"
for file in classes/*.cpp
do
  classes_sources="${classes_sources} $file"
done

echo "${classes_sources}"

sed -i '' -e "s#SOURCES=.*#SOURCES=${classes_sources}#" Makefile
sed -i '' -e "s/EXECUTABLE=.*/EXECUTABLE=${PWD##*/}/" Makefile

make
make clean
./${PWD##*/}