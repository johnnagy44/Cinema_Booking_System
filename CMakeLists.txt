cmake_minimum_required(VERSION 3.22)
Project(CINEMAAPP)
set(src_files 
${CMAKE_SOURCE_DIR}/src/main.cpp 
${CMAKE_SOURCE_DIR}/src/customer.cpp 
${CMAKE_SOURCE_DIR}/src/movie.cpp 
${CMAKE_SOURCE_DIR}/src/payment.cpp 
${CMAKE_SOURCE_DIR}/src/reservation.cpp
${CMAKE_SOURCE_DIR}/src/cinema.cpp
${CMAKE_SOURCE_DIR}/src/admin.cpp
${CMAKE_SOURCE_DIR}/src/hall.cpp
${CMAKE_SOURCE_DIR}/src/Iobserve.cpp
${CMAKE_SOURCE_DIR}/src/Isubject.cpp
${CMAKE_SOURCE_DIR}/src/movie_subject.cpp
${CMAKE_SOURCE_DIR}/src/notification_manager.cpp
${CMAKE_SOURCE_DIR}/src/payment_method.cpp
${CMAKE_SOURCE_DIR}/src/payment_status.cpp
${CMAKE_SOURCE_DIR}/src/seat_types.cpp
${CMAKE_SOURCE_DIR}/src/showtime.cpp
${CMAKE_SOURCE_DIR}/src/UI.cpp)

add_executable(appbinary ${src_files})
target_include_directories(appbinary PUBLIC inc/)


