# Yellowstone game engine

> Game engine based on Vulkan API
## Prerequisites:

- VulkanSDK 1.2.189.0 ([Download here](https://vulkan.lunarg.com/sdk/home))
- g++
- c++20

## Installation:

[How to install VulkanSDK](https://vulkan-tutorial.com/Development_environment#page_Vulkan-SDK-2)

```bash
# Clone this project
git clone git@github.com:Bazeltsev-k/yellowstone.git
# Cd into project
cd yellowstone/
# Add executable permission to all scripts
chmod -R +x scripts/
# Populate header. Should create main.h file
scripts/populate_header.sh
# This script does not take into account the order of header files in which they have to be included.
# So now go to main.hpp file and put classes/simple_window.hpp on top.
# --- --- ---
# Populate Makefile with variables and run make command
scripts/make.sh
# Execute executable file. Should produce hello world
./yellowstone
```
## Scripts:

#### `populate_header.sh`
Will create `main.h` file with all header files from `classes` folder included in it.
Uses `header_template.h` as a template. Put all needed libraries in this file and run this script whenever you are adding/renaming `.h` files in `classes` folder.

**Note: For now this script can't take order of header files into an account. So you'll have to go and place them in main.hpp file in order that you need them.**

#### `make.sh`
Populates `Makefile`'s `SOURCES` variable with `main.cpp` file from root and all `.cpp` files from `classes` folder; populates `EXECUTABLE` variable with name of the root folder; runs `make` and `make clean commands`.

