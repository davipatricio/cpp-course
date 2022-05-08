@echo off

for %%f in (*.cpp) do (
    echo Compiling %%f
    g++ -o %%~nf.exe -O3 %%~nf.cpp
)