#!/bin/bash
read -p "Введи количество файлов: " numb
read -p "Введи путь к папке: " path
for (( i = 1; i <= numb; i++))
do
    gcc $path/c$i.c -o $path/a$i.out
done
echo "End"
