# Simple C++ template project with scripts

## Usage:

```bash
# Clone this project
git clone git@github.com:Bazeltsev-k/cpp_template.git
# Change it's name to the needed one
mv cpp_template/ [your_new_project_name]/
# Cd into your project
cd [your_new_project_name]/
# Add executable permission to all scripts
chmod -R +x scripts/
# Populate header. Should create main.h file
scripts/populate_header.sh
# Populate Makefile with variables and run make command
scripts/make.sh
# Execute executable file. Should produce hello world
./[your_new_project_name]
```
## Scripts:

#### `populate_header.sh`
Will create `main.h` file with all header files from `classes` folder included in it.
Uses `header_template.h` as a template. Put all needed libraries in this file and run this script whenever you are adding/renaming `.h` files in `classes` folder.

#### `make.sh`
Populates `Makefile`'s `SOURCES` variable with `main.cpp` file from root and all `.cpp` files from `classes` folder; populates `EXECUTABLE` variable with name of the root folder; runs `make` and `make clean commands`.

