# Formats the entire project
find ./include/ -iname *.hpp -o -iname *.cpp | xargs clang-format -i
find ./test/ -iname *.hpp -o -iname *.cpp | xargs clang-format -i