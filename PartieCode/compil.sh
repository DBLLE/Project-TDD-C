#!/bin/bash


OPTIONS="-O3 -Werror -std=c89"
OUTPUT="-o nomfichier"
INPUT="nomfichier.c"
LIBRARIES="-lcunit"
gcc $OPTIONS $OUTPUT $INPUT $LIBRARIES