### Feedback for Project Iteration 02

Run on November 28, 09:10:03 AM.


#### System Files and PROJ Directory Structure

+ Pass: Check that directory "/lhome/gitbot/umn-csci-3081-F18/grading-scripts/_proj_materials" exists.

+ Pass: Check that directory "PROJ" exists.

+ Pass: Check that directory "PROJ/src/imagetools" exists.

+ Pass: Check that file "PROJ/src/imagetools/color_data.h" exists.

+ Pass: Check that file "PROJ/src/imagetools/Makefile" exists.


#### Set up cpplint

+ Pass: Copy directory "cpplint".



+ Pass: Check that directory "cpplint" exists.


#### Set up Project

+ Pass: Change into directory "PROJ".

+ Pass: Copy directory "Copy Project Files".



+ Pass: Starting with clean project.



+ Pass: Copy directory "Copy Project Files".



+ Pass: Setup grading environment.



+ Pass: Copy directory "Copy Dependencies".



+ Pass: Copy directory "Copy Dependencies".



+ Pass: Setup grading environment.



+ Pass: Check that file "./src/mia/image_editor_commands.cc" exists.

+ Fail: Ensuring code follows style guide.

<pre>cd src/flashphoto; make check-style
make[1]: Entering directory '/class/grades/Fall-2018/csci3081/student-repos/PROJ_02_Feedback/repo-weber767/PROJ/src/flashphoto'
==== Checking style is correct ====
/class/grades/Fall-2018/csci3081/student-repos/PROJ_02_Feedback/repo-weber767/cpplint/cpplint.py --root=.. *.cc *.h
flashphoto_app.cc:294:  Should have a space between // and comment  [whitespace/comments] [4]
flashphoto_app.h:109:  Lines should be <= 80 characters long  [whitespace/line_length] [2]
flashphoto_app.h:111:  Lines should be <= 80 characters long  [whitespace/line_length] [2]
flashphoto_app.h:148:  Lines should be <= 80 characters long  [whitespace/line_length] [2]
flashphoto_app.h:157:  Lines should be <= 80 characters long  [whitespace/line_length] [2]
flashphoto_app.h:161:  Lines should be <= 80 characters long  [whitespace/line_length] [2]
flashphoto_app.h:165:  Lines should be <= 80 characters long  [whitespace/line_length] [2]
flashphoto_app.h:170:  Lines should be <= 80 characters long  [whitespace/line_length] [2]
flashphoto_app.h:184:  Lines should be <= 80 characters long  [whitespace/line_length] [2]
Done processing flashphoto_app.cc
Done processing main.cc
Done processing flashphoto_app.h
Total errors found: 9
Makefile:156: recipe for target 'check-style' failed
make[1]: *** [check-style] Error 1
make[1]: Leaving directory '/class/grades/Fall-2018/csci3081/student-repos/PROJ_02_Feedback/repo-weber767/PROJ/src/flashphoto'
Makefile:4: recipe for target 'check-style' failed
make: *** [check-style] Error 2
</pre>



+ Pass: Check that make compiles.



+ Pass: Check that file "./build/lib/libimagetools.a" exists.

+ Pass: Check that file "./build/bin/flashphoto" exists.

+ Pass: Check that file "./build/bin/mia" exists.


#### Run Student Tests

+ Pass: Check that file "./build/test/gtests" exists.

+ Pass: Running Student Tests.



