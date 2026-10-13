# cmake_playground

cmake playground is a code collection containing C++. The repository layout and entry points below describe the checked-in implementation.

## Repository layout

- `geometry/` — 8 tracked file(s); source examples: `geometry/main.cpp`, `geometry/src/square/square.cpp`.
- `hello_cmake/` — 3 tracked file(s); source examples: `hello_cmake/main.cpp`.

## Local setup

Run each package setup block from the repository root. For workspace repositories, install dependencies at the root before running application-specific scripts.

Clone this repository and enter its directory:

```sh
git clone https://github.com/stanleyHayes/cmake_playground.git
cd cmake_playground
```

This repository contains standalone examples rather than a root package manifest. Choose an example from the source layout and use the corresponding language toolchain; independent exercises may need to be run separately.

## Configuration

- `geometry/Makefile` — checked-in configuration or task definitions; review it before starting dependent services.

## Source entry points

- [geometry/main.cpp](geometry/main.cpp)
- [geometry/src/square/square.cpp](geometry/src/square/square.cpp)
- [hello_cmake/main.cpp](hello_cmake/main.cpp)

## Development notes

Commands above come from the tracked manifests and source layout. External services and runtime configuration may be required. Documentation updates do not establish that the application is deployed or that its tests pass.

## Previous project notes

# cmake_playground
This repository is represents my journey in learning how to build applications using the cmake build system
