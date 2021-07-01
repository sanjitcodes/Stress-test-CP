# contibuted by - SANJIT ANAND 

set -e
# g++ yo.cpp -o yo
# g++ generator.cpp -o generator
# g++ brute.cpp -o brute

#!/bin/bash
RED='\033[1;31m'
GREEN='\033[1;32m'
CLR='\033[0m'

# You may use your own compilation command with suitable flags

g++-10 -std=c++17 -Wno-unused-result -Wshadow -Wall -o brute brute.cpp -fsanitize=address -fsanitize=undefined
g++-10 -std=c++17 -Wno-unused-result -Wshadow -Wall -o yo yo.cpp -fsanitize=address -fsanitize=undefined
g++-10 -std=c++17 -Wno-unused-result -Wshadow -Wall -o generator generator.cpp -fsanitize=address -fsanitize=undefined

for((i = 1; ; ++i)); do
    ./generator $i > in
    ./yo < in > out1
    ./brute < in > out2
    diff -w out1 out2 || break
    echo "${GREEN}Test $i passed (ok) ${CLR}"
done
echo "${RED}Wrong Answer on test $i : ${CLR}"
cat in