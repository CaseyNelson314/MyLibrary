cmake_minimum_required(VERSION 3.14)

# 実行ファイルを追加
add_executable(AlgorithmTest
    Math.cpp
)

# インクルードディレクトリを設定
target_include_directories(AlgorithmTest PUBLIC ${LIBRARY_DIR})

# Google Test とリンク
target_link_libraries(AlgorithmTest gtest_main)

# テストケースを追加
gtest_discover_tests(AlgorithmTest)
