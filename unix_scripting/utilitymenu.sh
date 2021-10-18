#!/bin/bash
# utilitymenu.sh - A sample shell script to display menus on screen

#install whiptail to use this script

# get text editor or fall back to vi_editor
vi_editor=${EDITOR-vi}


display_output(){
 local h=${1-10} # box height default 10
 local w=${2-41} # box width default 41
 local t=${3} # box title 
  o=${out%.*}
 whiptail --backtitle "Linux Shell Script Tutorial" --title "${t}" --clear --msgbox "${o}" ${h} ${w}
}

show_date(){
 echo "Today is $(date) @ $(hostname -f)." >output.txt
 out=`cat output.txt`
 display_output 7 65 "Date_and_Time" $out
}

show_calendar(){
 cal >output.txt
 out=`cat output.txt`
 display_output 19 26 "Calendar" $out
}

while true
do

    whiptail --clear  --backtitle "Linux Shell Script Tutorial" \
   --title "[ M A I N - M E N U ]" \
   --menu "You can use the UP/DOWN arrow keys, the first\n \
letter of the choice as a hot key, or the \n\
number keys 1-9 to choose an option.\n\
Choose the TASK" 15 50 4 \
   Date/time "Displays date and time" \
   Calendar "Displays a calendar" \
   Editor "Start a text editor" \
   Exit "Exit to the shell" 2>input.txt

   menuitem=`cat input.txt`

   case $menuitem in
        Date/time) show_date;;
        Calendar) show_calendar;;
        Editor) $vi_editor;;
 	Exit) echo "Bye"; break;;
    esac
done

# deleing the temp files
rm input.txt
rm output.txt
