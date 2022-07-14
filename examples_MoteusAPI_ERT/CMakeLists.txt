add_executable(positioncmd main_positionSet_test.cpp)
target_link_libraries(positioncmd ${LIBRARY_NAME})

add_executable(stopcmd main_stopcmd_test.cpp)
target_link_libraries(stopcmd ${LIBRARY_NAME})

add_executable(readstate main_stopcmd_test.cpp)
target_link_libraries(readstate ${LIBRARY_NAME})
