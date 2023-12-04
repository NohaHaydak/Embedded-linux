#! /bin/bash

echo "the hostname is $HOSTNAME"
echo "the username is $(whoami)"

if [ $# -eq 0 ]; then
	echo "Usage: $0 <key>"
	exit 1
fi

key=$(echo "$1" | tr -d '[:space:]')

value=$(grep -E "^$key=" "config.ini" | cut -d '=' -f 2)

if [ -n "$value" ]; then 
	echo "$key = $value"
else
	echo "error: key '$key' not present."
fi

