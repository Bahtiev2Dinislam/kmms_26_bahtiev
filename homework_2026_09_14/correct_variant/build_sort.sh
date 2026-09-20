CPP_FILES="io.cpp sortings.cpp main.cpp"
EXE="my_correct_sort"
CHARSET="-finput-charset=utf-8 -fexec-charset=UTF-8"

if [ -f "$EXE" ]; then
    rm "$EXE"
fi

g++ $CHARSET $CPP_FILES -o $EXE

./$EXE
