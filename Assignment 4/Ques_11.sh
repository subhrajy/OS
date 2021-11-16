read -p "Enter the number - " num
read -p "Enter the digit - " dig

count=0

while [ $num -ne 0 ]
do
    temp=`expr $num % 10`

    if [ $dig -eq $temp ]
    then
        count=`expr $count + 1`
    fi

    num=`expr $num / 10`
done

echo "$dig found $count times in the number"
