cmake_minimum_required(VERSION 3.31)
project(ExecLivroDeC C)

set(CMAKE_C_STANDARD 11)

add_executable(ExecLivroDeC


        "capitulo_04_Vetores_e_matrizes - arrays/Comerciante.c"

)
target_link_libraries(ExecLivroDeC m)