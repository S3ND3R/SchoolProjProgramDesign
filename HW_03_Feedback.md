### Feedback for Homework 03

Run on September 28, 09:47:36 AM.


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
*** Error in `./date': free(): invalid next size (normal): 0x00000000014e6c70 ***
======= Backtrace: =========
/lib/x86_64-linux-gnu/libc.so.6(+0x777e5)[0x7f73939457e5]
/lib/x86_64-linux-gnu/libc.so.6(+0x8037a)[0x7f739394e37a]
/lib/x86_64-linux-gnu/libc.so.6(cfree+0x4c)[0x7f739395253c]
/usr/lib/x86_64-linux-gnu/libstdc++.so.6(_ZNSt7__cxx1119basic_ostringstreamIcSt11char_traitsIcESaIcEED1Ev+0x3b)[0x7f7393fc130b]
./date[0x401cfa]
./date[0x40167b]
./date[0x40180c]
/lib/x86_64-linux-gnu/libc.so.6(__libc_start_main+0xf0)[0x7f73938ee830]
./date[0x401129]
======= Memory map: ========
00400000-00403000 r-xp 00000000 00:38 8457815                            /class/grades/Fall-2018/csci3081/student-repos/HW_03_Feedback/repo-weber767/HW/HW03/date
00602000-00603000 r--p 00002000 00:38 8457815                            /class/grades/Fall-2018/csci3081/student-repos/HW_03_Feedback/repo-weber767/HW/HW03/date
00603000-00604000 rw-p 00003000 00:38 8457815                            /class/grades/Fall-2018/csci3081/student-repos/HW_03_Feedback/repo-weber767/HW/HW03/date
014d4000-01506000 rw-p 00000000 00:00 0                                  [heap]
7f738c000000-7f738c021000 rw-p 00000000 00:00 0 
7f738c021000-7f7390000000 ---p 00000000 00:00 0 
7f73935c5000-7f73936cd000 r-xp 00000000 08:01 523284                     /lib/x86_64-linux-gnu/libm-2.23.so
7f73936cd000-7f73938cc000 ---p 00108000 08:01 523284                     /lib/x86_64-linux-gnu/libm-2.23.so
7f73938cc000-7f73938cd000 r--p 00107000 08:01 523284                     /lib/x86_64-linux-gnu/libm-2.23.so
7f73938cd000-7f73938ce000 rw-p 00108000 08:01 523284                     /lib/x86_64-linux-gnu/libm-2.23.so
7f73938ce000-7f7393a8e000 r-xp 00000000 08:01 523292                     /lib/x86_64-linux-gnu/libc-2.23.so
7f7393a8e000-7f7393c8e000 ---p 001c0000 08:01 523292                     /lib/x86_64-linux-gnu/libc-2.23.so
7f7393c8e000-7f7393c92000 r--p 001c0000 08:01 523292                     /lib/x86_64-linux-gnu/libc-2.23.so
7f7393c92000-7f7393c94000 rw-p 001c4000 08:01 523292                     /lib/x86_64-linux-gnu/libc-2.23.so
7f7393c94000-7f7393c98000 rw-p 00000000 00:00 0 
7f7393c98000-7f7393cae000 r-xp 00000000 08:01 523330                     /lib/x86_64-linux-gnu/libgcc_s.so.1
7f7393cae000-7f7393ead000 ---p 00016000 08:01 523330                     /lib/x86_64-linux-gnu/libgcc_s.so.1
7f7393ead000-7f7393eae000 rw-p 00015000 08:01 523330                     /lib/x86_64-linux-gnu/libgcc_s.so.1
7f7393eae000-7f7394020000 r-xp 00000000 fc:00 1715834                    /usr/lib/x86_64-linux-gnu/libstdc++.so.6.0.21
7f7394020000-7f7394220000 ---p 00172000 fc:00 1715834                    /usr/lib/x86_64-linux-gnu/libstdc++.so.6.0.21
7f7394220000-7f739422a000 r--p 00172000 fc:00 1715834                    /usr/lib/x86_64-linux-gnu/libstdc++.so.6.0.21
7f739422a000-7f739422c000 rw-p 0017c000 fc:00 1715834                    /usr/lib/x86_64-linux-gnu/libstdc++.so.6.0.21
7f739422c000-7f7394230000 rw-p 00000000 00:00 0 
7f7394230000-7f7394256000 r-xp 00000000 08:01 523286                     /lib/x86_64-linux-gnu/ld-2.23.so
7f73943f9000-7f73943ff000 rw-p 00000000 00:00 0 
7f7394454000-7f7394455000 rw-p 00000000 00:00 0 
7f7394455000-7f7394456000 r--p 00025000 08:01 523286                     /lib/x86_64-linux-gnu/ld-2.23.so
7f7394456000-7f7394457000 rw-p 00026000 08:01 523286                     /lib/x86_64-linux-gnu/ld-2.23.so
7f7394457000-7f7394458000 rw-p 00000000 00:00 0 
7ffefbc3a000-7ffefbc5c000 rw-p 00000000 00:00 0                          [stack]
7ffefbcb6000-7ffefbcb9000 r--p 00000000 00:00 0                          [vvar]
7ffefbcb9000-7ffefbcbb000 r-xp 00000000 00:00 0                          [vdso]
ffffffffff600000-ffffffffff601000 r-xp 00000000 00:00 0                  [vsyscall]




+ Skip: Check for correct output.

  This test was not run because of an earlier failing test.

