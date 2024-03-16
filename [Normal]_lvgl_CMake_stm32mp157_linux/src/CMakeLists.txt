SET(CMAKE_BUILD_TYPE "Debug")
SET(CMAKE_C_FLAGS_DEBUG "$ENV{CXXFLAGS} -O3 -Wall -g2 -ggdb ")
SET(CMAKE_C_FLAGS_RELEASE "$ENV{CXXFLAGS} -O3 -Wall")

#new
SET(CMAKE_LD_FLAGS "-lm")

aux_source_directory(. DIR_SRC) 
#//将当前c文件名添加至DIR_SRC

# add_subdirectory(lvgl)        //添加目录 lvgl
# add_subdirectory(lv_examples) //添加目录 lv_examples
# add_subdirectory(lv_drivers)  //添加目录 lv_drivers
add_subdirectory(lvgl)
add_subdirectory(lv_drivers)
add_subdirectory(lv_100ask_teach_demos)

include_directories(./lvgl/)  
include_directories(./)  
#//设置头文件路劲
# include_directories(../../tslib/include)
# add_executable(little_prj ${DIR_SRC}) 
add_executable(${PROJECT_NAME} ${DIR_SRC})  
#//链接生成文件little_prj 由DIR_SRC链接。

find_package(Threads)

set(VAR lvgl_lib)
set(VAR ${VAR} lv_drivers_lib)
# set(VAR ${VAR} lv_examples_lib)
# set(VAR ${VAR} lv_100ask_teach_demos)
set(VAR ${VAR} lv_100ask_teach_demos_lib)


################
# #previously resulted in dynamic lib
# #try static lib 
set_target_properties(little_prj PROPERTIES LINK_SEARCH_START_STATIC 1)
set_target_properties(little_prj PROPERTIES LINK_SEARCH_END_STATIC 1)
# set(CMAKE_FIND_LIBRARY_SUFFIXES ".a")

set(CMAKE_EXE_LINKER_FLAGS "-static-libgcc -static-libstdc++")
################
################

message("VAR : ${VAR}")
target_link_libraries(little_prj ${VAR})   
#//设置链接little_prj的 依赖关系 ，依赖 VAR = lvgl_lib lv_drivers
#target_link_libraries(little_prj libts.so)
target_link_libraries(little_prj ${CMAKE_THREAD_LIBS_INIT})

