cmake_minimum_required(VERSION 3.10..3.31)

project(SpongeBob)

set(CMAKE_C_STANDARD 11)

# Game
add_compile_definitions(
    __USER_CDBUILD__
    __VERSION_DEBUG__
    __TERRITORY_USA__
    __FILE_SYSTEM_CD__
    TARGET_PC
    _LANGUAGE_C_PLUS_PLUS
)
file(GLOB_RECURSE SRCS
	"src/**/*.cpp"
)
add_executable(${PROJECT_NAME} ${SRCS})
target_include_directories(${PROJECT_NAME} PRIVATE include PRIVATE src)

# PsyZ
add_subdirectory(psyz/psyz build)
target_link_libraries(${PROJECT_NAME} PRIVATE psyz)
target_include_directories(psyz PRIVATE psyz/psyz/include)
target_compile_definitions(psyz PRIVATE __psyz)
# psyz_title(${PROJECT_NAME} "SpongeBob")