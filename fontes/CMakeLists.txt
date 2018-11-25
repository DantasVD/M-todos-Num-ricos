cmake_minimum_required(VERSION 3.9)
project(fontes)

set(CMAKE_CXX_STANDARD 11)

add_executable(fontes
        dialog.cpp
        dialog.h
        ldp_solucao.cpp
        ldp_solucao.h
        lu_solucao.cpp
        lu_solucao.h
        main.cpp
        mainwindow.cpp
        mainwindow.h
        matriz.cpp
        matriz.h
        methods.h
        operacoes.cpp
        operacoes.h)
