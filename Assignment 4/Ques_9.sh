read -p "Enter a number to find factorial - " number

temp=1

while [ $number -ne 0 ]
do
    temp=`expr $temp \* $number`
    number=`expr $number - 1`
done

echo $temp
