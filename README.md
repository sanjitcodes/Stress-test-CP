# Stress-test-CP
This tool generates `infinite` test cases and runs it against the brute force and optimized code (the one to be submit on Online Judge). It will stop when the outputs of both the code differs, or if the optimized code is correct, you may `manually stop` after n test cases as per your wish.

## Requirements
1. g++ compiler `(here g++10 with c++17)`
2. text editor `(here Sublime Text 3)`
3. OS : macOS/Linux/Ubuntu `(here macOS)`

`P.S. I don't know whether it will work on Windows or not :P. If it does, ping me or just create a new issue in this repo.`

## How to use?
1. Download this repository.
2. In the terminal shell, navigate to the directory of this folder.
3. Add your brute force solution (which gives 100% correct result) in the `brute.cpp` file.
4. Add your solution against which you want to check the testcases, in the `yo.cpp` file.
5. (Only once during setup) Open the script.sh file in the text editor, and update your compilation commands as per your convenience and version for all the three cpp files on lines `15, 16 and 17` namely brute.cpp, yo.cpp and generator.cpp.
   
   My cpp compilation command -
   
   `g++-10 -std=c++17 -Wno-unused-result -Wshadow -Wall -o <file_name> <file_name>.cpp -fsanitize=address -fsanitize=undefined`

6. Write the code in the generator.cpp file to generate suitable test case, as per in the problem. 
   
7. Now, in the terminal shell, run the following commands -

   `$ chmod +x script.sh`         (Only the first time you use)
   
   `$ sh script.sh`               (Everytime you run the script)
   
8. Let it script run for atleast 200 test cases. If you encounter a Wrong Answer, the test case which gave the wrong answer will also be displayed, or you may see it in the file `in`. 
9. If your code runs successfully for more than 200 test cases, and you wish to `stop the process`, do

   `command + C` (for macOS)
   
   `control + C` (for Linux/Ubuntu) 
10. Finally, you may submit the solution of `yo.cpp` after you feel confident about it. :D
