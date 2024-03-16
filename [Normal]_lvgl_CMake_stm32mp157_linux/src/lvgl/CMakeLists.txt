# aux_source_directory(./src/.  DIR_LITTLE_SRC) 
# file (GLOB DIR_LITTLE_SRC
#         "*.h"
#         "*.c"
# )

aux_source_directory(./src/core/  DIR_LITTLE_SRC)    
#//添加目录下源文件到 DIR_LITTLE_SRC
aux_source_directory(./src/draw/  DIR_LITTLE_SRC)
aux_source_directory(./src/draw/sw  DIR_LITTLE_SRC)
aux_source_directory(./src/draw/sdl  DIR_LITTLE_SRC)
aux_source_directory(./src/extra/  DIR_LITTLE_SRC)
aux_source_directory(./src/extra/themes/default  DIR_LITTLE_SRC)
aux_source_directory(./src/extra/widgets/  DIR_LITTLE_SRC)
aux_source_directory(./src/extra/widgets/menu  DIR_LITTLE_SRC)
aux_source_directory(./src/extra/widgets/spinbox  DIR_LITTLE_SRC)
aux_source_directory(./src/extra/widgets/imgbtn  DIR_LITTLE_SRC)
aux_source_directory(./src/extra/widgets/tileview  DIR_LITTLE_SRC)
aux_source_directory(./src/extra/widgets/meter  DIR_LITTLE_SRC)
aux_source_directory(./src/extra/widgets/led DIR_LITTLE_SRC)
aux_source_directory(./src/extra/widgets/msgbox  DIR_LITTLE_SRC)
aux_source_directory(./src/extra/widgets/chart  DIR_LITTLE_SRC)
aux_source_directory(./src/extra/widgets/win  DIR_LITTLE_SRC)
aux_source_directory(./src/extra/widgets/calendar  DIR_LITTLE_SRC)
aux_source_directory(./src/extra/widgets/list  DIR_LITTLE_SRC)
aux_source_directory(./src/extra/widgets/tabview  DIR_LITTLE_SRC)
aux_source_directory(./src/extra/widgets/keyboard DIR_LITTLE_SRC)
aux_source_directory(./src/extra/widgets/spinner  DIR_LITTLE_SRC)
aux_source_directory(./src/extra/widgets/colorwheel  DIR_LITTLE_SRC)
# aux_source_directory(./src/extra/widgets/tileview  DIR_LITTLE_SRC)
# aux_source_directory(./src/extra/widgets/tileview  DIR_LITTLE_SRC)




aux_source_directory(./src/extra/layouts/flex  DIR_LITTLE_SRC)
aux_source_directory(./src/extra/layouts/grid  DIR_LITTLE_SRC)


aux_source_directory(./src/font/  DIR_LITTLE_SRC)
aux_source_directory(./src/gpu/  DIR_LITTLE_SRC)
aux_source_directory(./src/hal/   DIR_LITTLE_SRC)
aux_source_directory(./src/misc/  DIR_LITTLE_SRC)
aux_source_directory(./src/widgets/  DIR_LITTLE_SRC)

aux_source_directory(./demos/music/  DIR_LITTLE_SRC)
aux_source_directory(./demos/music/assets  DIR_LITTLE_SRC)
aux_source_directory(./demos/widgets/  DIR_LITTLE_SRC)
# aux_source_directory(./src/objx/  DIR_LITTLE_SRC)
# aux_source_directory(./src/themes/  DIR_LITTLE_SRC)

# add_library(lvgl_lib ${DIR_LITTLE_SRC} )	
# add_library(lvgl_lib SHARED ${DIR_LITTLE_SRC} )	
add_library(lvgl_lib STATIC ${DIR_LITTLE_SRC} )			
#//链接所有DIR_LITTLE_SRC包含的源文件到 lvgl_lib

