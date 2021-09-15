#!/bin/bash

PROGRAM=./megaphone

GREEN="\033[32m"
YELLOW="\033[0;33m"
RED="\033[0;31m"
BLUE="\033[0;34m"
MUTED="\033[1;30m"
RESET="\033[0m"
BOLD="\033[1m"

run()
{
	echo -en "\n --- TESTE $1 => "
	OUTPUT=`$PROGRAM $2`
	if [ "$OUTPUT" != "$3" ];
		then
		echo -e "${RED}Fail${RESET} --- "
	else
		echo -e "${GREEN}Success${RESET} --- "
	fi
	echo -e "${YELLOW}${PROGRAM}${RESET} $2"
	echo -e "${YELLOW}output: ${RESET} $OUTPUT"
}

run 1 "" "* LOUD AND UNBEARABLE FEEDBACK NOISE *"
run 2 "shhhhh... I think the students are asleep..."\
	"SHHHHH... I THINK THE STUDENTS ARE ASLEEP..."

echo -en "\n --- TESTE 3 => "
OUTPUT=`$PROGRAM Damnit " ! " "Sorry students, I thought this thing was off."`
TARGET="DAMNIT  !  SORRY STUDENTS, I THOUGHT THIS THING WAS OFF."
if [ "$OUTPUT" != "$TARGET" ];
	then
	echo -e "${RED}Fail${RESET} --- "
else
	echo -e "${GREEN}Success${RESET} --- "
fi
echo -e "${YELLOW}${PROGRAM}${RESET} $OUTPUT"
echo -e "${YELLOW}output: ${RESET} $OUTPUT"
