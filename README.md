# C++ dev container

Initial template for c++ project. Contains all required dependencies and vscode extensions. No need to install any dependencies locally.

Includes: 
- CMake
- Example class
- Unit tests for the class
- Format on save
- Syntax highlighting
- Autosuggestions
- Vscode build task (To work with - `ctrl+shift+b`)
- Debugging on `f5` press
- Debugging of unit test

## Prerequisites
- [Docker](https://docs.docker.com/engine/install/) installed
- [Dev Containers](https://marketplace.visualstudio.com/items?itemName=ms-vscode-remote.remote-containers) plugin for vscode installed

## Getting Started
- Clone the repo
- Open repo folder in vscode
- Press `<esc>` if `select kit` prompt for CMake compilation will appear
- Open in container
    - `Ctrl+Shift+P` -> `Dev Containers: Rebuild and Reopen in Container`
- Build the project
    - `Ctrl+Shift+b`


## Limitations
- Need to rebuild every time before unit test run