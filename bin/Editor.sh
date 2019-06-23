#!/usr/bin/env bash
if [[ $# -eq 0 ]]; then OPT1="-w -s"; fi
$(dirname $0)/CraftPlayer Scripts/Editor.as $OPT1 $@
