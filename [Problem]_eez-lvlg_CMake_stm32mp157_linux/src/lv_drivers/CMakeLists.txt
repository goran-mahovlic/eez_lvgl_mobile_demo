aux_source_directory(./display/  DIR_LITTLE_SRC2)    
#//添加目录下源文件到 DIR_LITTLE_SRC
aux_source_directory(./gtkdrv/  DIR_LITTLE_SRC2)
aux_source_directory(./indev/  DIR_LITTLE_SRC2)
aux_source_directory(./sdl/   DIR_LITTLE_SRC2)
aux_source_directory(./wayland/  DIR_LITTLE_SRC2)
aux_source_directory(./wind32drv/  DIR_LITTLE_SRC2)
# aux_source_directory(./src/lv_themes/  DIR_LITTLE_SRC)

add_library(lv_drivers_lib STATIC ${DIR_LITTLE_SRC2} )			
#//链接所有DIR_LITTLE_SRC包含的源文件到 lvgl_lib

