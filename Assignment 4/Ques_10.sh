read -p "Enter number of terms of the series - " terms

a=0
b=1

echo "series is - "

for ((i = 0; i < terms; i++))
do
    echo "$a"
    temp=`expr $a + $b`
    a=$b
    b=$temp
done
