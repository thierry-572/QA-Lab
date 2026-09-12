#!/bin/bash


echo "====================="
echo "     QA-LAB-BUILD"
echo "====================="

echo "Compilando aplicação... "

g++ ../app/task_manager.cpp -o task_manager


if [ $? -eq 0 ];then
echo "../app/task_manager.cpp build concluido"
else
echo "../app/task_manager.cpp build falhou"
exit 1
fi

	

#!/bin/bash
if [ -f ../app/task_manager.cpp ];then
echo "existe"
else
echo "não existe"
fi


if [ $? -eq 0 ];then
echo "[2026-09-12 17:49]BUILD:PASS">>../reports/build.log
else
echo "[2026-09-12 17:49]BUILD:FAIL">>../reports/build.log
fi


