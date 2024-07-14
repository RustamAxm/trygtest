# Gtest study repo
```bash
git clone --recursive https://github.com/RustamAxm/trygtest.git
```
build
```bash
mkdir cmake-build-debug && cd cmake-build-debug
cmake ..
make
```
env for save as xml
```bash
export GTEST_OUTPUT=xml:testresults/
./cmake-build-debug/trygtets --getst_output=xml
```
result 
```bash
rustam@nb-ubuntu-02:~/CLionProjects/trygtets$ tree testresults/
testresults/
└── trygtets.xml
```