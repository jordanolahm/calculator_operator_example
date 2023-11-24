@echo off

rem Compilar
g++ -std=c++11 -c calculadora.cpp
g++ -std=c++11 -c main.cpp
g++ -std=c++11 -o calculadora calculadora.o main.o

rem Executar
calculadora.exe

rem Limpar arquivos intermediários
del calculadora.o main.o