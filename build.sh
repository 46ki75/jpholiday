#!/bin/bash

# buildディレクトリが存在しない場合は作成
if [ ! -d "build" ]; then
  mkdir build
fi

# buildディレクトリに移動
cd build

# CMakeを実行
cmake ..

# Makefileに基づいてビルド
make
