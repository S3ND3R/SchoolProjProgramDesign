### Feedback for Homework 03

Run on September 28, 09:56:17 AM.


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
*** Error in `./date': free(): invalid next size (normal): 0x0000000000f1ec70 ***
======= Backtrace: =========
/lib/x86_64-linux-gnu/libc.so.6(+0x777e5)[0x7f549d5e97e5]
/lib/x86_64-linux-gnu/libc.so.6(+0x8037a)[0x7f549d5f237a]
/lib/x86_64-linux-gnu/libc.so.6(cfree+0x4c)[0x7f549d5f653c]
/usr/lib/x86_64-linux-gnu/libstdc++.so.6(_ZNSt7__cxx1119basic_ostringstreamIcSt11char_traitsIcESaIcEED1Ev+0x3b)[0x7f549dc6530b]
./date[0x401d06]
./date[0x401687]
./date[0x401818]
/lib/x86_64-linux-gnu/libc.so.6(__libc_start_main+0xf0)[0x7f549d592830]
./date[0x401129]
======= Memory map: ========
00400000-00403000 r-xp 00000000 00:38 8458180                            /class/grades/Fall-2018/csci3081/student-repos/HW_03_Feedback/repo-weber767/HW/HW03/date
00602000-00603000 r--p 00002000 00:38 8458180                            /class/grades/Fall-2018/csci3081/student-repos/HW_03_Feedback/repo-weber767/HW/HW03/date
00603000-00604000 rw-p 00003000 00:38 8458180                            /class/grades/Fall-2018/csci3081/student-repos/HW_03_Feedback/repo-weber767/HW/HW03/date
00f0c000-00f3e000 rw-p 00000000 00:00 0                                  [heap]
7f5498000000-7f5498021000 rw-p 00000000 00:00 0 
7f5498021000-7f549c000000 ---p 00000000 00:00 0 
7f549d269000-7f549d371000 r-xp 00000000 08:01 523284                     /lib/x86_64-linux-gnu/libm-2.23.so
7f549d371000-7f549d570000 ---p 00108000 08:01 523284                     /lib/x86_64-linux-gnu/libm-2.23.so
7f549d570000-7f549d571000 r--p 00107000 08:01 523284                     /lib/x86_64-linux-gnu/libm-2.23.so
7f549d571000-7f549d572000 rw-p 00108000 08:01 523284                     /lib/x86_64-linux-gnu/libm-2.23.so
7f549d572000-7f549d732000 r-xp 00000000 08:01 523292                     /lib/x86_64-linux-gnu/libc-2.23.so
7f549d732000-7f549d932000 ---p 001c0000 08:01 523292                     /lib/x86_64-linux-gnu/libc-2.23.so
7f549d932000-7f549d936000 r--p 001c0000 08:01 523292                     /lib/x86_64-linux-gnu/libc-2.23.so
7f549d936000-7f549d938000 rw-p 001c4000 08:01 523292                     /lib/x86_64-linux-gnu/libc-2.23.so
7f549d938000-7f549d93c000 rw-p 00000000 00:00 0 
7f549d93c000-7f549d952000 r-xp 00000000 08:01 523330                     /lib/x86_64-linux-gnu/libgcc_s.so.1
7f549d952000-7f549db51000 ---p 00016000 08:01 523330                     /lib/x86_64-linux-gnu/libgcc_s.so.1
7f549db51000-7f549db52000 rw-p 00015000 08:01 523330                     /lib/x86_64-linux-gnu/libgcc_s.so.1
7f549db52000-7f549dcc4000 r-xp 00000000 fc:00 1715834                    /usr/lib/x86_64-linux-gnu/libstdc++.so.6.0.21
7f549dcc4000-7f549dec4000 ---p 00172000 fc:00 1715834                    /usr/lib/x86_64-linux-gnu/libstdc++.so.6.0.21
7f549dec4000-7f549dece000 r--p 00172000 fc:00 1715834                    /usr/lib/x86_64-linux-gnu/libstdc++.so.6.0.21
7f549dece000-7f549ded0000 rw-p 0017c000 fc:00 1715834                    /usr/lib/x86_64-linux-gnu/libstdc++.so.6.0.21
7f549ded0000-7f549ded4000 rw-p 00000000 00:00 0 
7f549ded4000-7f549defa000 r-xp 00000000 08:01 523286                     /lib/x86_64-linux-gnu/ld-2.23.so
7f549e09d000-7f549e0a3000 rw-p 00000000 00:00 0 
7f549e0f8000-7f549e0f9000 rw-p 00000000 00:00 0 
7f549e0f9000-7f549e0fa000 r--p 00025000 08:01 523286                     /lib/x86_64-linux-gnu/ld-2.23.so
7f549e0fa000-7f549e0fb000 rw-p 00026000 08:01 523286                     /lib/x86_64-linux-gnu/ld-2.23.so
7f549e0fb000-7f549e0fc000 rw-p 00000000 00:00 0 
7ffddf519000-7ffddf53b000 rw-p 00000000 00:00 0                          [stack]
7ffddf5b4000-7ffddf5b7000 r--p 00000000 00:00 0                          [vvar]
7ffddf5b7000-7ffddf5b9000 r-xp 00000000 00:00 0                          [vdso]
ffffffffff600000-ffffffffff601000 r-xp 00000000 00:00 0                  [vsyscall]




+ Skip: Check for correct output.

  This test was not run because of an earlier failing test.

