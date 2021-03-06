
project(SMHasher)

cmake_minimum_required(VERSION 3.0)

set(CMAKE_BUILD_TYPE Release)
set(  CMAKE_C_FLAGS_RELEASE "-march=native -O3 -fgraphite-identity -floop-nest-optimize ")
set(CMAKE_CXX_FLAGS_RELEASE "-march=native -O3 -fgraphite-identity -floop-nest-optimize ")

add_library(
  SMHasherSupport
  AvalancheTest.cpp
  Bitslice.cpp
  Bitvec.cpp
  CityTest.cpp
  City.cpp
  crc.cpp
  crc32hw.cpp
  crc64.cpp
  DifferentialTest.cpp
  Hashes.cpp
  KeysetTest.cpp
  lookup3.cpp
  md5.cpp
  MurmurHash1.cpp
  MurmurHash2.cpp
  MurmurHash3.cpp
  Platform.cpp
  Random.cpp
  sha1.cpp
  SpeedTest.cpp
  Spooky.cpp
  SpookyTest.cpp
  Stats.cpp
  SuperFastHash.cpp
  Types.cpp
  PMurHash.c
  xxhash.cpp
  xxhash.c
)

add_executable(
  SMHasher
  main.cpp
)

target_link_libraries(
  SMHasher
  SMHasherSupport
)
