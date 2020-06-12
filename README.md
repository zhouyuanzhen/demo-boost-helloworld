# README

![Mater Branch Workflow Status](https://github.com/zhouyuanzhen/demo-boost-helloworld/workflows/default/badge.svg?branch=master)

A demo boost C++ application example project.

## QuickStart

```shell

clang++ main.cpp -L /usr/local/lib -lboost_locale-mt

./a.out
Upper:   YUANZHEN ZHOU
Lower:   yuanzhen zhou
Chinese: 元真大师👨‍🦲
```

## Use CMake

```shell
echo "Remove old build folder"; rm -fr build
echo "Create new build folder"; mkdir -p build

echo "Run cmake & make"
cmake -Bbuild -H.
cmake --build build/ --target all

echo "Run the test"; build/boost-helloworld
```

Enjoy ;)
