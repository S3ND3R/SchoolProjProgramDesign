### Feedback for Project Iteration 02

Run on November 21, 13:02:53 PM.


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



+ Fail: Check that make compiles.

    Make compile fails with errors:.
<pre>cd src/flashphoto; make -j
make[1]: Entering directory '/class/grades/Fall-2018/csci3081/student-repos/PROJ_02_Feedback/repo-weber767/PROJ/src/flashphoto'
==== Auto-Generating Dependencies for main.cc. ====
/soft/gcc/7.1.0/Linux_x86_64/bin/g++ -MM -MF /class/grades/Fall-2018/csci3081/student-repos/PROJ_02_Feedback/repo-weber767/PROJ/build/obj/flashphoto/main.d -MP -MT /class/grades/Fall-2018/csci3081/student-repos/PROJ_02_Feedback/repo-weber767/PROJ/build/obj/flashphoto/main.o -W -Werror -Wall -Wextra -fdiagnostics-color=always -Wfloat-equal -Wshadow -Wcast-align -Wcast-qual -Wformat=2 -Winit-self -Wlogical-op -Wmissing-declarations -Wmissing-include-dirs -Wredundant-decls -Wswitch-default -Wsuggest-override -Wstrict-null-sentinel -Wsign-promo -Wold-style-cast -Woverloaded-virtual -Wctor-dtor-privacy -Wno-old-style-cast -Wno-cast-align -g -std=c++14 -c -I.. -I. -I./.. -isystem/class/grades/Fall-2018/csci3081/student-repos/PROJ_02_Feedback/repo-weber767/PROJ/src/external/MinGfx/build/install/include -isystem/class/grades/Fall-2018/csci3081/student-repos/PROJ_02_Feedback/repo-weber767/PROJ/src/external/MinGfx/build/install/include/nanovg -isystem/class/grades/Fall-2018/csci3081/student-repos/PROJ_02_Feedback/repo-weber767/PROJ/src/external/MinGfx/build/install/include/MinGfx-1.0  main.cc
==== Auto-Generating Dependencies for flashphoto_app.cc. ====
/soft/gcc/7.1.0/Linux_x86_64/bin/g++ -MM -MF /class/grades/Fall-2018/csci3081/student-repos/PROJ_02_Feedback/repo-weber767/PROJ/build/obj/flashphoto/flashphoto_app.d -MP -MT /class/grades/Fall-2018/csci3081/student-repos/PROJ_02_Feedback/repo-weber767/PROJ/build/obj/flashphoto/flashphoto_app.o -W -Werror -Wall -Wextra -fdiagnostics-color=always -Wfloat-equal -Wshadow -Wcast-align -Wcast-qual -Wformat=2 -Winit-self -Wlogical-op -Wmissing-declarations -Wmissing-include-dirs -Wredundant-decls -Wswitch-default -Wsuggest-override -Wstrict-null-sentinel -Wsign-promo -Wold-style-cast -Woverloaded-virtual -Wctor-dtor-privacy -Wno-old-style-cast -Wno-cast-align -g -std=c++14 -c -I.. -I. -I./.. -isystem/class/grades/Fall-2018/csci3081/student-repos/PROJ_02_Feedback/repo-weber767/PROJ/src/external/MinGfx/build/install/include -isystem/class/grades/Fall-2018/csci3081/student-repos/PROJ_02_Feedback/repo-weber767/PROJ/src/external/MinGfx/build/install/include/nanovg -isystem/class/grades/Fall-2018/csci3081/student-repos/PROJ_02_Feedback/repo-weber767/PROJ/src/external/MinGfx/build/install/include/MinGfx-1.0  flashphoto_app.cc
==== Compiling main.cc into /class/grades/Fall-2018/csci3081/student-repos/PROJ_02_Feedback/repo-weber767/PROJ/build/obj/flashphoto/main.o. ====
/soft/gcc/7.1.0/Linux_x86_64/bin/g++ -fopenmp -W -Werror -Wall -Wextra -fdiagnostics-color=always -Wfloat-equal -Wshadow -Wcast-align -Wcast-qual -Wformat=2 -Winit-self -Wlogical-op -Wmissing-declarations -Wmissing-include-dirs -Wredundant-decls -Wswitch-default -Wsuggest-override -Wstrict-null-sentinel -Wsign-promo -Wold-style-cast -Woverloaded-virtual -Wctor-dtor-privacy -Wno-old-style-cast -Wno-cast-align -g -std=c++14 -c -I.. -I. -I./.. -isystem/class/grades/Fall-2018/csci3081/student-repos/PROJ_02_Feedback/repo-weber767/PROJ/src/external/MinGfx/build/install/include -isystem/class/grades/Fall-2018/csci3081/student-repos/PROJ_02_Feedback/repo-weber767/PROJ/src/external/MinGfx/build/install/include/nanovg -isystem/class/grades/Fall-2018/csci3081/student-repos/PROJ_02_Feedback/repo-weber767/PROJ/src/external/MinGfx/build/install/include/MinGfx-1.0   -c -fPIC -o  /class/grades/Fall-2018/csci3081/student-repos/PROJ_02_Feedback/repo-weber767/PROJ/build/obj/flashphoto/main.o main.cc
==== Compiling flashphoto_app.cc into /class/grades/Fall-2018/csci3081/student-repos/PROJ_02_Feedback/repo-weber767/PROJ/build/obj/flashphoto/flashphoto_app.o. ====
/soft/gcc/7.1.0/Linux_x86_64/bin/g++ -fopenmp -W -Werror -Wall -Wextra -fdiagnostics-color=always -Wfloat-equal -Wshadow -Wcast-align -Wcast-qual -Wformat=2 -Winit-self -Wlogical-op -Wmissing-declarations -Wmissing-include-dirs -Wredundant-decls -Wswitch-default -Wsuggest-override -Wstrict-null-sentinel -Wsign-promo -Wold-style-cast -Woverloaded-virtual -Wctor-dtor-privacy -Wno-old-style-cast -Wno-cast-align -g -std=c++14 -c -I.. -I. -I./.. -isystem/class/grades/Fall-2018/csci3081/student-repos/PROJ_02_Feedback/repo-weber767/PROJ/src/external/MinGfx/build/install/include -isystem/class/grades/Fall-2018/csci3081/student-repos/PROJ_02_Feedback/repo-weber767/PROJ/src/external/MinGfx/build/install/include/nanovg -isystem/class/grades/Fall-2018/csci3081/student-repos/PROJ_02_Feedback/repo-weber767/PROJ/src/external/MinGfx/build/install/include/MinGfx-1.0   -c -fPIC -o  /class/grades/Fall-2018/csci3081/student-repos/PROJ_02_Feedback/repo-weber767/PROJ/build/obj/flashphoto/flashphoto_app.o flashphoto_app.cc
==== Linking /class/grades/Fall-2018/csci3081/student-repos/PROJ_02_Feedback/repo-weber767/PROJ/build/bin/flashphoto. ====
/soft/gcc/7.1.0/Linux_x86_64/bin/g++ -fopenmp -L/class/grades/Fall-2018/csci3081/student-repos/PROJ_02_Feedback/repo-weber767/PROJ/build/lib -L/class/grades/Fall-2018/csci3081/student-repos/PROJ_02_Feedback/repo-weber767/PROJ/src/external/MinGfx/build/install/lib -L/class/grades/Fall-2018/csci3081/student-repos/PROJ_02_Feedback/repo-weber767/PROJ/src/external/MinGfx/build/install/lib/MinGfx-1.0 /class/grades/Fall-2018/csci3081/student-repos/PROJ_02_Feedback/repo-weber767/PROJ/build/obj/flashphoto/main.o /class/grades/Fall-2018/csci3081/student-repos/PROJ_02_Feedback/repo-weber767/PROJ/build/obj/flashphoto/flashphoto_app.o -o /class/grades/Fall-2018/csci3081/student-repos/PROJ_02_Feedback/repo-weber767/PROJ/build/bin/flashphoto -lMinGfxd -lnanogui -limagetools -Wl,-rpath,/class/grades/Fall-2018/csci3081/student-repos/PROJ_02_Feedback/repo-weber767/PROJ/src/external/MinGfx/build/install/lib -lglut -lGL -lGLU
/usr/bin/ld: cannot find -limagetools
collect2: error: ld returned 1 exit status
Makefile:152: recipe for target '/class/grades/Fall-2018/csci3081/student-repos/PROJ_02_Feedback/repo-weber767/PROJ/build/bin/flashphoto' failed
make[1]: *** [/class/grades/Fall-2018/csci3081/student-repos/PROJ_02_Feedback/repo-weber767/PROJ/build/bin/flashphoto] Error 1
make[1]: Leaving directory '/class/grades/Fall-2018/csci3081/student-repos/PROJ_02_Feedback/repo-weber767/PROJ/src/flashphoto'
Makefile:10: recipe for target 'flashphoto' failed
make: *** [flashphoto] Error 2
</pre>




#### Run Student Tests

+ Skip: Running Student Tests.

  This test was not run because of an earlier failing test.
