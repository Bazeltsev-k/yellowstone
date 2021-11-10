#! /bin/sh

HEADER=main.hpp
cp header_template.hpp $HEADER
echo >> $HEADER
for file in classes/*.hpp
do
  echo "#include \"$file\"" >> $HEADER
done