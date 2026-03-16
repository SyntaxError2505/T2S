# T2S - Tabs 2 Spaces
- When you grow up and don't wanna deal with configuring your editor for your preferred tab with, your codebase might become a horror to work with. Maybe style requirements change during production and a linter is unavailable. If that happens you can call this minimalistic cli-tool to convert a codebase from tabs to n amount of spaces.

## Installation
- Clone this repository: ```git clone https://github.com/SyntaxError2505/T2S.git```
- Enter the cloned directory: ```cd T2S```
- Make a build directory and enter it: ```mkdir build && cd build```
- Run cmake: ```cmake ..```
- Build the project: ```cmake --build .```
- **Optional:** Install the project: ```cmake --install .```
Installing will make the binary available from the whole system. This means you can call it from everywhere like this: ```t2s```

## Usage
- We assume that you have installed the tool like described above.

```bash
t2s [INDENT_LENGTH] [FILE]

# Example:
t2s 4 src/main.cpp
# Will convert tabs in the file src/main.cpp to 4 spaces
```
