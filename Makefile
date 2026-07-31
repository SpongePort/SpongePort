VERSION := DEBUG
TERRITORY := USA
USER := CDBUILD
FILE_SYSTEM := PC
PLATFORM := PC

INCS :=  	-Iinclude \
			-Isrc

DEFS :=  	-D__USER_$(USER)__ \
			-D__VERSION_$(VERSION)__ \
			-D__TERRITORY_$(TERRITORY)__ \
			-D__FILE_SYSTEM_$(FILE_SYSTEM)__ \
			-D__VERSION_STR__=$(VERSION) \
			-D__TERRITORY_STR__=$(TERRITORY) \
			-D__FILE_SYSTEM_STR__=$(FILE_SYSTEM) \
			-DTARGET_${TARGET} \
			-D_LANGUAGE_C_PLUS_PLUS

TARGET = SpongeBob
TYPE = ps-exe
CFLAGS :=	-std=gnu11 \
			-w \
			-g \
			-fpermissive \
			$(INCS) \
			$(DEFS)

SRC_DIR := src
BUILD_DIR := build
PLATFORM_DIR := $(shell echo $(PLATFORM) | tr A-Z a-z)

SRCS := $(filter-out $(wildcard $(SRC_DIR)/**/main.cpp), $(wildcard $(SRC_DIR)/**/*.cpp)) $(SRC_DIR)/$(PLATFORM_DIR)/main.cpp

include psyz/psyz/psx.mk