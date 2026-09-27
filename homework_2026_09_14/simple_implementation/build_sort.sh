MAIN="main.cpp"
EXE="simple_sort_implementation"

CHARSET="-finput-charset=utf-8 -fexec-charset=utf-8"

rm -f "$EXE"

g++ $CHARSET "$MAIN" -o "$EXE"

./"$EXE"
