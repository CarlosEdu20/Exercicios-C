cmake_minimum_required(VERSION 3.31)
project(ExecLivroDeC C)

set(CMAKE_C_STANDARD 11)

add_executable(ExecLivroDeC
        capitulo_03_Estruturas_repeticao/
        capitulo_03_Estruturas_repeticao/Exec20.c

)
target_link_libraries(ExecLivroDeC m)