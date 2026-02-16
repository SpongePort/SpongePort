VERSION := DEBUG
TERRITORY := USA
USER := CDBUILD
FILE_SYSTEM := CD

CC := g++
LD := g++

INCS :=  	-Iinclude \
			-Ipsyx/include \
			-Ipsyx/include/psx \
			-Isrc

DEFS :=  	-D__USER_$(USER)__ \
			-D__VERSION_$(VERSION)__ \
			-D__TERRITORY_$(TERRITORY)__ \
			-D__VERSION_STR__=$(VERSION) \
			-D__TERRITORY_STR__=$(TERRITORY) \
			-D__FILE_SYSTEM__=$(FILE_SYSTEM) \
			-DUSE_OPENAL \
			-D_LANGUAGE_C_PLUS_PLUS \
			-DUSE_CPP_MEM \
			-DWIN32

CCFLAGS := 	-w \
			-g \
			-O2 \
			-fpermissive \
			$(shell sdl2-config --cflags) \
			$(INCS) \
			$(DEFS)

LDFLAGS =   -L$(BUILD_DIR)/psyx \
			-lpsycross \
			$(shell sdl2-config --libs) \
			-lopenal \


EXE := Spongey_Win.exe

SRC_DIR := src
BUILD_DIR := build

SRCS := $(wildcard $(SRC_DIR)/**/*.cpp)
OBJS := $(patsubst $(SRC_DIR)/%.cpp,$(BUILD_DIR)/obj/%.o,$(SRCS))

.PHONY: psyx clean

all: psyx $(BUILD_DIR)/$(EXE)

psyx:
	@mkdir -p $(BUILD_DIR)/psyx
	cmake -S psyx -B build/psyx
	cmake --build build/psyx

clean:
	rm -rf $(BUILD_DIR)

$(BUILD_DIR)/obj/%.o: $(SRC_DIR)/%.cpp
	@mkdir -p ${@D}
	$(CC) $(CCFLAGS) -c $< -o $@

$(BUILD_DIR)/$(EXE): $(OBJS)
	$(LD) -o $@ $^ $(LDFLAGS)