#!/bin/bash

# Create a simple while loop in bash that prints the numbers 1-20 to stdout.

# It should look like (stdout):

# Count: 1
# Count: 2
# ...
# Count: 20

i=1
countToTwenty() {
    while [ $i -le 20 ];do
        echo "Count: $i"
        ((i++))
    done
}

countToTwenty
