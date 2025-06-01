cmake_minimum_required(VERSION 3.15)
project(BuilderPatternDemo LANGUAGES CXX)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

enable_testing()         
add_subdirectory(include)
add_subdirectory(src)
add_subdirectory(app)
add_subdirectory(tests)

set(CPACK_PACKAGE_CONTACT "kirill@example.com")
set(CPACK_DEBIAN_PACKAGE_MAINTAINER "kirill <kirill@example.com>")

include(CPack)

set(CPACK_GENERATOR "DEB")
set(CPACK_PACKAGE_NAME "builder-pattern-demo")
set(CPACK_PACKAGE_VERSION "1.0.0")