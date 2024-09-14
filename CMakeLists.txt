cmake_minimum_required(VERSION 3.12)


set(ProjectName SDL_Wrapper)
#项目名
project(${ProjectName} VERSION 0.1)


set(CMAKE_CXX_STANDARD 17)
#set(CMAKE_C_STANDARD )

#list(APPEND compile_flags "-Wall" " -O0" "-g" "-fPIC")
#add_compile_options(${ProjectName} PUBLIC ${compile_flags})

#资源文件添加
file(GLOB RES "./res" )
file(COPY ${RES} DESTINATION ${CMAKE_BINARY_DIR})

#添加头文件搜索路径
#include_directories(SYSTEM ${CMAKE_CURRENT_SOURCE_DIR}*)
#添加lib加载路径
#link_directories(SYSTEM ${CMAKE_CURRENT_SOURCE_DIR}*)
#link_libraries()
#添加-D定义标致
#add_definitions(-D*)
#打包Path下的文件 ${SourceNAme} 取用
#aux_source_directory(SourceName Path)
#增加编译子目录
#add_subdirectory(src)
add_subdirectory(SDL/SDL2_mixer)
add_subdirectory(SDL/SDL2)
add_subdirectory(SDL/SDL2_image)
add_subdirectory(SDL/SDL2_ttf)




set(SRC test/main.cpp)

add_executable(${ProjectName} ${SRC})

target_link_libraries(${ProjectName} SDL2 SDL2_mixer SDL2_ttf SDL2_image SDL2_test)

