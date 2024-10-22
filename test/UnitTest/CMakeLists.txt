cmake_minimum_required(VERSION 3.14)
project(UnitTest)

if (MSVC)
    add_compile_options(/std:c++14)   # Enable C++14
    add_compile_options(/permissive-) # Enable conformance mode
    add_compile_options(/wd4819)      # エンコーディングの違いによるエラーを無効化
endif()


# GoogleTest 設定
set(gtest_force_shared_crt ON CACHE BOOL "" FORCE)
add_subdirectory(${CMAKE_CURRENT_SOURCE_DIR}/Thirdparty/googletest)
include(GoogleTest)
enable_testing()

# 子ディレクトリの CMakeLists で使えるよう、インクルードディレクトリ(src)のパスをキャッシュに保存
get_filename_component(ABSOLUTE_LIBRARY_DIR "${CMAKE_CURRENT_SOURCE_DIR}/../../src" ABSOLUTE)
set(LIBRARY_DIR ${ABSOLUTE_LIBRARY_DIR} CACHE STRING "include path")

# 子ディレクトリを登録
add_subdirectory(./Algorithm)
