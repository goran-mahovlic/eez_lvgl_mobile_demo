cmake_minimum_required(VERSION 3.12.4)

#using gcc first
set(CMAKE_C_COMPILER "/usr/bin/arm-linux-gnueabihf-gcc") 

# link_libraries("/home/kknight/Linux/tslib-1.4/tmp/lib/libts.so")
# //链接使用的库，相当于gcc -L/xxx/xxx

project(little_prj)
#//工程名

add_subdirectory(src)
# # //添加src目录
# add_subdirectory(lvgl)
# add_subdirectory(lv_drivers)
# add_subdirectory(lv_100ask_teach_demos)
# #later# add_subdirectory(eez-framework)
# #later# add_subdirectory(ui)


######################################################################

# #try using winUSB2_mod1
# cmake_minimum_required(VERSION 3.12.4)

# # project(lvgl_cpp_demo) #SMART_HOME_2AAAAA
# # project(lvgl_cpp_demo LANGUAGES C CXX)
# # project(lvgl_cpp_demo CXX C)
# project(lvgl_wUSB2)

# aux_source_directory(. DIR_SRCS)


# #DEFINE
# add_definitions(-DEEZ_FOR_LVGL)



# #header file
# # include_directories(include...)
# include_directories("${PROJECT_SOURCE_DIR}/lvgl")
# include_directories("${PROJECT_SOURCE_DIR}/lv_drivers")
# include_directories("${PROJECT_SOURCE_DIR}/lv_100ask_teach_demos")
# # include_directories("${PROJECT_SOURCE_DIR}/eez-framework")
# include_directories("${PROJECT_SOURCE_DIR}/ui")

# #include mk here
# # add_subdirectory($(LVGL_DIR)/tools)
# add_subdirectory(lvgl)
# add_subdirectory(lv_drivers)
# add_subdirectory(lv_100ask_teach_demos)
# add_subdirectory(eez-framework)
# add_subdirectory(ui)

# #under each subdirectory
# #add add CMakeList.txt
# #aux_source_directory(. DIR_LIB_SRCS)
# #add_library (world ${DIR_LIB_SRCS})
# #add end

# # include()


# #add_library()



# add_executable(lvgl_cpp_demo main.c)
# #linker lib
# target_link_libraries(lvgl_cpp_demo 
#   lvgl 
#   eez-framework
#   lv_drivers
#   lv_100ask_teach_demos
#   ui
# )



########################################################################
#other may not be used 

########
# .mk 
########
# #include mk here
# # add_subdirectory($(LVGL_DIR)/tools)
# add_subdirectory($(LVGL_DIR)/lvgl/)
# # include $(LVGL_DIR)/lvgl/lvgl.mk
# add_subdirectory($(LVGL_DIR)/lv_drivers/)
# # include $(LVGL_DIR)/lv_drivers/lv_drivers.mk
# add_subdirectory($(LVGL_DIR)/lv_100ask_teach_demos/)
# # include $(LVGL_DIR)/lv_100ask_teach_demos/lv_100ask_teach_demos.mk
# add_subdirectory($(LVGL_DIR)/eez-framework/)
# # include $(LVGL_DIR)/eez-framework/eez_framework.mk
# add_subdirectory($(LVGL_DIR)/ui/)
# # include $(LVGL_DIR)/ui/ui.mk





#######################################################################
# #
# # Makefile
# #
# #has been working for sqline studio#
# CC = arm-linux-gnueabihf-gcc
# #failed#CC = arm-linux-gnueabihf-g++

# LVGL_DIR_NAME ?= lvgl
# LVGL_DIR ?= ${shell pwd}
# CFLAGS ?= -O3 -g0 -I$(LVGL_DIR)/ -I$(LVGL_DIR)/eez-framework/src -I$(LVGL_DIR)/ui -L$(LVGL_DIR)/eez-framework -DEEZ_FOR_LVGL -Wall -Wshadow -Wundef -Wmissing-prototypes -Wno-discarded-qualifiers -Wall -Wextra -Wno-unused-function -Wno-error=strict-prototypes -Wpointer-arith -fno-strict-aliasing -Wno-error=cpp -Wuninitialized -Wmaybe-uninitialized -Wno-unused-parameter -Wno-missing-field-initializers -Wtype-limits -Wsizeof-pointer-memaccess -Wno-format-nonliteral -Wno-cast-qual -Wunreachable-code -Wno-switch-default -Wreturn-type -Wmultichar -Wformat-security -Wno-ignored-qualifiers -Wno-error=pedantic -Wno-sign-compare -Wno-error=missing-prototypes -Wdouble-promotion -Wclobbered -Wdeprecated -Wempty-body -Wtype-limits -Wshift-negative-value -Wstack-usage=2048 -Wno-unused-value -Wno-unused-parameter -Wno-missing-field-initializers -Wuninitialized -Wmaybe-uninitialized -Wall -Wextra -Wno-unused-parameter -Wno-missing-field-initializers -Wtype-limits -Wsizeof-pointer-memaccess -Wno-format-nonliteral -Wpointer-arith -Wno-cast-qual -Wmissing-prototypes -Wunreachable-code -Wno-switch-default -Wreturn-type -Wmultichar -Wno-discarded-qualifiers -Wformat-security -Wno-ignored-qualifiers -Wno-sign-compare
# LDFLAGS ?= -lm
# BIN = lv_100ask_demo


# #Collect the files to compile
# MAINSRC = ./main.c

# #include $(LVGL_DIR)/try5_diff_833/ui.mk
# include $(LVGL_DIR)/lvgl/lvgl.mk
# include $(LVGL_DIR)/lv_drivers/lv_drivers.mk
# include $(LVGL_DIR)/lv_100ask_teach_demos/lv_100ask_teach_demos.mk
# include $(LVGL_DIR)/eez-framework/eez_framework.mk
# include $(LVGL_DIR)/ui/ui.mk


# #removed #CSRCS +=$(LVGL_DIR)/mouse_cursor_icon.c 

# OBJEXT ?= .o

# AOBJS = $(ASRCS:.S=$(OBJEXT))
# COBJS = $(CSRCS:.c=$(OBJEXT))

# MAINOBJ = $(MAINSRC:.c=$(OBJEXT))

# SRCS = $(ASRCS) $(CSRCS) $(MAINSRC)
# OBJS = $(AOBJS) $(COBJS)

# ## MAINOBJ -> OBJFILES

# all: default

# %.o: %.c
# 	@$(CC)  $(CFLAGS) -c $< -o $@
# 	@echo "CC $<"
    
# default: $(AOBJS) $(COBJS) $(MAINOBJ)
# 	$(CC) -o $(BIN) $(MAINOBJ) $(AOBJS) $(COBJS) $(LDFLAGS)

# clean: 
# 	rm -f $(BIN) $(AOBJS) $(COBJS) $(MAINOBJ)



###################################################
# cmake_minimum_required(VERSION 3.12.4)

# if(NOT ESP_PLATFORM)
#   project(lvgl HOMEPAGE_URL https://github.com/lvgl/lvgl)
# endif()

# set(LVGL_ROOT_DIR ${CMAKE_CURRENT_LIST_DIR})

# if(ESP_PLATFORM)
#   include(${CMAKE_CURRENT_LIST_DIR}/env_support/cmake/esp.cmake)
# elseif(ZEPHYR_BASE)
#   include(${CMAKE_CURRENT_LIST_DIR}/env_support/cmake/zephyr.cmake)
# elseif(MICROPY_DIR)
#   include(${CMAKE_CURRENT_LIST_DIR}/env_support/cmake/micropython.cmake)
# else()
#   include(${CMAKE_CURRENT_LIST_DIR}/env_support/cmake/custom.cmake)
# endif()
