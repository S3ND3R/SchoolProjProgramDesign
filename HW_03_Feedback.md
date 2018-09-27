### Feedback for Homework 03

Run on September 27, 10:32:37 AM.


#### System Files and HW Directory Structure

+ Pass: Check that directory "/lhome/gitbot/umn-csci-3081-F18/grading-scripts/_hw_materials" exists.

+ Pass: Check that directory "/lhome/gitbot/umn-csci-3081-F18/grading-scripts/_hw_materials/googletest" exists.

+ Pass: Check that directory "/lhome/gitbot/umn-csci-3081-F18/grading-scripts/_hw_materials/HW03" exists.

+ Pass: Check that directory "HW" exists.

+ Pass: Check that directory "HW/HW03" exists.

+ Pass: Change into directory "HW/HW03".


#### Test that code compiles and creates the exectuable

+ Pass: Check that make compiles.

    Make compiles with no errors.



+ Pass: Check that file "date" exists.

+ Fail: Execute program

    Could not complete.
 ... A set of Dates ... 
default date is: January 1, 1900
date d2 is: April 19, 1998
date d3 is: April 19, 1998
 ... Now print out 4 dates in reverse time order ... 
date is: January 1, 1993
date is: January 1, 1992
date is: January 1, 1991
date is: January 1, 1990
*** Error in `./date': free(): invalid next size (normal): 0x0000000001e8cc70 ***
======= Backtrace: =========
/lib/x86_64-linux-gnu/libc.so.6(+0x777e5)[0x7fcf929977e5]
/lib/x86_64-linux-gnu/libc.so.6(+0x8037a)[0x7fcf929a037a]
/lib/x86_64-linux-gnu/libc.so.6(cfree+0x4c)[0x7fcf929a453c]
/usr/lib/x86_64-linux-gnu/libstdc++.so.6(_ZNSt7__cxx1119basic_ostringstreamIcSt11char_traitsIcESaIcEED1Ev+0x3b)[0x7fcf9301330b]
./date[0x401cfa]
./date[0x40167b]
./date[0x40180c]
/lib/x86_64-linux-gnu/libc.so.6(__libc_start_main+0xf0)[0x7fcf92940830]
./date[0x401129]
======= Memory map: ========
00400000-00403000 r-xp 00000000 00:38 8386809                            /class/grades/Fall-2018/csci3081/student-repos/HW_03_Feedback/repo-weber767/HW/HW03/date
00602000-00603000 r--p 00002000 00:38 8386809                            /class/grades/Fall-2018/csci3081/student-repos/HW_03_Feedback/repo-weber767/HW/HW03/date
00603000-00604000 rw-p 00003000 00:38 8386809                            /class/grades/Fall-2018/csci3081/student-repos/HW_03_Feedback/repo-weber767/HW/HW03/date
01e7a000-01eac000 rw-p 00000000 00:00 0                                  [heap]
7fcf8c000000-7fcf8c021000 rw-p 00000000 00:00 0 
7fcf8c021000-7fcf90000000 ---p 00000000 00:00 0 
7fcf92617000-7fcf9271f000 r-xp 00000000 08:01 523284                     /lib/x86_64-linux-gnu/libm-2.23.so
7fcf9271f000-7fcf9291e000 ---p 00108000 08:01 523284                     /lib/x86_64-linux-gnu/libm-2.23.so
7fcf9291e000-7fcf9291f000 r--p 00107000 08:01 523284                     /lib/x86_64-linux-gnu/libm-2.23.so
7fcf9291f000-7fcf92920000 rw-p 00108000 08:01 523284                     /lib/x86_64-linux-gnu/libm-2.23.so
7fcf92920000-7fcf92ae0000 r-xp 00000000 08:01 523292                     /lib/x86_64-linux-gnu/libc-2.23.so
7fcf92ae0000-7fcf92ce0000 ---p 001c0000 08:01 523292                     /lib/x86_64-linux-gnu/libc-2.23.so
7fcf92ce0000-7fcf92ce4000 r--p 001c0000 08:01 523292                     /lib/x86_64-linux-gnu/libc-2.23.so
7fcf92ce4000-7fcf92ce6000 rw-p 001c4000 08:01 523292                     /lib/x86_64-linux-gnu/libc-2.23.so
7fcf92ce6000-7fcf92cea000 rw-p 00000000 00:00 0 
7fcf92cea000-7fcf92d00000 r-xp 00000000 08:01 523330                     /lib/x86_64-linux-gnu/libgcc_s.so.1
7fcf92d00000-7fcf92eff000 ---p 00016000 08:01 523330                     /lib/x86_64-linux-gnu/libgcc_s.so.1
7fcf92eff000-7fcf92f00000 rw-p 00015000 08:01 523330                     /lib/x86_64-linux-gnu/libgcc_s.so.1
7fcf92f00000-7fcf93072000 r-xp 00000000 fc:00 1715834                    /usr/lib/x86_64-linux-gnu/libstdc++.so.6.0.21
7fcf93072000-7fcf93272000 ---p 00172000 fc:00 1715834                    /usr/lib/x86_64-linux-gnu/libstdc++.so.6.0.21
7fcf93272000-7fcf9327c000 r--p 00172000 fc:00 1715834                    /usr/lib/x86_64-linux-gnu/libstdc++.so.6.0.21
7fcf9327c000-7fcf9327e000 rw-p 0017c000 fc:00 1715834                    /usr/lib/x86_64-linux-gnu/libstdc++.so.6.0.21
7fcf9327e000-7fcf93282000 rw-p 00000000 00:00 0 
7fcf93282000-7fcf932a8000 r-xp 00000000 08:01 523286                     /lib/x86_64-linux-gnu/ld-2.23.so
7fcf9344b000-7fcf93451000 rw-p 00000000 00:00 0 
7fcf934a6000-7fcf934a7000 rw-p 00000000 00:00 0 
7fcf934a7000-7fcf934a8000 r--p 00025000 08:01 523286                     /lib/x86_64-linux-gnu/ld-2.23.so
7fcf934a8000-7fcf934a9000 rw-p 00026000 08:01 523286                     /lib/x86_64-linux-gnu/ld-2.23.so
7fcf934a9000-7fcf934aa000 rw-p 00000000 00:00 0 
7ffc22439000-7ffc2245b000 rw-p 00000000 00:00 0                          [stack]
7ffc22469000-7ffc2246c000 r--p 00000000 00:00 0                          [vvar]
7ffc2246c000-7ffc2246e000 r-xp 00000000 00:00 0                          [vdso]
ffffffffff600000-ffffffffff601000 r-xp 00000000 00:00 0                  [vsyscall]




+ Skip: Check for correct output.

  This test was not run because of an earlier failing test.

