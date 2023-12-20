#!/bin/bash
if [ -f /home/noha/.bashrc ];
then 
echo "the .bashrc exists in home directory"
echo 'export HELLO=$HOSTNAME' >> "$HOME/.bashrc"
echo 'local=$(whoami)' >> "$HOME/.bashrc"
gnome-terminal
fi

