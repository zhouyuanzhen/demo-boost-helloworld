# README

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
rm -fr build
mkdir -p build; cd build

cmake ..; make

./boost-helloworld

cd -
```
