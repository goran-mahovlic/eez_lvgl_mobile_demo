

aux_source_directory(. DIR_LITTLE_SRC4)    
 
add_library(ui_lib STATIC ${DIR_LITTLE_SRC4} )			
#//链接所有DIR_LITTLE_SRC包含的源文件到 lvgl_lib

