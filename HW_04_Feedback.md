### Feedback for Homework 04

Run on October 08, 13:58:13 PM.


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
./date_unittest.cc: In member function ‘virtual void DateTest_PrintDateUsTestsWithoutNewline_Test::TestBody()’:
./date_unittest.cc:133:23: error: ‘to_string’ is not a member of ‘std’
   std::string date =  std::to_string(month) + "-" + std::to_string(day) + "-"
                       ^
./date_unittest.cc:133:53: error: ‘to_string’ is not a member of ‘std’
   std::string date =  std::to_string(month) + "-" + std::to_string(day) + "-"
                                                     ^
./date_unittest.cc:134:27: error: ‘to_string’ is not a member of ‘std’
                         + std::to_string(year);
                           ^
./date_unittest.cc: In member function ‘virtual void DateTest_ConstructorVoidTests_Test::TestBody()’:
./date_unittest.cc:245:20: error: ‘to_string’ is not a member of ‘std’
    day_str = "0" + std::to_string(day);
                    ^
./date_unittest.cc:247:13: error: ‘to_string’ is not a member of ‘std’
   day_str = std::to_string(day);
             ^
./date_unittest.cc:250:22: error: ‘to_string’ is not a member of ‘std’
    month_str = "0" + std::to_string(month);
                      ^
./date_unittest.cc:252:15: error: ‘to_string’ is not a member of ‘std’
   month_str = std::to_string(month);  
               ^
./date_unittest.cc:255:49: error: ‘to_string’ is not a member of ‘std’
   curr_date = month_str + "-" + day_str + "-" + std::to_string(year);
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

