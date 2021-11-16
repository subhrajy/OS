
read -p "Enter name: " name
read -p "Enter roll number: " roll

echo "Enter four subject marks:"
read s1; read s2; read s3; read s4

list="$s1 $s2 $s3 $s4"

echo "\n"

for i in $list
do
	case $i in
		9[0-9]|100) echo "O";;
		8[0-9]) echo "E";;
		7[0-9]) echo "A";;
		6[0-9]) echo "B";;
		5[0-9]) echo "C";;
		*) echo "Fail";;
	esac
done
