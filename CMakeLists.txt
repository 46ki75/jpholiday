cmake_minimum_required(VERSION 3.10)

# プロジェクト名と使用する言語を設定
project(jpholiday CXX)

# C++のバージョンを指定
set(CMAKE_CXX_STANDARD 11)

# ヘッダーファイルの場所を指定
include_directories(${PROJECT_SOURCE_DIR}/include)

# srcディレクトリの中の全てのcppファイルを変数SOURCESにセット
file(GLOB SOURCES "src/*.cpp")

# 実行ファイルを作成
add_executable(main.out ${SOURCES})
