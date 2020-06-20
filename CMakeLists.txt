cmake_minimum_required(VERSION 3.1)
project(leetcode_cpp)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

if(MSVC)
  # Force to always compile with W4
  if(CMAKE_CXX_FLAGS MATCHES "/W[0-4]")
    string(REGEX REPLACE "/W[0-4]" "/W4" CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS}")
  else()
    set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} /W4")
  endif()
elseif(CMAKE_COMPILER_IS_GNUCC OR CMAKE_COMPILER_IS_GNUCXX)
  # Update if necessary
  set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -Wall -Wno-long-long -pedantic")
endif()

include_directories("${CMAKE_SOURCE_DIR}/include")

add_executable(
  leetcode_cpp
  test/main.cpp
  test/leetcode/problem_1.cpp
  test/leetcode/problem_4.cpp
  test/leetcode/problem_5.cpp
  test/leetcode/problem_14.cpp
  test/leetcode/problem_13.cpp
  test/leetcode/problem_18.cpp
  test/leetcode/problem_19.cpp
  test/leetcode/problem_21.cpp
  test/leetcode/problem_22.cpp
  test/leetcode/problem_24.cpp
  test/leetcode/problem_26.cpp
  test/leetcode/problem_27.cpp
  test/leetcode/problem_28.cpp
  test/leetcode/problem_30.cpp
  test/leetcode/problem_31.cpp
  test/leetcode/problem_33.cpp
  test/leetcode/problem_34.cpp
  test/leetcode/problem_35.cpp
  test/leetcode/problem_36.cpp
  test/leetcode/problem_38.cpp
  test/leetcode/problem_81.cpp
  test/leetcode/problem_121.cpp
  test/leetcode/problem_122.cpp
  test/leetcode/problem_394.cpp
  test/leetcode/problem_105.cpp
  test/leetcode/problem_107.cpp
  test/leetcode/problem_145.cpp
  test/leetcode/problem_117.cpp
  test/leetcode/problem_173.cpp
  test/leetcode/problem_160.cpp
  test/leetcode/problem_203.cpp
  test/leetcode/problem_88.cpp
  test/leetcode/problem_206.cpp
  test/leetcode/problem_226.cpp
  test/leetcode/problem_264.cpp
  test/leetcode/problem_297.cpp
  test/leetcode/problem_344.cpp
  test/leetcode/problem_345.cpp
  test/leetcode/problem_371.cpp
  test/leetcode/problem_494.cpp
  test/leetcode/problem_535.cpp
  test/leetcode/problem_536.cpp
  test/leetcode/problem_537.cpp
  test/leetcode/problem_557.cpp
  test/leetcode/problem_589.cpp
  test/leetcode/problem_643.cpp
  test/leetcode/problem_653.cpp
  test/leetcode/problem_700.cpp
  test/leetcode/problem_888.cpp
  test/leetcode/problem_904.cpp
  test/leetcode/problem_905.cpp
  test/leetcode/problem_897.cpp
  test/leetcode/problem_929.cpp
  test/leetcode/problem_938.cpp
  test/leetcode/problem_106.cpp
  test/leetcode/problem_889.cpp
  test/leetcode/problem_965.cpp
  test/leetcode/problem_977.cpp
  test/leetcode/problem_1010.cpp
  test/leetcode/problem_1029.cpp
  test/leetcode/problem_1051.cpp
  test/leetcode/problem_1281.cpp
  test/leetcode/problem_1221.cpp
  test/leetcode/problem_1282.cpp
  test/leetcode/problem_1038.cpp
  test/leetcode/problem_1283.cpp
  test/leetcode/problem_1290.cpp
  test/leetcode/problem_1304.cpp
  test/leetcode/problem_1305.cpp
  test/leetcode/problem_1332.cpp
  test/leetcode/problem_1337.cpp
  test/leetcode/problem_1338.cpp
  test/leetcode/problem_1339.cpp
  test/leetcode/problem_1346.cpp
  test/leetcode/problem_1363.cpp
  test/leetcode/problem_1409.cpp
  test/leetcode/problem_1417.cpp
  test/leetcode/problem_1422.cpp
  test/leetcode/problem_1423.cpp
  test/leetcode/problem_1424.cpp
  test/leetcode/problem_1470.cpp
  test/leetcode/problem_1480.cpp
  test/leetcode/problem_1481.cpp
  test/april_2020_challenge/day_1.cpp
  test/april_2020_challenge/day_2.cpp
  test/april_2020_challenge/day_3.cpp
  test/april_2020_challenge/day_4.cpp
  test/april_2020_challenge/day_5.cpp
  test/april_2020_challenge/day_6.cpp
  test/april_2020_challenge/day_7.cpp
  test/april_2020_challenge/day_8.cpp
  test/april_2020_challenge/day_9.cpp
  test/april_2020_challenge/day_10.cpp
  test/april_2020_challenge/day_11.cpp
  test/april_2020_challenge/day_12.cpp
  test/april_2020_challenge/day_13.cpp
  test/april_2020_challenge/day_14.cpp
  test/april_2020_challenge/day_15.cpp
  test/april_2020_challenge/day_16.cpp
  test/april_2020_challenge/day_17.cpp
  test/april_2020_challenge/day_18.cpp
  test/april_2020_challenge/day_19.cpp
  test/april_2020_challenge/day_20.cpp
  test/april_2020_challenge/day_22.cpp
  test/april_2020_challenge/day_23.cpp
  test/april_2020_challenge/day_24.cpp)

target_include_directories(leetcode_cpp PRIVATE ${CMAKE_SOURCE_DIR}/doctest)
target_include_directories(leetcode_cpp
                           PRIVATE ${CMAKE_SOURCE_DIR}/akarithm/include)
