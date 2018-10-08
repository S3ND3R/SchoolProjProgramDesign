### Feedback for Homework 04

Run on October 08, 14:39:14 PM.


#### System Files and HW Directory Structure

+ Pass: Check that directory "/lhome/gitbot/umn-csci-3081-F18/grading-scripts/_hw_materials" exists.

+ Pass: Check that directory "/lhome/gitbot/umn-csci-3081-F18/grading-scripts/_hw_materials/googletest" exists.

+ Pass: Check that directory "/lhome/gitbot/umn-csci-3081-F18/grading-scripts/_hw_materials/HW04" exists.

+ Pass: Check that directory "HW" exists.

+ Pass: Check that directory "HW/HW04" exists.

+ Pass: Make directory "HW04_Testing".

+ Pass: Change into directory "HW04_Testing".


#### Set up Google Test framework

+ Pass: Copy directory "Google Tests".




#### Essential Files Exist

+ Pass: Check that file "../HW/HW04/date_unittest.cc" exists.


#### Testing correct implementation

+ Pass: Copy directory "HW04 files.".



+ Pass: Copy directory "Files for correct version".



+ Pass: Change into directory "correct".

+ Fail: Check that make compiles.

    Make compile fails with errors:.
g++ -isystem ../../googletest/include -g -Wall -Wextra -pthread -c ./date.cc
g++ -isystem ../../googletest/include -g -Wall -Wextra -pthread -c ./date_unittest.cc
./date_unittest.cc: In member function ‘virtual void DateTest_ConstructorVoidTests_Test::TestBody()’:
./date_unittest.cc:233:25: error: ‘to_string’ is not a member of ‘std’
   std::string day_str = std::to_string(day);
                         ^
./date_unittest.cc:234:27: error: ‘to_string’ is not a member of ‘std’
   std::string month_str = std::to_string(month);
                           ^
./date_unittest.cc:235:26: error: ‘to_string’ is not a member of ‘std’
   std::string year_str = std::to_string(year);
                          ^
Makefile:85: recipe for target 'date_unittest.o' failed
make: *** [date_unittest.o] Error 1




+ Skip: Check that file "date_unittest" exists.

  This test was not run because of an earlier failing test.

+ Skip: Get all google tests.

  This test was not run because of an earlier failing test.


#### Testing Mutant 1 for failure

+ Skip: Abstract test class.

  This test was not run because of an earlier failing test.


#### Testing Mutant 2 for failure

+ Skip: Abstract test class.

  This test was not run because of an earlier failing test.


#### Testing Mutant 3 for failure

+ Skip: Abstract test class.

  This test was not run because of an earlier failing test.


#### Testing Mutant 4 for failure

+ Skip: Abstract test class.

  This test was not run because of an earlier failing test.


#### Testing Mutant 5 for failure

+ Skip: Abstract test class.

  This test was not run because of an earlier failing test.


#### Testing Mutant 6 for failure

+ Skip: Abstract test class.

  This test was not run because of an earlier failing test.


#### Testing Mutant 7 for failure

+ Skip: Abstract test class.

  This test was not run because of an earlier failing test.


#### Testing Mutant 8 for failure

+ Skip: Abstract test class.

  This test was not run because of an earlier failing test.


#### Testing Mutant 9 for failure

+ Skip: Abstract test class.

  This test was not run because of an earlier failing test.

