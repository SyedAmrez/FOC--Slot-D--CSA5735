#! /usr/bin/bash
echo ----------------------------------- 
echo '\tStudent Mark List' 
echo ----------------------------------- 
echo Enter the Student name 
read name 
echo Enter the Register number 
read rno 
echo Enter the Mark1 
read m1 
echo Enter the Mark2 
read m2 
echo Enter the Mark3 
read m3 
tot=$(expr $m1 + $m2 + $m3) 
avg=$(expr $tot / 3) 
echo ----------------------------------- 
echo '\tStudent Mark List' 
echo ----------------------------------- 
echo "Student Name    : $name" 
echo "Register Number : $rno" 
echo "Mark1           : $m1" 
echo "Mark2           : $m2" 
echo "Mark3           : $m3" 
echo "Total           : $tot" 
echo "Average         : $avg" 
if [ $m1 -ge 35 ] && [ $m2 -ge 35 ] && [ $m3 -ge 35 ]
then 
 echo "Result          : Pass" 
  
 if [ $avg -ge 90 ] 
 then 
  echo "Grade           : S" 
 elif [ $avg -ge 80 ] 
 then 
         echo "Grade           : A" 
 elif [ $avg -ge 70 ] 
 then 
         echo "Grade           : B" 
 elif [ $avg -ge 60 ] 
 then 
         echo "Grade           : C" 
 elif [ $avg -ge 50 ] 
 then 
         echo "Grade           : D" 
 elif [ $avg -ge 35 ] 
 then 
         echo "Grade           : E" 
 fi 
else 
 echo "Result          : Fail" 
fi 
echo ----------------------------------- 