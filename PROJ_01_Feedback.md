### Feedback for Project Iteration 01

Run on November 05, 10:58:21 AM.


#### System Files and PROJ Directory Structure

+ Pass: Check that directory "/lhome/gitbot/umn-csci-3081-F18/grading-scripts/_proj_materials" exists.

+ Pass: Check that directory "PROJ" exists.


#### Set up cpplint

+ Pass: Copy directory "cpplint".



+ Pass: Check that directory "cpplint" exists.


#### Set up MinGfx

+ Pass: Copy directory "Copy Project Files".



+ Pass: Copy directory "Copy Dependencies".




#### Set up Project

+ Pass: Change into directory "PROJ".

+ Pass: Setup grading environment.



+ Pass: Copy directory "Copy Tests".



+ Fail: Ensuring code follows style guide.

<pre>cd src/flashphoto; make check-style
make[1]: Entering directory '/class/grades/Fall-2018/csci3081/student-repos/PROJ_01_Feedback/repo-weber767/PROJ/src/flashphoto'
==== Checking style is correct ====
/class/grades/Fall-2018/csci3081/student-repos/PROJ_01_Feedback/repo-weber767/cpplint/cpplint.py --root=.. *.cc *.h
color_data.cc:60:  Line ends in whitespace.  Consider deleting these extra spaces.  [whitespace/end_of_line] [4]
color_data.cc:66:  Line ends in whitespace.  Consider deleting these extra spaces.  [whitespace/end_of_line] [4]
color_data.cc:70:  Line ends in whitespace.  Consider deleting these extra spaces.  [whitespace/end_of_line] [4]
convolution_filter.cc:13:  Weird number of spaces at line-start.  Are you using a 2-space indent?  [whitespace/indent] [3]
convolution_filter.cc:20:  Weird number of spaces at line-start.  Are you using a 2-space indent?  [whitespace/indent] [3]
convolution_filter.cc:21:  Redundant blank line at the start of a code block should be deleted.  [whitespace/blank_line] [2]
convolution_filter.cc:21:  Redundant blank line at the end of a code block should be deleted.  [whitespace/blank_line] [3]
convolution_filter.cc:22:  Weird number of spaces at line-start.  Are you using a 2-space indent?  [whitespace/indent] [3]
convolution_filter.cc:25:  Weird number of spaces at line-start.  Are you using a 2-space indent?  [whitespace/indent] [3]
convolution_filter.cc:27:  Weird number of spaces at line-start.  Are you using a 2-space indent?  [whitespace/indent] [3]
convolution_filter.cc:28:  Weird number of spaces at line-start.  Are you using a 2-space indent?  [whitespace/indent] [3]
convolution_filter.cc:29:  Weird number of spaces at line-start.  Are you using a 2-space indent?  [whitespace/indent] [3]
convolution_filter.cc:30:  Weird number of spaces at line-start.  Are you using a 2-space indent?  [whitespace/indent] [3]
filter.cc:15:  Weird number of spaces at line-start.  Are you using a 2-space indent?  [whitespace/indent] [3]
filter.cc:16:  Weird number of spaces at line-start.  Are you using a 2-space indent?  [whitespace/indent] [3]
filter.cc:17:  Weird number of spaces at line-start.  Are you using a 2-space indent?  [whitespace/indent] [3]
filter.cc:18:  Weird number of spaces at line-start.  Are you using a 2-space indent?  [whitespace/indent] [3]
filter.cc:20:  Weird number of spaces at line-start.  Are you using a 2-space indent?  [whitespace/indent] [3]
filter.cc:24:  Weird number of spaces at line-start.  Are you using a 2-space indent?  [whitespace/indent] [3]
filter.cc:26:  Weird number of spaces at line-start.  Are you using a 2-space indent?  [whitespace/indent] [3]
filter.cc:27:  Weird number of spaces at line-start.  Are you using a 2-space indent?  [whitespace/indent] [3]
filter.cc:28:  Weird number of spaces at line-start.  Are you using a 2-space indent?  [whitespace/indent] [3]
filter.cc:28:  An else should appear on the same line as the preceding }  [whitespace/newline] [4]
filter.cc:28:  If an else has a brace on one side, it should have it on both  [readability/braces] [5]
filter.cc:32:  Weird number of spaces at line-start.  Are you using a 2-space indent?  [whitespace/indent] [3]
filter.cc:35:  Weird number of spaces at line-start.  Are you using a 2-space indent?  [whitespace/indent] [3]
filter.cc:38:  Weird number of spaces at line-start.  Are you using a 2-space indent?  [whitespace/indent] [3]
filter.cc:41:  You don't need a ; after a }  [readability/braces] [4]
filter.cc:42:  You don't need a ; after a }  [readability/braces] [4]
filter_channels.cc:15:  Missing space before {  [whitespace/braces] [5]
filter_channels.cc:16:  Missing space after ,  [whitespace/comma] [3]
filter_quantize.cc:11:  Found C system header after other header. Should be: filter_quantize.h, c system, c++ system, other.  [build/include_order] [4]
filter_quantize.cc:14:  Weird number of spaces at line-start.  Are you using a 2-space indent?  [whitespace/indent] [3]
filter_quantize.cc:15:  Missing space before {  [whitespace/braces] [5]
filter_quantize.cc:16:  Missing space after ,  [whitespace/comma] [3]
filter_quantize.cc:23:  Weird number of spaces at line-start.  Are you using a 2-space indent?  [whitespace/indent] [3]
filter_quantize.cc:24:  Should have a space between // and comment  [whitespace/comments] [4]
filter_saturate.cc:14:  Lines should be <= 80 characters long  [whitespace/line_length] [2]
filter_saturate.cc:16:  Weird number of spaces at line-start.  Are you using a 2-space indent?  [whitespace/indent] [3]
filter_saturate.cc:16:  Missing space after ,  [whitespace/comma] [3]
filter_saturate.cc:17:  Weird number of spaces at line-start.  Are you using a 2-space indent?  [whitespace/indent] [3]
filter_saturate.cc:18:  Weird number of spaces at line-start.  Are you using a 2-space indent?  [whitespace/indent] [3]
filter_saturate.cc:18:  Missing space after ,  [whitespace/comma] [3]
filter_saturate.cc:20:  Weird number of spaces at line-start.  Are you using a 2-space indent?  [whitespace/indent] [3]
filter_saturate.cc:20:  Missing space after ,  [whitespace/comma] [3]
filter_threshold.cc:16:  Weird number of spaces at line-start.  Are you using a 2-space indent?  [whitespace/indent] [3]
filter_threshold.cc:16:  Missing space after ,  [whitespace/comma] [3]
filter_threshold.cc:17:  Weird number of spaces at line-start.  Are you using a 2-space indent?  [whitespace/indent] [3]
filter_threshold.cc:17:  Missing space after ,  [whitespace/comma] [3]
filter_threshold.cc:18:  Weird number of spaces at line-start.  Are you using a 2-space indent?  [whitespace/indent] [3]
filter_threshold.cc:18:  Missing space after ,  [whitespace/comma] [3]
filter_threshold.cc:20:  Weird number of spaces at line-start.  Are you using a 2-space indent?  [whitespace/indent] [3]
flashphoto_app.cc:78:  Lines should be <= 80 characters long  [whitespace/line_length] [2]
pixel_buffer.cc:111:  Line ends in whitespace.  Consider deleting these extra spaces.  [whitespace/end_of_line] [4]
pixel_buffer.cc:112:  Line ends in whitespace.  Consider deleting these extra spaces.  [whitespace/end_of_line] [4]
pixel_buffer.cc:117:  An else should appear on the same line as the preceding }  [whitespace/newline] [4]
pixel_buffer.cc:117:  If an else has a brace on one side, it should have it on both  [readability/braces] [5]
pixel_buffer.cc:121:  Missing space after ,  [whitespace/comma] [3]
tool_blur.cc:23:  Missing username in TODO; it should look like "// TODO(my_username): Stuff."  [readability/todo] [2]
tool_blur.cc:24:  Line ends in whitespace.  Consider deleting these extra spaces.  [whitespace/end_of_line] [4]
tool_blur.cc:25:  Line ends in whitespace.  Consider deleting these extra spaces.  [whitespace/end_of_line] [4]
tool_blur.cc:26:  Line ends in whitespace.  Consider deleting these extra spaces.  [whitespace/end_of_line] [4]
tool_blur.cc:34:  Missing username in TODO; it should look like "// TODO(my_username): Stuff."  [readability/todo] [2]
tool_blur.cc:40:  Line ends in whitespace.  Consider deleting these extra spaces.  [whitespace/end_of_line] [4]
tool_blur.cc:42:  Missing username in TODO; it should look like "// TODO(my_username): Stuff."  [readability/todo] [2]
tool_blur.cc:48:  Missing space after ,  [whitespace/comma] [3]
tool_blur.cc:50:  Line ends in whitespace.  Consider deleting these extra spaces.  [whitespace/end_of_line] [4]
color_data.h:60:  Line ends in whitespace.  Consider deleting these extra spaces.  [whitespace/end_of_line] [4]
color_data.h:63:  Line ends in whitespace.  Consider deleting these extra spaces.  [whitespace/end_of_line] [4]
convolution_filter_blur.h:8:  #ifndef header guard has wrong style, please use: FLASHPHOTO_CONVOLUTION_FILTER_BLUR_H_  [build/header_guard] [5]
convolution_filter_blur.h:21:  #endif line should be "#endif  // FLASHPHOTO_CONVOLUTION_FILTER_BLUR_H_"  [build/header_guard] [5]
convolution_filter_blur.h:16:  Do not indent within a namespace  [runtime/indentation_namespace] [4]
convolution_filter_blur.h:16:  Weird number of spaces at line-start.  Are you using a 2-space indent?  [whitespace/indent] [3]
convolution_filter_blur.h:18:  Weird number of spaces at line-start.  Are you using a 2-space indent?  [whitespace/indent] [3]
convolution_filter.h:39:  Should have a space between // and comment  [whitespace/comments] [4]
filter_channels.h:18:  public: should be indented +1 space inside class FilterChannels  [whitespace/indent] [3]
filter_channels.h:19:  Weird number of spaces at line-start.  Are you using a 2-space indent?  [whitespace/indent] [3]
filter_channels.h:20:  Weird number of spaces at line-start.  Are you using a 2-space indent?  [whitespace/indent] [3]
filter_channels.h:21:  Weird number of spaces at line-start.  Are you using a 2-space indent?  [whitespace/indent] [3]
filter_channels.h:24:  Weird number of spaces at line-start.  Are you using a 2-space indent?  [whitespace/indent] [3]
filter_channels.h:28:  Weird number of spaces at line-start.  Are you using a 2-space indent?  [whitespace/indent] [3]
filter_channels.h:30:  private: should be indented +1 space inside class FilterChannels  [whitespace/indent] [3]
filter_quantize.h:18:  public: should be indented +1 space inside class FilterQuantize  [whitespace/indent] [3]
filter_quantize.h:19:  Weird number of spaces at line-start.  Are you using a 2-space indent?  [whitespace/indent] [3]
filter_quantize.h:20:  Weird number of spaces at line-start.  Are you using a 2-space indent?  [whitespace/indent] [3]
filter_quantize.h:21:  Weird number of spaces at line-start.  Are you using a 2-space indent?  [whitespace/indent] [3]
filter_quantize.h:24:  Weird number of spaces at line-start.  Are you using a 2-space indent?  [whitespace/indent] [3]
filter_quantize.h:26:  private: should be indented +1 space inside class FilterQuantize  [whitespace/indent] [3]
filter_saturate.h:31:  #endif line should be "#endif  // FLASHPHOTO_FILTER_SATURATE_H_"  [build/header_guard] [5]
filter_saturate.h:19:  Lines should be <= 80 characters long  [whitespace/line_length] [2]
filter_threshold.h:19:  Lines should be <= 80 characters long  [whitespace/line_length] [2]
flashphoto_app.h:38:  Should have a space between // and comment  [whitespace/comments] [4]
flashphoto_app.h:216:  Should have a space between // and comment  [whitespace/comments] [4]
mask_factory.h:34:  Redundant blank line at the end of a code block should be deleted.  [whitespace/blank_line] [3]
tool_blur.h:37:  Line ends in whitespace.  Consider deleting these extra spaces.  [whitespace/end_of_line] [4]
tool_blur.h:45:  Line ends in whitespace.  Consider deleting these extra spaces.  [whitespace/end_of_line] [4]
tool_blur.h:46:  Missing username in TODO; it should look like "// TODO(my_username): Stuff."  [readability/todo] [2]
Done processing color_data.cc
Done processing convolution_filter.cc
Done processing filter.cc
Done processing filter_channels.cc
Done processing filter_quantize.cc
Done processing filter_saturate.cc
Done processing filter_threshold.cc
Done processing flashphoto_app.cc
Done processing float_matrix.cc
Done processing main.cc
Done processing mask_factory.cc
Done processing pixel_buffer.cc
Done processing tool_blur.cc
Done processing tool_calligraphy_pen.cc
Done processing tool.cc
Done processing tool_chalk.cc
Done processing tool_eraser.cc
Done processing tool_highlighter.cc
Done processing tool_pen.cc
Done processing tool_spray_can.cc
Done processing color_data.h
Done processing convolution_filter_blur.h
Done processing convolution_filter.h
Done processing filter_channels.h
Done processing filter.h
Done processing filter_quantize.h
Done processing filter_saturate.h
Done processing filter_threshold.h
Done processing flashphoto_app.h
Done processing float_matrix.h
Done processing image_tools_math.h
Done processing mask_factory.h
Done processing pixel_buffer.h
Done processing tool_blur.h
Done processing tool_calligraphy_pen.h
Done processing tool_chalk.h
Done processing tool_eraser.h
Done processing tool.h
Done processing tool_highlighter.h
Done processing tool_pen.h
Done processing tool_spray_can.h
Total errors found: 97
Makefile:156: recipe for target 'check-style' failed
make[1]: *** [check-style] Error 1
make[1]: Leaving directory '/class/grades/Fall-2018/csci3081/student-repos/PROJ_01_Feedback/repo-weber767/PROJ/src/flashphoto'
Makefile:4: recipe for target 'check-style' failed
make: *** [check-style] Error 2
</pre>



+ Fail: Check that make compiles.

    Make compile fails with errors:.
<pre>cd src/flashphoto; make -j
make[1]: Entering directory '/class/grades/Fall-2018/csci3081/student-repos/PROJ_01_Feedback/repo-weber767/PROJ/src/flashphoto'
==== Auto-Generating Dependencies for tool_highlighter.cc. ====
/soft/gcc/7.1.0/Linux_x86_64/bin/g++ -MM -MF /class/grades/Fall-2018/csci3081/student-repos/PROJ_01_Feedback/repo-weber767/PROJ/build/obj/flashphoto/tool_highlighter.d -MP -MT /class/grades/Fall-2018/csci3081/student-repos/PROJ_01_Feedback/repo-weber767/PROJ/build/obj/flashphoto/tool_highlighter.o -W -Werror -Wall -Wextra -fdiagnostics-color=always -Wfloat-equal -Wshadow -Wcast-align -Wcast-qual -Wformat=2 -Winit-self -Wlogical-op -Wmissing-declarations -Wmissing-include-dirs -Wredundant-decls -Wswitch-default -Wsuggest-override -Wstrict-null-sentinel -Wsign-promo -Wold-style-cast -Woverloaded-virtual -Wctor-dtor-privacy -Wno-old-style-cast -Wno-cast-align -g -std=c++14 -c -I.. -I. -I./.. -isystem/class/grades/Fall-2018/csci3081/student-repos/PROJ_01_Feedback/repo-weber767/PROJ/src/external/MinGfx/build/install/include -isystem/class/grades/Fall-2018/csci3081/student-repos/PROJ_01_Feedback/repo-weber767/PROJ/src/external/MinGfx/build/install/include/nanovg -isystem/class/grades/Fall-2018/csci3081/student-repos/PROJ_01_Feedback/repo-weber767/PROJ/src/external/MinGfx/build/install/include/MinGfx-1.0 tool_highlighter.cc
==== Auto-Generating Dependencies for filter_threshold.cc. ====
/soft/gcc/7.1.0/Linux_x86_64/bin/g++ -MM -MF /class/grades/Fall-2018/csci3081/student-repos/PROJ_01_Feedback/repo-weber767/PROJ/build/obj/flashphoto/filter_threshold.d -MP -MT /class/grades/Fall-2018/csci3081/student-repos/PROJ_01_Feedback/repo-weber767/PROJ/build/obj/flashphoto/filter_threshold.o -W -Werror -Wall -Wextra -fdiagnostics-color=always -Wfloat-equal -Wshadow -Wcast-align -Wcast-qual -Wformat=2 -Winit-self -Wlogical-op -Wmissing-declarations -Wmissing-include-dirs -Wredundant-decls -Wswitch-default -Wsuggest-override -Wstrict-null-sentinel -Wsign-promo -Wold-style-cast -Woverloaded-virtual -Wctor-dtor-privacy -Wno-old-style-cast -Wno-cast-align -g -std=c++14 -c -I.. -I. -I./.. -isystem/class/grades/Fall-2018/csci3081/student-repos/PROJ_01_Feedback/repo-weber767/PROJ/src/external/MinGfx/build/install/include -isystem/class/grades/Fall-2018/csci3081/student-repos/PROJ_01_Feedback/repo-weber767/PROJ/src/external/MinGfx/build/install/include/nanovg -isystem/class/grades/Fall-2018/csci3081/student-repos/PROJ_01_Feedback/repo-weber767/PROJ/src/external/MinGfx/build/install/include/MinGfx-1.0 filter_threshold.cc
==== Auto-Generating Dependencies for filter_saturate.cc. ====
/soft/gcc/7.1.0/Linux_x86_64/bin/g++ -MM -MF /class/grades/Fall-2018/csci3081/student-repos/PROJ_01_Feedback/repo-weber767/PROJ/build/obj/flashphoto/filter_saturate.d -MP -MT /class/grades/Fall-2018/csci3081/student-repos/PROJ_01_Feedback/repo-weber767/PROJ/build/obj/flashphoto/filter_saturate.o -W -Werror -Wall -Wextra -fdiagnostics-color=always -Wfloat-equal -Wshadow -Wcast-align -Wcast-qual -Wformat=2 -Winit-self -Wlogical-op -Wmissing-declarations -Wmissing-include-dirs -Wredundant-decls -Wswitch-default -Wsuggest-override -Wstrict-null-sentinel -Wsign-promo -Wold-style-cast -Woverloaded-virtual -Wctor-dtor-privacy -Wno-old-style-cast -Wno-cast-align -g -std=c++14 -c -I.. -I. -I./.. -isystem/class/grades/Fall-2018/csci3081/student-repos/PROJ_01_Feedback/repo-weber767/PROJ/src/external/MinGfx/build/install/include -isystem/class/grades/Fall-2018/csci3081/student-repos/PROJ_01_Feedback/repo-weber767/PROJ/src/external/MinGfx/build/install/include/nanovg -isystem/class/grades/Fall-2018/csci3081/student-repos/PROJ_01_Feedback/repo-weber767/PROJ/src/external/MinGfx/build/install/include/MinGfx-1.0 filter_saturate.cc
==== Auto-Generating Dependencies for tool.cc. ====
/soft/gcc/7.1.0/Linux_x86_64/bin/g++ -MM -MF /class/grades/Fall-2018/csci3081/student-repos/PROJ_01_Feedback/repo-weber767/PROJ/build/obj/flashphoto/tool.d -MP -MT /class/grades/Fall-2018/csci3081/student-repos/PROJ_01_Feedback/repo-weber767/PROJ/build/obj/flashphoto/tool.o -W -Werror -Wall -Wextra -fdiagnostics-color=always -Wfloat-equal -Wshadow -Wcast-align -Wcast-qual -Wformat=2 -Winit-self -Wlogical-op -Wmissing-declarations -Wmissing-include-dirs -Wredundant-decls -Wswitch-default -Wsuggest-override -Wstrict-null-sentinel -Wsign-promo -Wold-style-cast -Woverloaded-virtual -Wctor-dtor-privacy -Wno-old-style-cast -Wno-cast-align -g -std=c++14 -c -I.. -I. -I./.. -isystem/class/grades/Fall-2018/csci3081/student-repos/PROJ_01_Feedback/repo-weber767/PROJ/src/external/MinGfx/build/install/include -isystem/class/grades/Fall-2018/csci3081/student-repos/PROJ_01_Feedback/repo-weber767/PROJ/src/external/MinGfx/build/install/include/nanovg -isystem/class/grades/Fall-2018/csci3081/student-repos/PROJ_01_Feedback/repo-weber767/PROJ/src/external/MinGfx/build/install/include/MinGfx-1.0 tool.cc
==== Auto-Generating Dependencies for tool_calligraphy_pen.cc. ====
/soft/gcc/7.1.0/Linux_x86_64/bin/g++ -MM -MF /class/grades/Fall-2018/csci3081/student-repos/PROJ_01_Feedback/repo-weber767/PROJ/build/obj/flashphoto/tool_calligraphy_pen.d -MP -MT /class/grades/Fall-2018/csci3081/student-repos/PROJ_01_Feedback/repo-weber767/PROJ/build/obj/flashphoto/tool_calligraphy_pen.o -W -Werror -Wall -Wextra -fdiagnostics-color=always -Wfloat-equal -Wshadow -Wcast-align -Wcast-qual -Wformat=2 -Winit-self -Wlogical-op -Wmissing-declarations -Wmissing-include-dirs -Wredundant-decls -Wswitch-default -Wsuggest-override -Wstrict-null-sentinel -Wsign-promo -Wold-style-cast -Woverloaded-virtual -Wctor-dtor-privacy -Wno-old-style-cast -Wno-cast-align -g -std=c++14 -c -I.. -I. -I./.. -isystem/class/grades/Fall-2018/csci3081/student-repos/PROJ_01_Feedback/repo-weber767/PROJ/src/external/MinGfx/build/install/include -isystem/class/grades/Fall-2018/csci3081/student-repos/PROJ_01_Feedback/repo-weber767/PROJ/src/external/MinGfx/build/install/include/nanovg -isystem/class/grades/Fall-2018/csci3081/student-repos/PROJ_01_Feedback/repo-weber767/PROJ/src/external/MinGfx/build/install/include/MinGfx-1.0 tool_calligraphy_pen.cc
==== Auto-Generating Dependencies for filter_channels.cc. ====
/soft/gcc/7.1.0/Linux_x86_64/bin/g++ -MM -MF /class/grades/Fall-2018/csci3081/student-repos/PROJ_01_Feedback/repo-weber767/PROJ/build/obj/flashphoto/filter_channels.d -MP -MT /class/grades/Fall-2018/csci3081/student-repos/PROJ_01_Feedback/repo-weber767/PROJ/build/obj/flashphoto/filter_channels.o -W -Werror -Wall -Wextra -fdiagnostics-color=always -Wfloat-equal -Wshadow -Wcast-align -Wcast-qual -Wformat=2 -Winit-self -Wlogical-op -Wmissing-declarations -Wmissing-include-dirs -Wredundant-decls -Wswitch-default -Wsuggest-override -Wstrict-null-sentinel -Wsign-promo -Wold-style-cast -Woverloaded-virtual -Wctor-dtor-privacy -Wno-old-style-cast -Wno-cast-align -g -std=c++14 -c -I.. -I. -I./.. -isystem/class/grades/Fall-2018/csci3081/student-repos/PROJ_01_Feedback/repo-weber767/PROJ/src/external/MinGfx/build/install/include -isystem/class/grades/Fall-2018/csci3081/student-repos/PROJ_01_Feedback/repo-weber767/PROJ/src/external/MinGfx/build/install/include/nanovg -isystem/class/grades/Fall-2018/csci3081/student-repos/PROJ_01_Feedback/repo-weber767/PROJ/src/external/MinGfx/build/install/include/MinGfx-1.0 filter_channels.cc
==== Auto-Generating Dependencies for filter.cc. ====
/soft/gcc/7.1.0/Linux_x86_64/bin/g++ -MM -MF /class/grades/Fall-2018/csci3081/student-repos/PROJ_01_Feedback/repo-weber767/PROJ/build/obj/flashphoto/filter.d -MP -MT /class/grades/Fall-2018/csci3081/student-repos/PROJ_01_Feedback/repo-weber767/PROJ/build/obj/flashphoto/filter.o -W -Werror -Wall -Wextra -fdiagnostics-color=always -Wfloat-equal -Wshadow -Wcast-align -Wcast-qual -Wformat=2 -Winit-self -Wlogical-op -Wmissing-declarations -Wmissing-include-dirs -Wredundant-decls -Wswitch-default -Wsuggest-override -Wstrict-null-sentinel -Wsign-promo -Wold-style-cast -Woverloaded-virtual -Wctor-dtor-privacy -Wno-old-style-cast -Wno-cast-align -g -std=c++14 -c -I.. -I. -I./.. -isystem/class/grades/Fall-2018/csci3081/student-repos/PROJ_01_Feedback/repo-weber767/PROJ/src/external/MinGfx/build/install/include -isystem/class/grades/Fall-2018/csci3081/student-repos/PROJ_01_Feedback/repo-weber767/PROJ/src/external/MinGfx/build/install/include/nanovg -isystem/class/grades/Fall-2018/csci3081/student-repos/PROJ_01_Feedback/repo-weber767/PROJ/src/external/MinGfx/build/install/include/MinGfx-1.0 filter.cc
==== Auto-Generating Dependencies for color_data.cc. ====
/soft/gcc/7.1.0/Linux_x86_64/bin/g++ -MM -MF /class/grades/Fall-2018/csci3081/student-repos/PROJ_01_Feedback/repo-weber767/PROJ/build/obj/flashphoto/color_data.d -MP -MT /class/grades/Fall-2018/csci3081/student-repos/PROJ_01_Feedback/repo-weber767/PROJ/build/obj/flashphoto/color_data.o -W -Werror -Wall -Wextra -fdiagnostics-color=always -Wfloat-equal -Wshadow -Wcast-align -Wcast-qual -Wformat=2 -Winit-self -Wlogical-op -Wmissing-declarations -Wmissing-include-dirs -Wredundant-decls -Wswitch-default -Wsuggest-override -Wstrict-null-sentinel -Wsign-promo -Wold-style-cast -Woverloaded-virtual -Wctor-dtor-privacy -Wno-old-style-cast -Wno-cast-align -g -std=c++14 -c -I.. -I. -I./.. -isystem/class/grades/Fall-2018/csci3081/student-repos/PROJ_01_Feedback/repo-weber767/PROJ/src/external/MinGfx/build/install/include -isystem/class/grades/Fall-2018/csci3081/student-repos/PROJ_01_Feedback/repo-weber767/PROJ/src/external/MinGfx/build/install/include/nanovg -isystem/class/grades/Fall-2018/csci3081/student-repos/PROJ_01_Feedback/repo-weber767/PROJ/src/external/MinGfx/build/install/include/MinGfx-1.0 color_data.cc
==== Auto-Generating Dependencies for convolution_filter.cc. ====
/soft/gcc/7.1.0/Linux_x86_64/bin/g++ -MM -MF /class/grades/Fall-2018/csci3081/student-repos/PROJ_01_Feedback/repo-weber767/PROJ/build/obj/flashphoto/convolution_filter.d -MP -MT /class/grades/Fall-2018/csci3081/student-repos/PROJ_01_Feedback/repo-weber767/PROJ/build/obj/flashphoto/convolution_filter.o -W -Werror -Wall -Wextra -fdiagnostics-color=always -Wfloat-equal -Wshadow -Wcast-align -Wcast-qual -Wformat=2 -Winit-self -Wlogical-op -Wmissing-declarations -Wmissing-include-dirs -Wredundant-decls -Wswitch-default -Wsuggest-override -Wstrict-null-sentinel -Wsign-promo -Wold-style-cast -Woverloaded-virtual -Wctor-dtor-privacy -Wno-old-style-cast -Wno-cast-align -g -std=c++14 -c -I.. -I. -I./.. -isystem/class/grades/Fall-2018/csci3081/student-repos/PROJ_01_Feedback/repo-weber767/PROJ/src/external/MinGfx/build/install/include -isystem/class/grades/Fall-2018/csci3081/student-repos/PROJ_01_Feedback/repo-weber767/PROJ/src/external/MinGfx/build/install/include/nanovg -isystem/class/grades/Fall-2018/csci3081/student-repos/PROJ_01_Feedback/repo-weber767/PROJ/src/external/MinGfx/build/install/include/MinGfx-1.0 convolution_filter.cc
==== Auto-Generating Dependencies for mask_factory.cc. ====
/soft/gcc/7.1.0/Linux_x86_64/bin/g++ -MM -MF /class/grades/Fall-2018/csci3081/student-repos/PROJ_01_Feedback/repo-weber767/PROJ/build/obj/flashphoto/mask_factory.d -MP -MT /class/grades/Fall-2018/csci3081/student-repos/PROJ_01_Feedback/repo-weber767/PROJ/build/obj/flashphoto/mask_factory.o -W -Werror -Wall -Wextra -fdiagnostics-color=always -Wfloat-equal -Wshadow -Wcast-align -Wcast-qual -Wformat=2 -Winit-self -Wlogical-op -Wmissing-declarations -Wmissing-include-dirs -Wredundant-decls -Wswitch-default -Wsuggest-override -Wstrict-null-sentinel -Wsign-promo -Wold-style-cast -Woverloaded-virtual -Wctor-dtor-privacy -Wno-old-style-cast -Wno-cast-align -g -std=c++14 -c -I.. -I. -I./.. -isystem/class/grades/Fall-2018/csci3081/student-repos/PROJ_01_Feedback/repo-weber767/PROJ/src/external/MinGfx/build/install/include -isystem/class/grades/Fall-2018/csci3081/student-repos/PROJ_01_Feedback/repo-weber767/PROJ/src/external/MinGfx/build/install/include/nanovg -isystem/class/grades/Fall-2018/csci3081/student-repos/PROJ_01_Feedback/repo-weber767/PROJ/src/external/MinGfx/build/install/include/MinGfx-1.0 mask_factory.cc
==== Auto-Generating Dependencies for tool_pen.cc. ====
/soft/gcc/7.1.0/Linux_x86_64/bin/g++ -MM -MF /class/grades/Fall-2018/csci3081/student-repos/PROJ_01_Feedback/repo-weber767/PROJ/build/obj/flashphoto/tool_pen.d -MP -MT /class/grades/Fall-2018/csci3081/student-repos/PROJ_01_Feedback/repo-weber767/PROJ/build/obj/flashphoto/tool_pen.o -W -Werror -Wall -Wextra -fdiagnostics-color=always -Wfloat-equal -Wshadow -Wcast-align -Wcast-qual -Wformat=2 -Winit-self -Wlogical-op -Wmissing-declarations -Wmissing-include-dirs -Wredundant-decls -Wswitch-default -Wsuggest-override -Wstrict-null-sentinel -Wsign-promo -Wold-style-cast -Woverloaded-virtual -Wctor-dtor-privacy -Wno-old-style-cast -Wno-cast-align -g -std=c++14 -c -I.. -I. -I./.. -isystem/class/grades/Fall-2018/csci3081/student-repos/PROJ_01_Feedback/repo-weber767/PROJ/src/external/MinGfx/build/install/include -isystem/class/grades/Fall-2018/csci3081/student-repos/PROJ_01_Feedback/repo-weber767/PROJ/src/external/MinGfx/build/install/include/nanovg -isystem/class/grades/Fall-2018/csci3081/student-repos/PROJ_01_Feedback/repo-weber767/PROJ/src/external/MinGfx/build/install/include/MinGfx-1.0 tool_pen.cc
==== Auto-Generating Dependencies for main.cc. ====
==== Compiling filter_threshold.cc into /class/grades/Fall-2018/csci3081/student-repos/PROJ_01_Feedback/repo-weber767/PROJ/build/obj/flashphoto/filter_threshold.o. ====
/soft/gcc/7.1.0/Linux_x86_64/bin/g++ -fopenmp -W -Werror -Wall -Wextra -fdiagnostics-color=always -Wfloat-equal -Wshadow -Wcast-align -Wcast-qual -Wformat=2 -Winit-self -Wlogical-op -Wmissing-declarations -Wmissing-include-dirs -Wredundant-decls -Wswitch-default -Wsuggest-override -Wstrict-null-sentinel -Wsign-promo -Wold-style-cast -Woverloaded-virtual -Wctor-dtor-privacy -Wno-old-style-cast -Wno-cast-align -g -std=c++14 -c -I.. -I. -I./.. -isystem/class/grades/Fall-2018/csci3081/student-repos/PROJ_01_Feedback/repo-weber767/PROJ/src/external/MinGfx/build/install/include -isystem/class/grades/Fall-2018/csci3081/student-repos/PROJ_01_Feedback/repo-weber767/PROJ/src/external/MinGfx/build/install/include/nanovg -isystem/class/grades/Fall-2018/csci3081/student-repos/PROJ_01_Feedback/repo-weber767/PROJ/src/external/MinGfx/build/install/include/MinGfx-1.0  -c -fPIC -o  /class/grades/Fall-2018/csci3081/student-repos/PROJ_01_Feedback/repo-weber767/PROJ/build/obj/flashphoto/filter_threshold.o filter_threshold.cc
/soft/gcc/7.1.0/Linux_x86_64/bin/g++ -MM -MF /class/grades/Fall-2018/csci3081/student-repos/PROJ_01_Feedback/repo-weber767/PROJ/build/obj/flashphoto/main.d -MP -MT /class/grades/Fall-2018/csci3081/student-repos/PROJ_01_Feedback/repo-weber767/PROJ/build/obj/flashphoto/main.o -W -Werror -Wall -Wextra -fdiagnostics-color=always -Wfloat-equal -Wshadow -Wcast-align -Wcast-qual -Wformat=2 -Winit-self -Wlogical-op -Wmissing-declarations -Wmissing-include-dirs -Wredundant-decls -Wswitch-default -Wsuggest-override -Wstrict-null-sentinel -Wsign-promo -Wold-style-cast -Woverloaded-virtual -Wctor-dtor-privacy -Wno-old-style-cast -Wno-cast-align -g -std=c++14 -c -I.. -I. -I./.. -isystem/class/grades/Fall-2018/csci3081/student-repos/PROJ_01_Feedback/repo-weber767/PROJ/src/external/MinGfx/build/install/include -isystem/class/grades/Fall-2018/csci3081/student-repos/PROJ_01_Feedback/repo-weber767/PROJ/src/external/MinGfx/build/install/include/nanovg -isystem/class/grades/Fall-2018/csci3081/student-repos/PROJ_01_Feedback/repo-weber767/PROJ/src/external/MinGfx/build/install/include/MinGfx-1.0 main.cc
==== Auto-Generating Dependencies for tool_eraser.cc. ====
/soft/gcc/7.1.0/Linux_x86_64/bin/g++ -MM -MF /class/grades/Fall-2018/csci3081/student-repos/PROJ_01_Feedback/repo-weber767/PROJ/build/obj/flashphoto/tool_eraser.d -MP -MT /class/grades/Fall-2018/csci3081/student-repos/PROJ_01_Feedback/repo-weber767/PROJ/build/obj/flashphoto/tool_eraser.o -W -Werror -Wall -Wextra -fdiagnostics-color=always -Wfloat-equal -Wshadow -Wcast-align -Wcast-qual -Wformat=2 -Winit-self -Wlogical-op -Wmissing-declarations -Wmissing-include-dirs -Wredundant-decls -Wswitch-default -Wsuggest-override -Wstrict-null-sentinel -Wsign-promo -Wold-style-cast -Woverloaded-virtual -Wctor-dtor-privacy -Wno-old-style-cast -Wno-cast-align -g -std=c++14 -c -I.. -I. -I./.. -isystem/class/grades/Fall-2018/csci3081/student-repos/PROJ_01_Feedback/repo-weber767/PROJ/src/external/MinGfx/build/install/include -isystem/class/grades/Fall-2018/csci3081/student-repos/PROJ_01_Feedback/repo-weber767/PROJ/src/external/MinGfx/build/install/include/nanovg -isystem/class/grades/Fall-2018/csci3081/student-repos/PROJ_01_Feedback/repo-weber767/PROJ/src/external/MinGfx/build/install/include/MinGfx-1.0 tool_eraser.cc
==== Compiling tool_highlighter.cc into /class/grades/Fall-2018/csci3081/student-repos/PROJ_01_Feedback/repo-weber767/PROJ/build/obj/flashphoto/tool_highlighter.o. ====
/soft/gcc/7.1.0/Linux_x86_64/bin/g++ -fopenmp -W -Werror -Wall -Wextra -fdiagnostics-color=always -Wfloat-equal -Wshadow -Wcast-align -Wcast-qual -Wformat=2 -Winit-self -Wlogical-op -Wmissing-declarations -Wmissing-include-dirs -Wredundant-decls -Wswitch-default -Wsuggest-override -Wstrict-null-sentinel -Wsign-promo -Wold-style-cast -Woverloaded-virtual -Wctor-dtor-privacy -Wno-old-style-cast -Wno-cast-align -g -std=c++14 -c -I.. -I. -I./.. -isystem/class/grades/Fall-2018/csci3081/student-repos/PROJ_01_Feedback/repo-weber767/PROJ/src/external/MinGfx/build/install/include -isystem/class/grades/Fall-2018/csci3081/student-repos/PROJ_01_Feedback/repo-weber767/PROJ/src/external/MinGfx/build/install/include/nanovg -isystem/class/grades/Fall-2018/csci3081/student-repos/PROJ_01_Feedback/repo-weber767/PROJ/src/external/MinGfx/build/install/include/MinGfx-1.0  -c -fPIC -o  /class/grades/Fall-2018/csci3081/student-repos/PROJ_01_Feedback/repo-weber767/PROJ/build/obj/flashphoto/tool_highlighter.o tool_highlighter.cc
==== Auto-Generating Dependencies for pixel_buffer.cc. ====
/soft/gcc/7.1.0/Linux_x86_64/bin/g++ -MM -MF /class/grades/Fall-2018/csci3081/student-repos/PROJ_01_Feedback/repo-weber767/PROJ/build/obj/flashphoto/pixel_buffer.d -MP -MT /class/grades/Fall-2018/csci3081/student-repos/PROJ_01_Feedback/repo-weber767/PROJ/build/obj/flashphoto/pixel_buffer.o -W -Werror -Wall -Wextra -fdiagnostics-color=always -Wfloat-equal -Wshadow -Wcast-align -Wcast-qual -Wformat=2 -Winit-self -Wlogical-op -Wmissing-declarations -Wmissing-include-dirs -Wredundant-decls -Wswitch-default -Wsuggest-override -Wstrict-null-sentinel -Wsign-promo -Wold-style-cast -Woverloaded-virtual -Wctor-dtor-privacy -Wno-old-style-cast -Wno-cast-align -g -std=c++14 -c -I.. -I. -I./.. -isystem/class/grades/Fall-2018/csci3081/student-repos/PROJ_01_Feedback/repo-weber767/PROJ/src/external/MinGfx/build/install/include -isystem/class/grades/Fall-2018/csci3081/student-repos/PROJ_01_Feedback/repo-weber767/PROJ/src/external/MinGfx/build/install/include/nanovg -isystem/class/grades/Fall-2018/csci3081/student-repos/PROJ_01_Feedback/repo-weber767/PROJ/src/external/MinGfx/build/install/include/MinGfx-1.0 pixel_buffer.cc
==== Compiling filter_saturate.cc into /class/grades/Fall-2018/csci3081/student-repos/PROJ_01_Feedback/repo-weber767/PROJ/build/obj/flashphoto/filter_saturate.o. ====
/soft/gcc/7.1.0/Linux_x86_64/bin/g++ -fopenmp -W -Werror -Wall -Wextra -fdiagnostics-color=always -Wfloat-equal -Wshadow -Wcast-align -Wcast-qual -Wformat=2 -Winit-self -Wlogical-op -Wmissing-declarations -Wmissing-include-dirs -Wredundant-decls -Wswitch-default -Wsuggest-override -Wstrict-null-sentinel -Wsign-promo -Wold-style-cast -Woverloaded-virtual -Wctor-dtor-privacy -Wno-old-style-cast -Wno-cast-align -g -std=c++14 -c -I.. -I. -I./.. -isystem/class/grades/Fall-2018/csci3081/student-repos/PROJ_01_Feedback/repo-weber767/PROJ/src/external/MinGfx/build/install/include -isystem/class/grades/Fall-2018/csci3081/student-repos/PROJ_01_Feedback/repo-weber767/PROJ/src/external/MinGfx/build/install/include/nanovg -isystem/class/grades/Fall-2018/csci3081/student-repos/PROJ_01_Feedback/repo-weber767/PROJ/src/external/MinGfx/build/install/include/MinGfx-1.0  -c -fPIC -o  /class/grades/Fall-2018/csci3081/student-repos/PROJ_01_Feedback/repo-weber767/PROJ/build/obj/flashphoto/filter_saturate.o filter_saturate.cc
==== Compiling color_data.cc into /class/grades/Fall-2018/csci3081/student-repos/PROJ_01_Feedback/repo-weber767/PROJ/build/obj/flashphoto/color_data.o. ====
/soft/gcc/7.1.0/Linux_x86_64/bin/g++ -fopenmp -W -Werror -Wall -Wextra -fdiagnostics-color=always -Wfloat-equal -Wshadow -Wcast-align -Wcast-qual -Wformat=2 -Winit-self -Wlogical-op -Wmissing-declarations -Wmissing-include-dirs -Wredundant-decls -Wswitch-default -Wsuggest-override -Wstrict-null-sentinel -Wsign-promo -Wold-style-cast -Woverloaded-virtual -Wctor-dtor-privacy -Wno-old-style-cast -Wno-cast-align -g -std=c++14 -c -I.. -I. -I./.. -isystem/class/grades/Fall-2018/csci3081/student-repos/PROJ_01_Feedback/repo-weber767/PROJ/src/external/MinGfx/build/install/include -isystem/class/grades/Fall-2018/csci3081/student-repos/PROJ_01_Feedback/repo-weber767/PROJ/src/external/MinGfx/build/install/include/nanovg -isystem/class/grades/Fall-2018/csci3081/student-repos/PROJ_01_Feedback/repo-weber767/PROJ/src/external/MinGfx/build/install/include/MinGfx-1.0  -c -fPIC -o  /class/grades/Fall-2018/csci3081/student-repos/PROJ_01_Feedback/repo-weber767/PROJ/build/obj/flashphoto/color_data.o color_data.cc
==== Auto-Generating Dependencies for tool_spray_can.cc. ====
==== Compiling filter_channels.cc into /class/grades/Fall-2018/csci3081/student-repos/PROJ_01_Feedback/repo-weber767/PROJ/build/obj/flashphoto/filter_channels.o. ====
/soft/gcc/7.1.0/Linux_x86_64/bin/g++ -fopenmp -W -Werror -Wall -Wextra -fdiagnostics-color=always -Wfloat-equal -Wshadow -Wcast-align -Wcast-qual -Wformat=2 -Winit-self -Wlogical-op -Wmissing-declarations -Wmissing-include-dirs -Wredundant-decls -Wswitch-default -Wsuggest-override -Wstrict-null-sentinel -Wsign-promo -Wold-style-cast -Woverloaded-virtual -Wctor-dtor-privacy -Wno-old-style-cast -Wno-cast-align -g -std=c++14 -c -I.. -I. -I./.. -isystem/class/grades/Fall-2018/csci3081/student-repos/PROJ_01_Feedback/repo-weber767/PROJ/src/external/MinGfx/build/install/include -isystem/class/grades/Fall-2018/csci3081/student-repos/PROJ_01_Feedback/repo-weber767/PROJ/src/external/MinGfx/build/install/include/nanovg -isystem/class/grades/Fall-2018/csci3081/student-repos/PROJ_01_Feedback/repo-weber767/PROJ/src/external/MinGfx/build/install/include/MinGfx-1.0  -c -fPIC -o  /class/grades/Fall-2018/csci3081/student-repos/PROJ_01_Feedback/repo-weber767/PROJ/build/obj/flashphoto/filter_channels.o filter_channels.cc
/soft/gcc/7.1.0/Linux_x86_64/bin/g++ -MM -MF /class/grades/Fall-2018/csci3081/student-repos/PROJ_01_Feedback/repo-weber767/PROJ/build/obj/flashphoto/tool_spray_can.d -MP -MT /class/grades/Fall-2018/csci3081/student-repos/PROJ_01_Feedback/repo-weber767/PROJ/build/obj/flashphoto/tool_spray_can.o -W -Werror -Wall -Wextra -fdiagnostics-color=always -Wfloat-equal -Wshadow -Wcast-align -Wcast-qual -Wformat=2 -Winit-self -Wlogical-op -Wmissing-declarations -Wmissing-include-dirs -Wredundant-decls -Wswitch-default -Wsuggest-override -Wstrict-null-sentinel -Wsign-promo -Wold-style-cast -Woverloaded-virtual -Wctor-dtor-privacy -Wno-old-style-cast -Wno-cast-align -g -std=c++14 -c -I.. -I. -I./.. -isystem/class/grades/Fall-2018/csci3081/student-repos/PROJ_01_Feedback/repo-weber767/PROJ/src/external/MinGfx/build/install/include -isystem/class/grades/Fall-2018/csci3081/student-repos/PROJ_01_Feedback/repo-weber767/PROJ/src/external/MinGfx/build/install/include/nanovg -isystem/class/grades/Fall-2018/csci3081/student-repos/PROJ_01_Feedback/repo-weber767/PROJ/src/external/MinGfx/build/install/include/MinGfx-1.0 tool_spray_can.cc
==== Compiling filter.cc into /class/grades/Fall-2018/csci3081/student-repos/PROJ_01_Feedback/repo-weber767/PROJ/build/obj/flashphoto/filter.o. ====
/soft/gcc/7.1.0/Linux_x86_64/bin/g++ -fopenmp -W -Werror -Wall -Wextra -fdiagnostics-color=always -Wfloat-equal -Wshadow -Wcast-align -Wcast-qual -Wformat=2 -Winit-self -Wlogical-op -Wmissing-declarations -Wmissing-include-dirs -Wredundant-decls -Wswitch-default -Wsuggest-override -Wstrict-null-sentinel -Wsign-promo -Wold-style-cast -Woverloaded-virtual -Wctor-dtor-privacy -Wno-old-style-cast -Wno-cast-align -g -std=c++14 -c -I.. -I. -I./.. -isystem/class/grades/Fall-2018/csci3081/student-repos/PROJ_01_Feedback/repo-weber767/PROJ/src/external/MinGfx/build/install/include -isystem/class/grades/Fall-2018/csci3081/student-repos/PROJ_01_Feedback/repo-weber767/PROJ/src/external/MinGfx/build/install/include/nanovg -isystem/class/grades/Fall-2018/csci3081/student-repos/PROJ_01_Feedback/repo-weber767/PROJ/src/external/MinGfx/build/install/include/MinGfx-1.0  -c -fPIC -o  /class/grades/Fall-2018/csci3081/student-repos/PROJ_01_Feedback/repo-weber767/PROJ/build/obj/flashphoto/filter.o filter.cc
==== Auto-Generating Dependencies for tool_chalk.cc. ====
/soft/gcc/7.1.0/Linux_x86_64/bin/g++ -MM -MF /class/grades/Fall-2018/csci3081/student-repos/PROJ_01_Feedback/repo-weber767/PROJ/build/obj/flashphoto/tool_chalk.d -MP -MT /class/grades/Fall-2018/csci3081/student-repos/PROJ_01_Feedback/repo-weber767/PROJ/build/obj/flashphoto/tool_chalk.o -W -Werror -Wall -Wextra -fdiagnostics-color=always -Wfloat-equal -Wshadow -Wcast-align -Wcast-qual -Wformat=2 -Winit-self -Wlogical-op -Wmissing-declarations -Wmissing-include-dirs -Wredundant-decls -Wswitch-default -Wsuggest-override -Wstrict-null-sentinel -Wsign-promo -Wold-style-cast -Woverloaded-virtual -Wctor-dtor-privacy -Wno-old-style-cast -Wno-cast-align -g -std=c++14 -c -I.. -I. -I./.. -isystem/class/grades/Fall-2018/csci3081/student-repos/PROJ_01_Feedback/repo-weber767/PROJ/src/external/MinGfx/build/install/include -isystem/class/grades/Fall-2018/csci3081/student-repos/PROJ_01_Feedback/repo-weber767/PROJ/src/external/MinGfx/build/install/include/nanovg -isystem/class/grades/Fall-2018/csci3081/student-repos/PROJ_01_Feedback/repo-weber767/PROJ/src/external/MinGfx/build/install/include/MinGfx-1.0 tool_chalk.cc
==== Compiling tool_calligraphy_pen.cc into /class/grades/Fall-2018/csci3081/student-repos/PROJ_01_Feedback/repo-weber767/PROJ/build/obj/flashphoto/tool_calligraphy_pen.o. ====
==== Compiling tool.cc into /class/grades/Fall-2018/csci3081/student-repos/PROJ_01_Feedback/repo-weber767/PROJ/build/obj/flashphoto/tool.o. ====
/soft/gcc/7.1.0/Linux_x86_64/bin/g++ -fopenmp -W -Werror -Wall -Wextra -fdiagnostics-color=always -Wfloat-equal -Wshadow -Wcast-align -Wcast-qual -Wformat=2 -Winit-self -Wlogical-op -Wmissing-declarations -Wmissing-include-dirs -Wredundant-decls -Wswitch-default -Wsuggest-override -Wstrict-null-sentinel -Wsign-promo -Wold-style-cast -Woverloaded-virtual -Wctor-dtor-privacy -Wno-old-style-cast -Wno-cast-align -g -std=c++14 -c -I.. -I. -I./.. -isystem/class/grades/Fall-2018/csci3081/student-repos/PROJ_01_Feedback/repo-weber767/PROJ/src/external/MinGfx/build/install/include -isystem/class/grades/Fall-2018/csci3081/student-repos/PROJ_01_Feedback/repo-weber767/PROJ/src/external/MinGfx/build/install/include/nanovg -isystem/class/grades/Fall-2018/csci3081/student-repos/PROJ_01_Feedback/repo-weber767/PROJ/src/external/MinGfx/build/install/include/MinGfx-1.0  -c -fPIC -o  /class/grades/Fall-2018/csci3081/student-repos/PROJ_01_Feedback/repo-weber767/PROJ/build/obj/flashphoto/tool_calligraphy_pen.o tool_calligraphy_pen.cc
/soft/gcc/7.1.0/Linux_x86_64/bin/g++ -fopenmp -W -Werror -Wall -Wextra -fdiagnostics-color=always -Wfloat-equal -Wshadow -Wcast-align -Wcast-qual -Wformat=2 -Winit-self -Wlogical-op -Wmissing-declarations -Wmissing-include-dirs -Wredundant-decls -Wswitch-default -Wsuggest-override -Wstrict-null-sentinel -Wsign-promo -Wold-style-cast -Woverloaded-virtual -Wctor-dtor-privacy -Wno-old-style-cast -Wno-cast-align -g -std=c++14 -c -I.. -I. -I./.. -isystem/class/grades/Fall-2018/csci3081/student-repos/PROJ_01_Feedback/repo-weber767/PROJ/src/external/MinGfx/build/install/include -isystem/class/grades/Fall-2018/csci3081/student-repos/PROJ_01_Feedback/repo-weber767/PROJ/src/external/MinGfx/build/install/include/nanovg -isystem/class/grades/Fall-2018/csci3081/student-repos/PROJ_01_Feedback/repo-weber767/PROJ/src/external/MinGfx/build/install/include/MinGfx-1.0  -c -fPIC -o  /class/grades/Fall-2018/csci3081/student-repos/PROJ_01_Feedback/repo-weber767/PROJ/build/obj/flashphoto/tool.o tool.cc
==== Auto-Generating Dependencies for flashphoto_app.cc. ====
/soft/gcc/7.1.0/Linux_x86_64/bin/g++ -MM -MF /class/grades/Fall-2018/csci3081/student-repos/PROJ_01_Feedback/repo-weber767/PROJ/build/obj/flashphoto/flashphoto_app.d -MP -MT /class/grades/Fall-2018/csci3081/student-repos/PROJ_01_Feedback/repo-weber767/PROJ/build/obj/flashphoto/flashphoto_app.o -W -Werror -Wall -Wextra -fdiagnostics-color=always -Wfloat-equal -Wshadow -Wcast-align -Wcast-qual -Wformat=2 -Winit-self -Wlogical-op -Wmissing-declarations -Wmissing-include-dirs -Wredundant-decls -Wswitch-default -Wsuggest-override -Wstrict-null-sentinel -Wsign-promo -Wold-style-cast -Woverloaded-virtual -Wctor-dtor-privacy -Wno-old-style-cast -Wno-cast-align -g -std=c++14 -c -I.. -I. -I./.. -isystem/class/grades/Fall-2018/csci3081/student-repos/PROJ_01_Feedback/repo-weber767/PROJ/src/external/MinGfx/build/install/include -isystem/class/grades/Fall-2018/csci3081/student-repos/PROJ_01_Feedback/repo-weber767/PROJ/src/external/MinGfx/build/install/include/nanovg -isystem/class/grades/Fall-2018/csci3081/student-repos/PROJ_01_Feedback/repo-weber767/PROJ/src/external/MinGfx/build/install/include/MinGfx-1.0 flashphoto_app.cc
==== Auto-Generating Dependencies for filter_quantize.cc. ====
/soft/gcc/7.1.0/Linux_x86_64/bin/g++ -MM -MF /class/grades/Fall-2018/csci3081/student-repos/PROJ_01_Feedback/repo-weber767/PROJ/build/obj/flashphoto/filter_quantize.d -MP -MT /class/grades/Fall-2018/csci3081/student-repos/PROJ_01_Feedback/repo-weber767/PROJ/build/obj/flashphoto/filter_quantize.o -W -Werror -Wall -Wextra -fdiagnostics-color=always -Wfloat-equal -Wshadow -Wcast-align -Wcast-qual -Wformat=2 -Winit-self -Wlogical-op -Wmissing-declarations -Wmissing-include-dirs -Wredundant-decls -Wswitch-default -Wsuggest-override -Wstrict-null-sentinel -Wsign-promo -Wold-style-cast -Woverloaded-virtual -Wctor-dtor-privacy -Wno-old-style-cast -Wno-cast-align -g -std=c++14 -c -I.. -I. -I./.. -isystem/class/grades/Fall-2018/csci3081/student-repos/PROJ_01_Feedback/repo-weber767/PROJ/src/external/MinGfx/build/install/include -isystem/class/grades/Fall-2018/csci3081/student-repos/PROJ_01_Feedback/repo-weber767/PROJ/src/external/MinGfx/build/install/include/nanovg -isystem/class/grades/Fall-2018/csci3081/student-repos/PROJ_01_Feedback/repo-weber767/PROJ/src/external/MinGfx/build/install/include/MinGfx-1.0 filter_quantize.cc
==== Auto-Generating Dependencies for float_matrix.cc. ====
/soft/gcc/7.1.0/Linux_x86_64/bin/g++ -MM -MF /class/grades/Fall-2018/csci3081/student-repos/PROJ_01_Feedback/repo-weber767/PROJ/build/obj/flashphoto/float_matrix.d -MP -MT /class/grades/Fall-2018/csci3081/student-repos/PROJ_01_Feedback/repo-weber767/PROJ/build/obj/flashphoto/float_matrix.o -W -Werror -Wall -Wextra -fdiagnostics-color=always -Wfloat-equal -Wshadow -Wcast-align -Wcast-qual -Wformat=2 -Winit-self -Wlogical-op -Wmissing-declarations -Wmissing-include-dirs -Wredundant-decls -Wswitch-default -Wsuggest-override -Wstrict-null-sentinel -Wsign-promo -Wold-style-cast -Woverloaded-virtual -Wctor-dtor-privacy -Wno-old-style-cast -Wno-cast-align -g -std=c++14 -c -I.. -I. -I./.. -isystem/class/grades/Fall-2018/csci3081/student-repos/PROJ_01_Feedback/repo-weber767/PROJ/src/external/MinGfx/build/install/include -isystem/class/grades/Fall-2018/csci3081/student-repos/PROJ_01_Feedback/repo-weber767/PROJ/src/external/MinGfx/build/install/include/nanovg -isystem/class/grades/Fall-2018/csci3081/student-repos/PROJ_01_Feedback/repo-weber767/PROJ/src/external/MinGfx/build/install/include/MinGfx-1.0 float_matrix.cc
==== Compiling convolution_filter.cc into /class/grades/Fall-2018/csci3081/student-repos/PROJ_01_Feedback/repo-weber767/PROJ/build/obj/flashphoto/convolution_filter.o. ====
/soft/gcc/7.1.0/Linux_x86_64/bin/g++ -fopenmp -W -Werror -Wall -Wextra -fdiagnostics-color=always -Wfloat-equal -Wshadow -Wcast-align -Wcast-qual -Wformat=2 -Winit-self -Wlogical-op -Wmissing-declarations -Wmissing-include-dirs -Wredundant-decls -Wswitch-default -Wsuggest-override -Wstrict-null-sentinel -Wsign-promo -Wold-style-cast -Woverloaded-virtual -Wctor-dtor-privacy -Wno-old-style-cast -Wno-cast-align -g -std=c++14 -c -I.. -I. -I./.. -isystem/class/grades/Fall-2018/csci3081/student-repos/PROJ_01_Feedback/repo-weber767/PROJ/src/external/MinGfx/build/install/include -isystem/class/grades/Fall-2018/csci3081/student-repos/PROJ_01_Feedback/repo-weber767/PROJ/src/external/MinGfx/build/install/include/nanovg -isystem/class/grades/Fall-2018/csci3081/student-repos/PROJ_01_Feedback/repo-weber767/PROJ/src/external/MinGfx/build/install/include/MinGfx-1.0  -c -fPIC -o  /class/grades/Fall-2018/csci3081/student-repos/PROJ_01_Feedback/repo-weber767/PROJ/build/obj/flashphoto/convolution_filter.o convolution_filter.cc
==== Auto-Generating Dependencies for tool_blur.cc. ====
/soft/gcc/7.1.0/Linux_x86_64/bin/g++ -MM -MF /class/grades/Fall-2018/csci3081/student-repos/PROJ_01_Feedback/repo-weber767/PROJ/build/obj/flashphoto/tool_blur.d -MP -MT /class/grades/Fall-2018/csci3081/student-repos/PROJ_01_Feedback/repo-weber767/PROJ/build/obj/flashphoto/tool_blur.o -W -Werror -Wall -Wextra -fdiagnostics-color=always -Wfloat-equal -Wshadow -Wcast-align -Wcast-qual -Wformat=2 -Winit-self -Wlogical-op -Wmissing-declarations -Wmissing-include-dirs -Wredundant-decls -Wswitch-default -Wsuggest-override -Wstrict-null-sentinel -Wsign-promo -Wold-style-cast -Woverloaded-virtual -Wctor-dtor-privacy -Wno-old-style-cast -Wno-cast-align -g -std=c++14 -c -I.. -I. -I./.. -isystem/class/grades/Fall-2018/csci3081/student-repos/PROJ_01_Feedback/repo-weber767/PROJ/src/external/MinGfx/build/install/include -isystem/class/grades/Fall-2018/csci3081/student-repos/PROJ_01_Feedback/repo-weber767/PROJ/src/external/MinGfx/build/install/include/nanovg -isystem/class/grades/Fall-2018/csci3081/student-repos/PROJ_01_Feedback/repo-weber767/PROJ/src/external/MinGfx/build/install/include/MinGfx-1.0 tool_blur.cc
==== Compiling mask_factory.cc into /class/grades/Fall-2018/csci3081/student-repos/PROJ_01_Feedback/repo-weber767/PROJ/build/obj/flashphoto/mask_factory.o. ====
/soft/gcc/7.1.0/Linux_x86_64/bin/g++ -fopenmp -W -Werror -Wall -Wextra -fdiagnostics-color=always -Wfloat-equal -Wshadow -Wcast-align -Wcast-qual -Wformat=2 -Winit-self -Wlogical-op -Wmissing-declarations -Wmissing-include-dirs -Wredundant-decls -Wswitch-default -Wsuggest-override -Wstrict-null-sentinel -Wsign-promo -Wold-style-cast -Woverloaded-virtual -Wctor-dtor-privacy -Wno-old-style-cast -Wno-cast-align -g -std=c++14 -c -I.. -I. -I./.. -isystem/class/grades/Fall-2018/csci3081/student-repos/PROJ_01_Feedback/repo-weber767/PROJ/src/external/MinGfx/build/install/include -isystem/class/grades/Fall-2018/csci3081/student-repos/PROJ_01_Feedback/repo-weber767/PROJ/src/external/MinGfx/build/install/include/nanovg -isystem/class/grades/Fall-2018/csci3081/student-repos/PROJ_01_Feedback/repo-weber767/PROJ/src/external/MinGfx/build/install/include/MinGfx-1.0  -c -fPIC -o  /class/grades/Fall-2018/csci3081/student-repos/PROJ_01_Feedback/repo-weber767/PROJ/build/obj/flashphoto/mask_factory.o mask_factory.cc
==== Compiling tool_pen.cc into /class/grades/Fall-2018/csci3081/student-repos/PROJ_01_Feedback/repo-weber767/PROJ/build/obj/flashphoto/tool_pen.o. ====
/soft/gcc/7.1.0/Linux_x86_64/bin/g++ -fopenmp -W -Werror -Wall -Wextra -fdiagnostics-color=always -Wfloat-equal -Wshadow -Wcast-align -Wcast-qual -Wformat=2 -Winit-self -Wlogical-op -Wmissing-declarations -Wmissing-include-dirs -Wredundant-decls -Wswitch-default -Wsuggest-override -Wstrict-null-sentinel -Wsign-promo -Wold-style-cast -Woverloaded-virtual -Wctor-dtor-privacy -Wno-old-style-cast -Wno-cast-align -g -std=c++14 -c -I.. -I. -I./.. -isystem/class/grades/Fall-2018/csci3081/student-repos/PROJ_01_Feedback/repo-weber767/PROJ/src/external/MinGfx/build/install/include -isystem/class/grades/Fall-2018/csci3081/student-repos/PROJ_01_Feedback/repo-weber767/PROJ/src/external/MinGfx/build/install/include/nanovg -isystem/class/grades/Fall-2018/csci3081/student-repos/PROJ_01_Feedback/repo-weber767/PROJ/src/external/MinGfx/build/install/include/MinGfx-1.0  -c -fPIC -o  /class/grades/Fall-2018/csci3081/student-repos/PROJ_01_Feedback/repo-weber767/PROJ/build/obj/flashphoto/tool_pen.o tool_pen.cc
==== Compiling tool_eraser.cc into /class/grades/Fall-2018/csci3081/student-repos/PROJ_01_Feedback/repo-weber767/PROJ/build/obj/flashphoto/tool_eraser.o. ====
/soft/gcc/7.1.0/Linux_x86_64/bin/g++ -fopenmp -W -Werror -Wall -Wextra -fdiagnostics-color=always -Wfloat-equal -Wshadow -Wcast-align -Wcast-qual -Wformat=2 -Winit-self -Wlogical-op -Wmissing-declarations -Wmissing-include-dirs -Wredundant-decls -Wswitch-default -Wsuggest-override -Wstrict-null-sentinel -Wsign-promo -Wold-style-cast -Woverloaded-virtual -Wctor-dtor-privacy -Wno-old-style-cast -Wno-cast-align -g -std=c++14 -c -I.. -I. -I./.. -isystem/class/grades/Fall-2018/csci3081/student-repos/PROJ_01_Feedback/repo-weber767/PROJ/src/external/MinGfx/build/install/include -isystem/class/grades/Fall-2018/csci3081/student-repos/PROJ_01_Feedback/repo-weber767/PROJ/src/external/MinGfx/build/install/include/nanovg -isystem/class/grades/Fall-2018/csci3081/student-repos/PROJ_01_Feedback/repo-weber767/PROJ/src/external/MinGfx/build/install/include/MinGfx-1.0  -c -fPIC -o  /class/grades/Fall-2018/csci3081/student-repos/PROJ_01_Feedback/repo-weber767/PROJ/build/obj/flashphoto/tool_eraser.o tool_eraser.cc
==== Compiling tool_spray_can.cc into /class/grades/Fall-2018/csci3081/student-repos/PROJ_01_Feedback/repo-weber767/PROJ/build/obj/flashphoto/tool_spray_can.o. ====
/soft/gcc/7.1.0/Linux_x86_64/bin/g++ -fopenmp -W -Werror -Wall -Wextra -fdiagnostics-color=always -Wfloat-equal -Wshadow -Wcast-align -Wcast-qual -Wformat=2 -Winit-self -Wlogical-op -Wmissing-declarations -Wmissing-include-dirs -Wredundant-decls -Wswitch-default -Wsuggest-override -Wstrict-null-sentinel -Wsign-promo -Wold-style-cast -Woverloaded-virtual -Wctor-dtor-privacy -Wno-old-style-cast -Wno-cast-align -g -std=c++14 -c -I.. -I. -I./.. -isystem/class/grades/Fall-2018/csci3081/student-repos/PROJ_01_Feedback/repo-weber767/PROJ/src/external/MinGfx/build/install/include -isystem/class/grades/Fall-2018/csci3081/student-repos/PROJ_01_Feedback/repo-weber767/PROJ/src/external/MinGfx/build/install/include/nanovg -isystem/class/grades/Fall-2018/csci3081/student-repos/PROJ_01_Feedback/repo-weber767/PROJ/src/external/MinGfx/build/install/include/MinGfx-1.0  -c -fPIC -o  /class/grades/Fall-2018/csci3081/student-repos/PROJ_01_Feedback/repo-weber767/PROJ/build/obj/flashphoto/tool_spray_can.o tool_spray_can.cc
==== Compiling tool_chalk.cc into /class/grades/Fall-2018/csci3081/student-repos/PROJ_01_Feedback/repo-weber767/PROJ/build/obj/flashphoto/tool_chalk.o. ====
==== Compiling filter_quantize.cc into /class/grades/Fall-2018/csci3081/student-repos/PROJ_01_Feedback/repo-weber767/PROJ/build/obj/flashphoto/filter_quantize.o. ====
/soft/gcc/7.1.0/Linux_x86_64/bin/g++ -fopenmp -W -Werror -Wall -Wextra -fdiagnostics-color=always -Wfloat-equal -Wshadow -Wcast-align -Wcast-qual -Wformat=2 -Winit-self -Wlogical-op -Wmissing-declarations -Wmissing-include-dirs -Wredundant-decls -Wswitch-default -Wsuggest-override -Wstrict-null-sentinel -Wsign-promo -Wold-style-cast -Woverloaded-virtual -Wctor-dtor-privacy -Wno-old-style-cast -Wno-cast-align -g -std=c++14 -c -I.. -I. -I./.. -isystem/class/grades/Fall-2018/csci3081/student-repos/PROJ_01_Feedback/repo-weber767/PROJ/src/external/MinGfx/build/install/include -isystem/class/grades/Fall-2018/csci3081/student-repos/PROJ_01_Feedback/repo-weber767/PROJ/src/external/MinGfx/build/install/include/nanovg -isystem/class/grades/Fall-2018/csci3081/student-repos/PROJ_01_Feedback/repo-weber767/PROJ/src/external/MinGfx/build/install/include/MinGfx-1.0  -c -fPIC -o  /class/grades/Fall-2018/csci3081/student-repos/PROJ_01_Feedback/repo-weber767/PROJ/build/obj/flashphoto/filter_quantize.o filter_quantize.cc
/soft/gcc/7.1.0/Linux_x86_64/bin/g++ -fopenmp -W -Werror -Wall -Wextra -fdiagnostics-color=always -Wfloat-equal -Wshadow -Wcast-align -Wcast-qual -Wformat=2 -Winit-self -Wlogical-op -Wmissing-declarations -Wmissing-include-dirs -Wredundant-decls -Wswitch-default -Wsuggest-override -Wstrict-null-sentinel -Wsign-promo -Wold-style-cast -Woverloaded-virtual -Wctor-dtor-privacy -Wno-old-style-cast -Wno-cast-align -g -std=c++14 -c -I.. -I. -I./.. -isystem/class/grades/Fall-2018/csci3081/student-repos/PROJ_01_Feedback/repo-weber767/PROJ/src/external/MinGfx/build/install/include -isystem/class/grades/Fall-2018/csci3081/student-repos/PROJ_01_Feedback/repo-weber767/PROJ/src/external/MinGfx/build/install/include/nanovg -isystem/class/grades/Fall-2018/csci3081/student-repos/PROJ_01_Feedback/repo-weber767/PROJ/src/external/MinGfx/build/install/include/MinGfx-1.0  -c -fPIC -o  /class/grades/Fall-2018/csci3081/student-repos/PROJ_01_Feedback/repo-weber767/PROJ/build/obj/flashphoto/tool_chalk.o tool_chalk.cc
==== Compiling tool_blur.cc into /class/grades/Fall-2018/csci3081/student-repos/PROJ_01_Feedback/repo-weber767/PROJ/build/obj/flashphoto/tool_blur.o. ====
/soft/gcc/7.1.0/Linux_x86_64/bin/g++ -fopenmp -W -Werror -Wall -Wextra -fdiagnostics-color=always -Wfloat-equal -Wshadow -Wcast-align -Wcast-qual -Wformat=2 -Winit-self -Wlogical-op -Wmissing-declarations -Wmissing-include-dirs -Wredundant-decls -Wswitch-default -Wsuggest-override -Wstrict-null-sentinel -Wsign-promo -Wold-style-cast -Woverloaded-virtual -Wctor-dtor-privacy -Wno-old-style-cast -Wno-cast-align -g -std=c++14 -c -I.. -I. -I./.. -isystem/class/grades/Fall-2018/csci3081/student-repos/PROJ_01_Feedback/repo-weber767/PROJ/src/external/MinGfx/build/install/include -isystem/class/grades/Fall-2018/csci3081/student-repos/PROJ_01_Feedback/repo-weber767/PROJ/src/external/MinGfx/build/install/include/nanovg -isystem/class/grades/Fall-2018/csci3081/student-repos/PROJ_01_Feedback/repo-weber767/PROJ/src/external/MinGfx/build/install/include/MinGfx-1.0  -c -fPIC -o  /class/grades/Fall-2018/csci3081/student-repos/PROJ_01_Feedback/repo-weber767/PROJ/build/obj/flashphoto/tool_blur.o tool_blur.cc
==== Compiling float_matrix.cc into /class/grades/Fall-2018/csci3081/student-repos/PROJ_01_Feedback/repo-weber767/PROJ/build/obj/flashphoto/float_matrix.o. ====
/soft/gcc/7.1.0/Linux_x86_64/bin/g++ -fopenmp -W -Werror -Wall -Wextra -fdiagnostics-color=always -Wfloat-equal -Wshadow -Wcast-align -Wcast-qual -Wformat=2 -Winit-self -Wlogical-op -Wmissing-declarations -Wmissing-include-dirs -Wredundant-decls -Wswitch-default -Wsuggest-override -Wstrict-null-sentinel -Wsign-promo -Wold-style-cast -Woverloaded-virtual -Wctor-dtor-privacy -Wno-old-style-cast -Wno-cast-align -g -std=c++14 -c -I.. -I. -I./.. -isystem/class/grades/Fall-2018/csci3081/student-repos/PROJ_01_Feedback/repo-weber767/PROJ/src/external/MinGfx/build/install/include -isystem/class/grades/Fall-2018/csci3081/student-repos/PROJ_01_Feedback/repo-weber767/PROJ/src/external/MinGfx/build/install/include/nanovg -isystem/class/grades/Fall-2018/csci3081/student-repos/PROJ_01_Feedback/repo-weber767/PROJ/src/external/MinGfx/build/install/include/MinGfx-1.0  -c -fPIC -o  /class/grades/Fall-2018/csci3081/student-repos/PROJ_01_Feedback/repo-weber767/PROJ/build/obj/flashphoto/float_matrix.o float_matrix.cc
==== Compiling pixel_buffer.cc into /class/grades/Fall-2018/csci3081/student-repos/PROJ_01_Feedback/repo-weber767/PROJ/build/obj/flashphoto/pixel_buffer.o. ====
==== Compiling main.cc into /class/grades/Fall-2018/csci3081/student-repos/PROJ_01_Feedback/repo-weber767/PROJ/build/obj/flashphoto/main.o. ====
/soft/gcc/7.1.0/Linux_x86_64/bin/g++ -fopenmp -W -Werror -Wall -Wextra -fdiagnostics-color=always -Wfloat-equal -Wshadow -Wcast-align -Wcast-qual -Wformat=2 -Winit-self -Wlogical-op -Wmissing-declarations -Wmissing-include-dirs -Wredundant-decls -Wswitch-default -Wsuggest-override -Wstrict-null-sentinel -Wsign-promo -Wold-style-cast -Woverloaded-virtual -Wctor-dtor-privacy -Wno-old-style-cast -Wno-cast-align -g -std=c++14 -c -I.. -I. -I./.. -isystem/class/grades/Fall-2018/csci3081/student-repos/PROJ_01_Feedback/repo-weber767/PROJ/src/external/MinGfx/build/install/include -isystem/class/grades/Fall-2018/csci3081/student-repos/PROJ_01_Feedback/repo-weber767/PROJ/src/external/MinGfx/build/install/include/nanovg -isystem/class/grades/Fall-2018/csci3081/student-repos/PROJ_01_Feedback/repo-weber767/PROJ/src/external/MinGfx/build/install/include/MinGfx-1.0  -c -fPIC -o  /class/grades/Fall-2018/csci3081/student-repos/PROJ_01_Feedback/repo-weber767/PROJ/build/obj/flashphoto/main.o main.cc
/soft/gcc/7.1.0/Linux_x86_64/bin/g++ -fopenmp -W -Werror -Wall -Wextra -fdiagnostics-color=always -Wfloat-equal -Wshadow -Wcast-align -Wcast-qual -Wformat=2 -Winit-self -Wlogical-op -Wmissing-declarations -Wmissing-include-dirs -Wredundant-decls -Wswitch-default -Wsuggest-override -Wstrict-null-sentinel -Wsign-promo -Wold-style-cast -Woverloaded-virtual -Wctor-dtor-privacy -Wno-old-style-cast -Wno-cast-align -g -std=c++14 -c -I.. -I. -I./.. -isystem/class/grades/Fall-2018/csci3081/student-repos/PROJ_01_Feedback/repo-weber767/PROJ/src/external/MinGfx/build/install/include -isystem/class/grades/Fall-2018/csci3081/student-repos/PROJ_01_Feedback/repo-weber767/PROJ/src/external/MinGfx/build/install/include/nanovg -isystem/class/grades/Fall-2018/csci3081/student-repos/PROJ_01_Feedback/repo-weber767/PROJ/src/external/MinGfx/build/install/include/MinGfx-1.0  -c -fPIC -o  /class/grades/Fall-2018/csci3081/student-repos/PROJ_01_Feedback/repo-weber767/PROJ/build/obj/flashphoto/pixel_buffer.o pixel_buffer.cc
[01m[Kfilter.cc:[m[K In member function ‘[01m[Kvoid image_tools::Filter::ApplyToBuffer(image_tools::PixelBuffer*)[m[K’:
[01m[Kfilter.cc:30:51:[m[K [01;31m[Kerror: [m[Kno matching function for call to ‘[01m[Kimage_tools::PixelBuffer::PixelBuffer(image_tools::PixelBuffer*&)[m[K’
   PixelBuffer buffer_copy = new PixelBuffer(buffer[01;31m[K)[m[K;
                                                   [01;31m[K^[m[K
In file included from [01m[K../flashphoto/filter.h:11:0[m[K,
                 from [01m[Kfilter.cc:8[m[K:
[01m[K../flashphoto/pixel_buffer.h:45:3:[m[K [01;36m[Knote: [m[Kcandidate: image_tools::PixelBuffer::PixelBuffer(const image_tools::PixelBuffer&)
   [01;36m[KPixelBuffer[m[K(const PixelBuffer &rhs);
   [01;36m[K^~~~~~~~~~~[m[K
[01m[K../flashphoto/pixel_buffer.h:45:3:[m[K [01;36m[Knote: [m[K  no known conversion for argument 1 from ‘[01m[Kimage_tools::PixelBuffer*[m[K’ to ‘[01m[Kconst image_tools::PixelBuffer&[m[K’
[01m[K../flashphoto/pixel_buffer.h:42:12:[m[K [01;36m[Knote: [m[Kcandidate: image_tools::PixelBuffer::PixelBuffer(const string&)
   explicit [01;36m[KPixelBuffer[m[K(const std::string &filename);
            [01;36m[K^~~~~~~~~~~[m[K
[01m[K../flashphoto/pixel_buffer.h:42:12:[m[K [01;36m[Knote: [m[K  no known conversion for argument 1 from ‘[01m[Kimage_tools::PixelBuffer*[m[K’ to ‘[01m[Kconst string& {aka const std::__cxx11::basic_string<char>&}[m[K’
[01m[K../flashphoto/pixel_buffer.h:38:3:[m[K [01;36m[Knote: [m[Kcandidate: image_tools::PixelBuffer::PixelBuffer(int, int, image_tools::ColorData)
   [01;36m[KPixelBuffer[m[K(int w, int h, ColorData background_color);
   [01;36m[K^~~~~~~~~~~[m[K
[01m[K../flashphoto/pixel_buffer.h:38:3:[m[K [01;36m[Knote: [m[K  candidate expects 3 arguments, 1 provided
[01m[Kfilter.cc:37:10:[m[K [01;31m[Kerror: [m[K‘[01m[Kpixel_copy[m[K’ was not declared in this scope
   delete [01;31m[Kpixel_copy[m[K;
          [01;31m[K^~~~~~~~~~[m[K
[01m[Kfilter.cc:37:10:[m[K [01;36m[Knote: [m[Ksuggested alternative: ‘[01m[Kbuffer_copy[m[K’
   delete [01;36m[Kpixel_copy[m[K;
          [01;36m[K^~~~~~~~~~[m[K
          [32m[Kbuffer_copy[m[K
==== Compiling flashphoto_app.cc into /class/grades/Fall-2018/csci3081/student-repos/PROJ_01_Feedback/repo-weber767/PROJ/build/obj/flashphoto/flashphoto_app.o. ====
/soft/gcc/7.1.0/Linux_x86_64/bin/g++ -fopenmp -W -Werror -Wall -Wextra -fdiagnostics-color=always -Wfloat-equal -Wshadow -Wcast-align -Wcast-qual -Wformat=2 -Winit-self -Wlogical-op -Wmissing-declarations -Wmissing-include-dirs -Wredundant-decls -Wswitch-default -Wsuggest-override -Wstrict-null-sentinel -Wsign-promo -Wold-style-cast -Woverloaded-virtual -Wctor-dtor-privacy -Wno-old-style-cast -Wno-cast-align -g -std=c++14 -c -I.. -I. -I./.. -isystem/class/grades/Fall-2018/csci3081/student-repos/PROJ_01_Feedback/repo-weber767/PROJ/src/external/MinGfx/build/install/include -isystem/class/grades/Fall-2018/csci3081/student-repos/PROJ_01_Feedback/repo-weber767/PROJ/src/external/MinGfx/build/install/include/nanovg -isystem/class/grades/Fall-2018/csci3081/student-repos/PROJ_01_Feedback/repo-weber767/PROJ/src/external/MinGfx/build/install/include/MinGfx-1.0  -c -fPIC -o  /class/grades/Fall-2018/csci3081/student-repos/PROJ_01_Feedback/repo-weber767/PROJ/build/obj/flashphoto/flashphoto_app.o flashphoto_app.cc
Makefile:109: recipe for target '/class/grades/Fall-2018/csci3081/student-repos/PROJ_01_Feedback/repo-weber767/PROJ/build/obj/flashphoto/filter.o' failed
make[1]: *** [/class/grades/Fall-2018/csci3081/student-repos/PROJ_01_Feedback/repo-weber767/PROJ/build/obj/flashphoto/filter.o] Error 1
make[1]: *** Waiting for unfinished jobs....
In file included from [01m[Kconvolution_filter.cc:10:0[m[K:
[01m[K../flashphoto/convolution_filter.h:29:8:[m[K [01;31m[Kerror: [m[K‘[01m[Kvirtual bool image_tools::ConvolutionFilter::can_calculate_in_place()[m[K’ can be marked override [[01;31m[K-Werror=suggest-override[m[K]
   bool [01;31m[Kcan_calculate_in_place[m[K() {return false;}
        [01;31m[K^~~~~~~~~~~~~~~~~~~~~~[m[K
[01m[Kconvolution_filter.cc:[m[K In member function ‘[01m[Kvirtual image_tools::ColorData image_tools::ConvolutionFilter::CalculateFilteredPixel(const image_tools::PixelBuffer&, int, int)[m[K’:
[01m[Kconvolution_filter.cc:16:10:[m[K [01;31m[Kerror: [m[Kunused variable ‘[01m[Kred[m[K’ [[01;31m[K-Werror=unused-variable[m[K]
   double [01;31m[Kred[m[K = 0.0;
          [01;31m[K^~~[m[K
[01m[Kconvolution_filter.cc:17:10:[m[K [01;31m[Kerror: [m[Kunused variable ‘[01m[Kgreen[m[K’ [[01;31m[K-Werror=unused-variable[m[K]
   double [01;31m[Kgreen[m[K = 0.0;
          [01;31m[K^~~~~[m[K
[01m[Kconvolution_filter.cc:18:10:[m[K [01;31m[Kerror: [m[Kunused variable ‘[01m[Kblue[m[K’ [[01;31m[K-Werror=unused-variable[m[K]
   double [01;31m[Kblue[m[K = 0.0;
          [01;31m[K^~~~[m[K
[01m[Kconvolution_filter.cc:25:2:[m[K [01;31m[Kerror: [m[Kno return statement in function returning non-void [[01;31m[K-Werror=return-type[m[K]
  [01;31m[K}[m[K
  [01;31m[K^[m[K
[01m[Kconvolution_filter.cc:13:73:[m[K [01;31m[Kerror: [m[Kunused parameter ‘[01m[Kbuffer[m[K’ [[01;31m[K-Werror=unused-parameter[m[K]
  ColorData ConvolutionFilter::CalculateFilteredPixel(const PixelBuffer &[01;31m[Kbuffer[m[K,
                                                                         [01;31m[K^~~~~~[m[K
[01m[Kconvolution_filter.cc:14:59:[m[K [01;31m[Kerror: [m[Kunused parameter ‘[01m[Kx[m[K’ [[01;31m[K-Werror=unused-parameter[m[K]
                                                       int [01;31m[Kx[m[K, int y) {
                                                           [01;31m[K^[m[K
[01m[Kconvolution_filter.cc:14:66:[m[K [01;31m[Kerror: [m[Kunused parameter ‘[01m[Ky[m[K’ [[01;31m[K-Werror=unused-parameter[m[K]
                                                       int x, int [01;31m[Ky[m[K) {
                                                                  [01;31m[K^[m[K
cc1plus: all warnings being treated as errors
Makefile:109: recipe for target '/class/grades/Fall-2018/csci3081/student-repos/PROJ_01_Feedback/repo-weber767/PROJ/build/obj/flashphoto/convolution_filter.o' failed
make[1]: *** [/class/grades/Fall-2018/csci3081/student-repos/PROJ_01_Feedback/repo-weber767/PROJ/build/obj/flashphoto/convolution_filter.o] Error 1
make[1]: Leaving directory '/class/grades/Fall-2018/csci3081/student-repos/PROJ_01_Feedback/repo-weber767/PROJ/src/flashphoto'
Makefile:10: recipe for target 'flashphoto' failed
make: *** [flashphoto] Error 2
</pre>




#### Run Student Tests

+ Skip: Running Student Tests.

  This test was not run because of an earlier failing test.

+ Skip: Check that a GoogleTest test passes.

  This test was not run because of an earlier failing test.

+ Skip: Check that a GoogleTest test passes.

  This test was not run because of an earlier failing test.

+ Skip: Check that a GoogleTest test passes.

  This test was not run because of an earlier failing test.

+ Skip: Check that a GoogleTest test passes.

  This test was not run because of an earlier failing test.

+ Skip: Check that a GoogleTest test passes.

  This test was not run because of an earlier failing test.

+ Skip: Check that a GoogleTest test passes.

  This test was not run because of an earlier failing test.

+ Skip: Check that a GoogleTest test passes.

  This test was not run because of an earlier failing test.

+ Skip: Check that a GoogleTest test passes.

  This test was not run because of an earlier failing test.

+ Skip: Check that a GoogleTest test passes.

  This test was not run because of an earlier failing test.

+ Skip: Check that a GoogleTest test passes.

  This test was not run because of an earlier failing test.

