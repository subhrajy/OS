read -p "Enter n - " n
s=1
i=2

while [ $i -le $n ]
do
    d=`echo "scale=3; 1/$i" | bc`
    s=`echo "scale=3; $s+$d" | bc`
    i=`expr $i + 1`
done
echo "Sum of sequence is $s"
