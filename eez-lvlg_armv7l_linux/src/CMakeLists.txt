SET(CMAKE_BUILD_TYPE "Debug")
SET(CMAKE_C_FLAGS_DEBUG "$ENV{CXXFLAGS} -O0 -Wall -g2 -ggdb ")
SET(CMAKE_C_FLAGS_RELEASE "$ENV{CXXFLAGS} -O3 -Wall")

#new
SET(CMAKE_LD_FLAGS "-lm")

aux_source_directory(. DIR_SRC) 
 
add_subdirectory(lvgl)
add_subdirectory(lv_drivers)
add_subdirectory(lv_100ask_teach_demos)
add_definitions(-DLV_LVGL_H_INCLUDE_SIMPLE)
include_directories(./lvgl/)  
include_directories(./) 


# for eez framework 
include_directories(./eez-framework/src)  
add_definitions(-DEEZ_FOR_LVGL)
add_definitions(-DLV_SCR_LOAD_ANIM_FADE_IN=LV_SCR_LOAD_ANIM_FADE_ON)
aux_source_directory(./eez-framework/src/eez/core/  EEZ_FRAMEWORK_SOURCES)
aux_source_directory(./eez-framework/src/eez/flow/  EEZ_FRAMEWORK_SOURCES)
aux_source_directory(./eez-framework/src/eez/flow/components/  EEZ_FRAMEWORK_SOURCES)
aux_source_directory(./eez-framework/src/eez/libs/lz4  EEZ_FRAMEWORK_SOURCES)
aux_source_directory(./eez-framework/src/eez/libs/sha256  EEZ_FRAMEWORK_SOURCES)
include_directories(
    ./eez-framework/src/eez/platform/simulator
    ./eez-framework/src/eez/libs/agg
)
add_library(eez-framework_lib STATIC ${EEZ_FRAMEWORK_SOURCES} )	


add_subdirectory(ui)

# #include angular bracket lib
# # include_directories(./eez-framework/src/) 
# include_directories(./eez-framework/src/eez) 

#for eez framework

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
set(VAR ${VAR} ui_lib)
set(VAR ${VAR} eez-framework_lib)



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

