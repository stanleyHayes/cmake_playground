generate-debug:
	cmake -S . -B build-debug -GNinja -DCMAKE_CXX_COMPILER=c++ -DCMAKE_BUILD_TYPE=Debug

build-debug:generate-debug
	cmake --build build-debug

generate-release:
		cmake -S . -B build-release -GNinja -DCMAKE_CXX_COMPILER=c++ -DCMAKE_BUILD_TYPE=Release

build-release:generate-release
	cmake --build build-release

run-debug:build-debug
	./build-debug/geometry

clean-debug:
	rm -rf build-debug

clean-release:
	rm -rf build-release