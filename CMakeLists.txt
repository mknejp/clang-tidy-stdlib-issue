cmake_minimum_required(VERSION 3.21)
project(clang-tidy-stdlib-issue CXX)

add_executable(clang-tidy-stdlib-issue main.cpp)
target_compile_features(clang-tidy-stdlib-issue PRIVATE cxx_std_20)
