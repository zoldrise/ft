cmake_minimum_required(VERSION 4.2)

project(ft_project C)

set(CMAKE_C_STANDARD 11)
set(CMAKE_C_STANDARD_REQUIRED ON)

set(CMAKE_C_COMPILER gcc)
set(CMAKE_C_FLAGS "-O3 -Wall -Wextra -Werror")

add_executable(ft_putchar
    putChar/ft_putchar.c
)

add_executable(ft_putnbr
    putNbr/ft_putnbr.c
)

add_executable(ft_putstr
    putStr/ft_putstr.c
)

add_executable(ft_readfile
    readFile/ft_readfile.c
)

add_executable(ft_writefile
    writeFile/ft_writefile.c
)
