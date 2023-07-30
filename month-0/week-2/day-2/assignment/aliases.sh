#!/bin/bash 

# Create a shell script that helps us to add, commit and push without using any of the following:
# git add .
# git commit -m "message"
#  git push


[alias]

	kelvin = "!f() { git add -A && git commit -m "$@" && git push; }; f"
