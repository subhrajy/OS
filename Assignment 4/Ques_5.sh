read -p "Enter two numbers - " num1 num2

temp=$num1

if [[ $num2 -lt $temp ]]
then
    temp=$num2
fi

while [ $temp -ne 0 ]
do
    x=`expr $num1 % $temp`
    y=`expr $num2 % $temp`

    if [ $x -eq 0 -a $y -eq 0 ]
    then
        echo "gcd is $temp"
        break
    fi

    temp=`expr $temp - 1`
done
