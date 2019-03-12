#!/usr/bin/env bash
filename=$1
if [ -e $filename ]; then
    rm $filename
fi 
touch $filename
echo "Gebruikersnaam [d=whoami]: "
read name
if [ -z "$name" ]
then
      name="whoami"
fi
while [ $pass1 != $pass2 ]; do
	echo "Wachtwoord:"
	read pass1
	echo "Herhaal wachtwoord"
	read pass2
done	

touch $filename
echo $name >> $filename
md5sum <<< "$pass1" | xargs echo -n >> $filename