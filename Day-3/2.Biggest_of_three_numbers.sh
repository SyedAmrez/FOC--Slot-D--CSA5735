#! /usr/bin/bash
read -p "Enter n1: " n1
read -p "Enter n2: " n2
read -p "Enter n3: " n3
if((n1>n2 && n1>n3))
then
    echo $n1 "is greater"
elif((n2>n1 && n2>n3))
then
    echo $n2 "is greater"
else
    echo $n3 "is greater"
fi