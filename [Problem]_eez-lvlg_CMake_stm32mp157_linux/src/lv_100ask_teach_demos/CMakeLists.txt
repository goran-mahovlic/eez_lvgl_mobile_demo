aux_source_directory(./src/lv_100ask_demo_course_2_1_1/  DIR_LITTLE_SRC3)    
#//添加目录下源文件到 DIR_LITTLE_SRC
# aux_source_directory(./gtkdrv/  DIR_LITTLE_SRC2)
# aux_source_directory(./indev/  DIR_LITTLE_SRC2)
# aux_source_directory(./sdl/   DIR_LITTLE_SRC2)
# aux_source_directory(./wayland/  DIR_LITTLE_SRC2)
# aux_source_directory(./wind32drv/  DIR_LITTLE_SRC2)
# aux_source_directory(./src/lv_themes/  DIR_LITTLE_SRC)

add_library(lv_100ask_teach_demos_lib STATIC ${DIR_LITTLE_SRC3} )			
#//链接所有DIR_LITTLE_SRC包含的源文件到 lvgl_lib


###############################################################
# file(GLOB_RECURSE SOURCES src/*.c)
# add_library(lv_100ask_teach_demos STATIC ${SOURCES})
