### Feedback for Project Iteration 01

Run on November 08, 09:30:30 AM.


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
convolution_filter_blur.cc:13:  Missing space before {  [whitespace/braces] [5]
convolution_filter_blur.cc:23:  Missing space after ,  [whitespace/comma] [3]
convolution_filter.cc:13:  Weird number of spaces at line-start.  Are you using a 2-space indent?  [whitespace/indent] [3]
convolution_filter.cc:35:  Weird number of spaces at line-start.  Are you using a 2-space indent?  [whitespace/indent] [3]
convolution_filter.cc:42:  Missing space after ,  [whitespace/comma] [3]
convolution_filter.cc:47:  Weird number of spaces at line-start.  Are you using a 2-space indent?  [whitespace/indent] [3]
convolution_filter.cc:49:  Should have a space between // and comment  [whitespace/comments] [4]
convolution_filter.cc:50:  Should have a space between // and comment  [whitespace/comments] [4]
convolution_filter.cc:51:  Should have a space between // and comment  [whitespace/comments] [4]
convolution_filter.cc:52:  Missing space after ,  [whitespace/comma] [3]
convolution_filter.cc:56:  Weird number of spaces at line-start.  Are you using a 2-space indent?  [whitespace/indent] [3]
convolution_filter.cc:58:  Weird number of spaces at line-start.  Are you using a 2-space indent?  [whitespace/indent] [3]
convolution_filter.cc:59:  Using C-style cast.  Use static_cast<int>(...) instead  [readability/casting] [4]
convolution_filter.cc:61:  Weird number of spaces at line-start.  Are you using a 2-space indent?  [whitespace/indent] [3]
convolution_filter.cc:62:  Weird number of spaces at line-start.  Are you using a 2-space indent?  [whitespace/indent] [3]
convolution_filter_edge.cc:13:  Weird number of spaces at line-start.  Are you using a 2-space indent?  [whitespace/indent] [3]
convolution_filter_edge.cc:16:  Weird number of spaces at line-start.  Are you using a 2-space indent?  [whitespace/indent] [3]
convolution_filter_edge.cc:17:  Missing space after ,  [whitespace/comma] [3]
convolution_filter_edge.cc:18:  Weird number of spaces at line-start.  Are you using a 2-space indent?  [whitespace/indent] [3]
convolution_filter_edge.cc:21:  Missing space after ,  [whitespace/comma] [3]
convolution_filter_edge.cc:23:  Weird number of spaces at line-start.  Are you using a 2-space indent?  [whitespace/indent] [3]
convolution_filter_motion_blur.cc:13:  Weird number of spaces at line-start.  Are you using a 2-space indent?  [whitespace/indent] [3]
convolution_filter_motion_blur.cc:13:  Missing space before {  [whitespace/braces] [5]
convolution_filter_motion_blur.cc:19:  Weird number of spaces at line-start.  Are you using a 2-space indent?  [whitespace/indent] [3]
convolution_filter_motion_blur.cc:21:  Missing space before ( in if(  [whitespace/parens] [5]
convolution_filter_motion_blur.cc:22:  Missing space after ,  [whitespace/comma] [3]
convolution_filter_motion_blur.cc:24:  Missing space after ,  [whitespace/comma] [3]
convolution_filter_motion_blur.cc:26:  Weird number of spaces at line-start.  Are you using a 2-space indent?  [whitespace/indent] [3]
convolution_filter_motion_blur.cc:29:  Weird number of spaces at line-start.  Are you using a 2-space indent?  [whitespace/indent] [3]
convolution_filter_motion_blur.cc:31:  Missing space before ( in if(  [whitespace/parens] [5]
convolution_filter_motion_blur.cc:32:  Missing space after ,  [whitespace/comma] [3]
convolution_filter_motion_blur.cc:34:  Missing space after ,  [whitespace/comma] [3]
convolution_filter_motion_blur.cc:36:  Weird number of spaces at line-start.  Are you using a 2-space indent?  [whitespace/indent] [3]
convolution_filter_motion_blur.cc:39:  Weird number of spaces at line-start.  Are you using a 2-space indent?  [whitespace/indent] [3]
convolution_filter_motion_blur.cc:41:  Missing space before ( in if(  [whitespace/parens] [5]
convolution_filter_motion_blur.cc:42:  Missing space after ,  [whitespace/comma] [3]
convolution_filter_motion_blur.cc:44:  Missing space after ,  [whitespace/comma] [3]
convolution_filter_motion_blur.cc:46:  Weird number of spaces at line-start.  Are you using a 2-space indent?  [whitespace/indent] [3]
convolution_filter_motion_blur.cc:49:  Weird number of spaces at line-start.  Are you using a 2-space indent?  [whitespace/indent] [3]
convolution_filter_motion_blur.cc:51:  Missing space before ( in if(  [whitespace/parens] [5]
convolution_filter_motion_blur.cc:52:  Missing space after ,  [whitespace/comma] [3]
convolution_filter_motion_blur.cc:54:  Missing space after ,  [whitespace/comma] [3]
convolution_filter_motion_blur.cc:56:  Weird number of spaces at line-start.  Are you using a 2-space indent?  [whitespace/indent] [3]
convolution_filter_motion_blur.cc:102:  Weird number of spaces at line-start.  Are you using a 2-space indent?  [whitespace/indent] [3]
convolution_filter_sharpen.cc:12:  Weird number of spaces at line-start.  Are you using a 2-space indent?  [whitespace/indent] [3]
convolution_filter_sharpen.cc:13:  Weird number of spaces at line-start.  Are you using a 2-space indent?  [whitespace/indent] [3]
convolution_filter_sharpen.cc:14:  Weird number of spaces at line-start.  Are you using a 2-space indent?  [whitespace/indent] [3]
convolution_filter_sharpen.cc:15:  Weird number of spaces at line-start.  Are you using a 2-space indent?  [whitespace/indent] [3]
convolution_filter_sharpen.cc:17:  Missing space after ,  [whitespace/comma] [3]
convolution_filter_sharpen.cc:19:  Weird number of spaces at line-start.  Are you using a 2-space indent?  [whitespace/indent] [3]
convolution_filter_sharpen.cc:20:  Weird number of spaces at line-start.  Are you using a 2-space indent?  [whitespace/indent] [3]
convolution_filter_sharpen.cc:21:  Weird number of spaces at line-start.  Are you using a 2-space indent?  [whitespace/indent] [3]
convolution_filter_sharpen.cc:21:  Missing space after ,  [whitespace/comma] [3]
convolution_filter_sharpen.cc:22:  Weird number of spaces at line-start.  Are you using a 2-space indent?  [whitespace/indent] [3]
convolution_filter_sharpen.cc:23:  Weird number of spaces at line-start.  Are you using a 2-space indent?  [whitespace/indent] [3]
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
filter.cc:33:  Weird number of spaces at line-start.  Are you using a 2-space indent?  [whitespace/indent] [3]
filter.cc:36:  Weird number of spaces at line-start.  Are you using a 2-space indent?  [whitespace/indent] [3]
filter.cc:40:  Weird number of spaces at line-start.  Are you using a 2-space indent?  [whitespace/indent] [3]
filter.cc:43:  You don't need a ; after a }  [readability/braces] [4]
filter.cc:44:  You don't need a ; after a }  [readability/braces] [4]
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
tool_blur.cc:34:  Missing username in TODO; it should look like "// TODO(my_username): Stuff."  [readability/todo] [2]
tool_blur.cc:42:  Missing username in TODO; it should look like "// TODO(my_username): Stuff."  [readability/todo] [2]
color_data.h:60:  Line ends in whitespace.  Consider deleting these extra spaces.  [whitespace/end_of_line] [4]
color_data.h:63:  Line ends in whitespace.  Consider deleting these extra spaces.  [whitespace/end_of_line] [4]
convolution_filter_blur.h:8:  #ifndef header guard has wrong style, please use: FLASHPHOTO_CONVOLUTION_FILTER_BLUR_H_  [build/header_guard] [5]
convolution_filter_blur.h:23:  #endif line should be "#endif  // FLASHPHOTO_CONVOLUTION_FILTER_BLUR_H_"  [build/header_guard] [5]
convolution_filter_blur.h:16:  Do not indent within a namespace  [runtime/indentation_namespace] [4]
convolution_filter_blur.h:16:  Weird number of spaces at line-start.  Are you using a 2-space indent?  [whitespace/indent] [3]
convolution_filter_blur.h:18:  Weird number of spaces at line-start.  Are you using a 2-space indent?  [whitespace/indent] [3]
convolution_filter_blur.h:19:  Redundant blank line at the end of a code block should be deleted.  [whitespace/blank_line] [3]
convolution_filter_blur.h:20:  Weird number of spaces at line-start.  Are you using a 2-space indent?  [whitespace/indent] [3]
convolution_filter_edge.h:8:  #ifndef header guard has wrong style, please use: FLASHPHOTO_CONVOLUTION_FILTER_EDGE_H_  [build/header_guard] [5]
convolution_filter_edge.h:22:  #endif line should be "#endif  // FLASHPHOTO_CONVOLUTION_FILTER_EDGE_H_"  [build/header_guard] [5]
convolution_filter_edge.h:16:  Do not indent within a namespace  [runtime/indentation_namespace] [4]
convolution_filter_edge.h:16:  Weird number of spaces at line-start.  Are you using a 2-space indent?  [whitespace/indent] [3]
convolution_filter_edge.h:18:  Weird number of spaces at line-start.  Are you using a 2-space indent?  [whitespace/indent] [3]
convolution_filter_edge.h:19:  Redundant blank line at the end of a code block should be deleted.  [whitespace/blank_line] [3]
convolution_filter_edge.h:20:  Weird number of spaces at line-start.  Are you using a 2-space indent?  [whitespace/indent] [3]
convolution_filter.h:29:  Missing spaces around =  [whitespace/operators] [4]
convolution_filter.h:44:  Should have a space between // and comment  [whitespace/comments] [4]
convolution_filter_motion_blur.h:10:  #ifndef header guard has wrong style, please use: FLASHPHOTO_CONVOLUTION_FILTER_MOTION_BLUR_H_  [build/header_guard] [5]
convolution_filter_motion_blur.h:34:  #endif line should be "#endif  // FLASHPHOTO_CONVOLUTION_FILTER_MOTION_BLUR_H_"  [build/header_guard] [5]
convolution_filter_motion_blur.h:20:  Do not indent within a namespace  [runtime/indentation_namespace] [4]
convolution_filter_motion_blur.h:20:  Weird number of spaces at line-start.  Are you using a 2-space indent?  [whitespace/indent] [3]
convolution_filter_motion_blur.h:22:  Weird number of spaces at line-start.  Are you using a 2-space indent?  [whitespace/indent] [3]
convolution_filter_motion_blur.h:24:  Weird number of spaces at line-start.  Are you using a 2-space indent?  [whitespace/indent] [3]
convolution_filter_motion_blur.h:28:  Weird number of spaces at line-start.  Are you using a 2-space indent?  [whitespace/indent] [3]
convolution_filter_motion_blur.h:32:  Weird number of spaces at line-start.  Are you using a 2-space indent?  [whitespace/indent] [3]
convolution_filter_sharpen.h:8:  #ifndef header guard has wrong style, please use: FLASHPHOTO_CONVOLUTION_FILTER_SHARPEN_H_  [build/header_guard] [5]
convolution_filter_sharpen.h:22:  #endif line should be "#endif  // FLASHPHOTO_CONVOLUTION_FILTER_SHARPEN_H_"  [build/header_guard] [5]
convolution_filter_sharpen.h:19:  Redundant blank line at the end of a code block should be deleted.  [whitespace/blank_line] [3]
convolution_filter_sharpen.h:20:  Closing brace should be aligned with beginning of class ConvolutionFilterSharpen  [whitespace/indent] [3]
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
flashphoto_app.h:220:  Should have a space between // and comment  [whitespace/comments] [4]
mask_factory.h:34:  Redundant blank line at the end of a code block should be deleted.  [whitespace/blank_line] [3]
tool_blur.h:47:  Missing username in TODO; it should look like "// TODO(my_username): Stuff."  [readability/todo] [2]
tool_blur.h:50:  Redundant blank line at the end of a code block should be deleted.  [whitespace/blank_line] [3]
Done processing color_data.cc
Done processing convolution_filter_blur.cc
Done processing convolution_filter.cc
Done processing convolution_filter_edge.cc
Done processing convolution_filter_motion_blur.cc
Done processing convolution_filter_sharpen.cc
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
Done processing convolution_filter_edge.h
Done processing convolution_filter.h
Done processing convolution_filter_motion_blur.h
Done processing convolution_filter_sharpen.h
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
Total errors found: 157
Makefile:156: recipe for target 'check-style' failed
make[1]: *** [check-style] Error 1
make[1]: Leaving directory '/class/grades/Fall-2018/csci3081/student-repos/PROJ_01_Feedback/repo-weber767/PROJ/src/flashphoto'
Makefile:4: recipe for target 'check-style' failed
make: *** [check-style] Error 2
</pre>



+ Fail: Check that make compiles.

    Make compile fails with errors:.
<pre>cd src/flashphoto; make
make[1]: Entering directory '/class/grades/Fall-2018/csci3081/student-repos/PROJ_01_Feedback/repo-weber767/PROJ/src/flashphoto'
==== Auto-Generating Dependencies for filter_threshold.cc. ====
/soft/gcc/7.1.0/Linux_x86_64/bin/g++ -MM -MF /class/grades/Fall-2018/csci3081/student-repos/PROJ_01_Feedback/repo-weber767/PROJ/build/obj/flashphoto/filter_threshold.d -MP -MT /class/grades/Fall-2018/csci3081/student-repos/PROJ_01_Feedback/repo-weber767/PROJ/build/obj/flashphoto/filter_threshold.o -W -Werror -Wall -Wextra -fdiagnostics-color=always -Wfloat-equal -Wshadow -Wcast-align -Wcast-qual -Wformat=2 -Winit-self -Wlogical-op -Wmissing-declarations -Wmissing-include-dirs -Wredundant-decls -Wswitch-default -Wsuggest-override -Wstrict-null-sentinel -Wsign-promo -Wold-style-cast -Woverloaded-virtual -Wctor-dtor-privacy -Wno-old-style-cast -Wno-cast-align -g -std=c++14 -c -I.. -I. -I./.. -isystem/class/grades/Fall-2018/csci3081/student-repos/PROJ_01_Feedback/repo-weber767/PROJ/src/external/MinGfx/build/install/include -isystem/class/grades/Fall-2018/csci3081/student-repos/PROJ_01_Feedback/repo-weber767/PROJ/src/external/MinGfx/build/install/include/nanovg -isystem/class/grades/Fall-2018/csci3081/student-repos/PROJ_01_Feedback/repo-weber767/PROJ/src/external/MinGfx/build/install/include/MinGfx-1.0 filter_threshold.cc
==== Compiling filter_threshold.cc into /class/grades/Fall-2018/csci3081/student-repos/PROJ_01_Feedback/repo-weber767/PROJ/build/obj/flashphoto/filter_threshold.o. ====
/soft/gcc/7.1.0/Linux_x86_64/bin/g++ -fopenmp -W -Werror -Wall -Wextra -fdiagnostics-color=always -Wfloat-equal -Wshadow -Wcast-align -Wcast-qual -Wformat=2 -Winit-self -Wlogical-op -Wmissing-declarations -Wmissing-include-dirs -Wredundant-decls -Wswitch-default -Wsuggest-override -Wstrict-null-sentinel -Wsign-promo -Wold-style-cast -Woverloaded-virtual -Wctor-dtor-privacy -Wno-old-style-cast -Wno-cast-align -g -std=c++14 -c -I.. -I. -I./.. -isystem/class/grades/Fall-2018/csci3081/student-repos/PROJ_01_Feedback/repo-weber767/PROJ/src/external/MinGfx/build/install/include -isystem/class/grades/Fall-2018/csci3081/student-repos/PROJ_01_Feedback/repo-weber767/PROJ/src/external/MinGfx/build/install/include/nanovg -isystem/class/grades/Fall-2018/csci3081/student-repos/PROJ_01_Feedback/repo-weber767/PROJ/src/external/MinGfx/build/install/include/MinGfx-1.0  -c -fPIC -o  /class/grades/Fall-2018/csci3081/student-repos/PROJ_01_Feedback/repo-weber767/PROJ/build/obj/flashphoto/filter_threshold.o filter_threshold.cc
==== Auto-Generating Dependencies for filter_saturate.cc. ====
/soft/gcc/7.1.0/Linux_x86_64/bin/g++ -MM -MF /class/grades/Fall-2018/csci3081/student-repos/PROJ_01_Feedback/repo-weber767/PROJ/build/obj/flashphoto/filter_saturate.d -MP -MT /class/grades/Fall-2018/csci3081/student-repos/PROJ_01_Feedback/repo-weber767/PROJ/build/obj/flashphoto/filter_saturate.o -W -Werror -Wall -Wextra -fdiagnostics-color=always -Wfloat-equal -Wshadow -Wcast-align -Wcast-qual -Wformat=2 -Winit-self -Wlogical-op -Wmissing-declarations -Wmissing-include-dirs -Wredundant-decls -Wswitch-default -Wsuggest-override -Wstrict-null-sentinel -Wsign-promo -Wold-style-cast -Woverloaded-virtual -Wctor-dtor-privacy -Wno-old-style-cast -Wno-cast-align -g -std=c++14 -c -I.. -I. -I./.. -isystem/class/grades/Fall-2018/csci3081/student-repos/PROJ_01_Feedback/repo-weber767/PROJ/src/external/MinGfx/build/install/include -isystem/class/grades/Fall-2018/csci3081/student-repos/PROJ_01_Feedback/repo-weber767/PROJ/src/external/MinGfx/build/install/include/nanovg -isystem/class/grades/Fall-2018/csci3081/student-repos/PROJ_01_Feedback/repo-weber767/PROJ/src/external/MinGfx/build/install/include/MinGfx-1.0 filter_saturate.cc
==== Compiling filter_saturate.cc into /class/grades/Fall-2018/csci3081/student-repos/PROJ_01_Feedback/repo-weber767/PROJ/build/obj/flashphoto/filter_saturate.o. ====
/soft/gcc/7.1.0/Linux_x86_64/bin/g++ -fopenmp -W -Werror -Wall -Wextra -fdiagnostics-color=always -Wfloat-equal -Wshadow -Wcast-align -Wcast-qual -Wformat=2 -Winit-self -Wlogical-op -Wmissing-declarations -Wmissing-include-dirs -Wredundant-decls -Wswitch-default -Wsuggest-override -Wstrict-null-sentinel -Wsign-promo -Wold-style-cast -Woverloaded-virtual -Wctor-dtor-privacy -Wno-old-style-cast -Wno-cast-align -g -std=c++14 -c -I.. -I. -I./.. -isystem/class/grades/Fall-2018/csci3081/student-repos/PROJ_01_Feedback/repo-weber767/PROJ/src/external/MinGfx/build/install/include -isystem/class/grades/Fall-2018/csci3081/student-repos/PROJ_01_Feedback/repo-weber767/PROJ/src/external/MinGfx/build/install/include/nanovg -isystem/class/grades/Fall-2018/csci3081/student-repos/PROJ_01_Feedback/repo-weber767/PROJ/src/external/MinGfx/build/install/include/MinGfx-1.0  -c -fPIC -o  /class/grades/Fall-2018/csci3081/student-repos/PROJ_01_Feedback/repo-weber767/PROJ/build/obj/flashphoto/filter_saturate.o filter_saturate.cc
==== Auto-Generating Dependencies for tool.cc. ====
/soft/gcc/7.1.0/Linux_x86_64/bin/g++ -MM -MF /class/grades/Fall-2018/csci3081/student-repos/PROJ_01_Feedback/repo-weber767/PROJ/build/obj/flashphoto/tool.d -MP -MT /class/grades/Fall-2018/csci3081/student-repos/PROJ_01_Feedback/repo-weber767/PROJ/build/obj/flashphoto/tool.o -W -Werror -Wall -Wextra -fdiagnostics-color=always -Wfloat-equal -Wshadow -Wcast-align -Wcast-qual -Wformat=2 -Winit-self -Wlogical-op -Wmissing-declarations -Wmissing-include-dirs -Wredundant-decls -Wswitch-default -Wsuggest-override -Wstrict-null-sentinel -Wsign-promo -Wold-style-cast -Woverloaded-virtual -Wctor-dtor-privacy -Wno-old-style-cast -Wno-cast-align -g -std=c++14 -c -I.. -I. -I./.. -isystem/class/grades/Fall-2018/csci3081/student-repos/PROJ_01_Feedback/repo-weber767/PROJ/src/external/MinGfx/build/install/include -isystem/class/grades/Fall-2018/csci3081/student-repos/PROJ_01_Feedback/repo-weber767/PROJ/src/external/MinGfx/build/install/include/nanovg -isystem/class/grades/Fall-2018/csci3081/student-repos/PROJ_01_Feedback/repo-weber767/PROJ/src/external/MinGfx/build/install/include/MinGfx-1.0 tool.cc
==== Compiling tool.cc into /class/grades/Fall-2018/csci3081/student-repos/PROJ_01_Feedback/repo-weber767/PROJ/build/obj/flashphoto/tool.o. ====
/soft/gcc/7.1.0/Linux_x86_64/bin/g++ -fopenmp -W -Werror -Wall -Wextra -fdiagnostics-color=always -Wfloat-equal -Wshadow -Wcast-align -Wcast-qual -Wformat=2 -Winit-self -Wlogical-op -Wmissing-declarations -Wmissing-include-dirs -Wredundant-decls -Wswitch-default -Wsuggest-override -Wstrict-null-sentinel -Wsign-promo -Wold-style-cast -Woverloaded-virtual -Wctor-dtor-privacy -Wno-old-style-cast -Wno-cast-align -g -std=c++14 -c -I.. -I. -I./.. -isystem/class/grades/Fall-2018/csci3081/student-repos/PROJ_01_Feedback/repo-weber767/PROJ/src/external/MinGfx/build/install/include -isystem/class/grades/Fall-2018/csci3081/student-repos/PROJ_01_Feedback/repo-weber767/PROJ/src/external/MinGfx/build/install/include/nanovg -isystem/class/grades/Fall-2018/csci3081/student-repos/PROJ_01_Feedback/repo-weber767/PROJ/src/external/MinGfx/build/install/include/MinGfx-1.0  -c -fPIC -o  /class/grades/Fall-2018/csci3081/student-repos/PROJ_01_Feedback/repo-weber767/PROJ/build/obj/flashphoto/tool.o tool.cc
==== Auto-Generating Dependencies for tool_calligraphy_pen.cc. ====
/soft/gcc/7.1.0/Linux_x86_64/bin/g++ -MM -MF /class/grades/Fall-2018/csci3081/student-repos/PROJ_01_Feedback/repo-weber767/PROJ/build/obj/flashphoto/tool_calligraphy_pen.d -MP -MT /class/grades/Fall-2018/csci3081/student-repos/PROJ_01_Feedback/repo-weber767/PROJ/build/obj/flashphoto/tool_calligraphy_pen.o -W -Werror -Wall -Wextra -fdiagnostics-color=always -Wfloat-equal -Wshadow -Wcast-align -Wcast-qual -Wformat=2 -Winit-self -Wlogical-op -Wmissing-declarations -Wmissing-include-dirs -Wredundant-decls -Wswitch-default -Wsuggest-override -Wstrict-null-sentinel -Wsign-promo -Wold-style-cast -Woverloaded-virtual -Wctor-dtor-privacy -Wno-old-style-cast -Wno-cast-align -g -std=c++14 -c -I.. -I. -I./.. -isystem/class/grades/Fall-2018/csci3081/student-repos/PROJ_01_Feedback/repo-weber767/PROJ/src/external/MinGfx/build/install/include -isystem/class/grades/Fall-2018/csci3081/student-repos/PROJ_01_Feedback/repo-weber767/PROJ/src/external/MinGfx/build/install/include/nanovg -isystem/class/grades/Fall-2018/csci3081/student-repos/PROJ_01_Feedback/repo-weber767/PROJ/src/external/MinGfx/build/install/include/MinGfx-1.0 tool_calligraphy_pen.cc
==== Compiling tool_calligraphy_pen.cc into /class/grades/Fall-2018/csci3081/student-repos/PROJ_01_Feedback/repo-weber767/PROJ/build/obj/flashphoto/tool_calligraphy_pen.o. ====
/soft/gcc/7.1.0/Linux_x86_64/bin/g++ -fopenmp -W -Werror -Wall -Wextra -fdiagnostics-color=always -Wfloat-equal -Wshadow -Wcast-align -Wcast-qual -Wformat=2 -Winit-self -Wlogical-op -Wmissing-declarations -Wmissing-include-dirs -Wredundant-decls -Wswitch-default -Wsuggest-override -Wstrict-null-sentinel -Wsign-promo -Wold-style-cast -Woverloaded-virtual -Wctor-dtor-privacy -Wno-old-style-cast -Wno-cast-align -g -std=c++14 -c -I.. -I. -I./.. -isystem/class/grades/Fall-2018/csci3081/student-repos/PROJ_01_Feedback/repo-weber767/PROJ/src/external/MinGfx/build/install/include -isystem/class/grades/Fall-2018/csci3081/student-repos/PROJ_01_Feedback/repo-weber767/PROJ/src/external/MinGfx/build/install/include/nanovg -isystem/class/grades/Fall-2018/csci3081/student-repos/PROJ_01_Feedback/repo-weber767/PROJ/src/external/MinGfx/build/install/include/MinGfx-1.0  -c -fPIC -o  /class/grades/Fall-2018/csci3081/student-repos/PROJ_01_Feedback/repo-weber767/PROJ/build/obj/flashphoto/tool_calligraphy_pen.o tool_calligraphy_pen.cc
==== Auto-Generating Dependencies for pixel_buffer.cc. ====
/soft/gcc/7.1.0/Linux_x86_64/bin/g++ -MM -MF /class/grades/Fall-2018/csci3081/student-repos/PROJ_01_Feedback/repo-weber767/PROJ/build/obj/flashphoto/pixel_buffer.d -MP -MT /class/grades/Fall-2018/csci3081/student-repos/PROJ_01_Feedback/repo-weber767/PROJ/build/obj/flashphoto/pixel_buffer.o -W -Werror -Wall -Wextra -fdiagnostics-color=always -Wfloat-equal -Wshadow -Wcast-align -Wcast-qual -Wformat=2 -Winit-self -Wlogical-op -Wmissing-declarations -Wmissing-include-dirs -Wredundant-decls -Wswitch-default -Wsuggest-override -Wstrict-null-sentinel -Wsign-promo -Wold-style-cast -Woverloaded-virtual -Wctor-dtor-privacy -Wno-old-style-cast -Wno-cast-align -g -std=c++14 -c -I.. -I. -I./.. -isystem/class/grades/Fall-2018/csci3081/student-repos/PROJ_01_Feedback/repo-weber767/PROJ/src/external/MinGfx/build/install/include -isystem/class/grades/Fall-2018/csci3081/student-repos/PROJ_01_Feedback/repo-weber767/PROJ/src/external/MinGfx/build/install/include/nanovg -isystem/class/grades/Fall-2018/csci3081/student-repos/PROJ_01_Feedback/repo-weber767/PROJ/src/external/MinGfx/build/install/include/MinGfx-1.0 pixel_buffer.cc
==== Compiling pixel_buffer.cc into /class/grades/Fall-2018/csci3081/student-repos/PROJ_01_Feedback/repo-weber767/PROJ/build/obj/flashphoto/pixel_buffer.o. ====
/soft/gcc/7.1.0/Linux_x86_64/bin/g++ -fopenmp -W -Werror -Wall -Wextra -fdiagnostics-color=always -Wfloat-equal -Wshadow -Wcast-align -Wcast-qual -Wformat=2 -Winit-self -Wlogical-op -Wmissing-declarations -Wmissing-include-dirs -Wredundant-decls -Wswitch-default -Wsuggest-override -Wstrict-null-sentinel -Wsign-promo -Wold-style-cast -Woverloaded-virtual -Wctor-dtor-privacy -Wno-old-style-cast -Wno-cast-align -g -std=c++14 -c -I.. -I. -I./.. -isystem/class/grades/Fall-2018/csci3081/student-repos/PROJ_01_Feedback/repo-weber767/PROJ/src/external/MinGfx/build/install/include -isystem/class/grades/Fall-2018/csci3081/student-repos/PROJ_01_Feedback/repo-weber767/PROJ/src/external/MinGfx/build/install/include/nanovg -isystem/class/grades/Fall-2018/csci3081/student-repos/PROJ_01_Feedback/repo-weber767/PROJ/src/external/MinGfx/build/install/include/MinGfx-1.0  -c -fPIC -o  /class/grades/Fall-2018/csci3081/student-repos/PROJ_01_Feedback/repo-weber767/PROJ/build/obj/flashphoto/pixel_buffer.o pixel_buffer.cc
==== Auto-Generating Dependencies for convolution_filter_edge.cc. ====
/soft/gcc/7.1.0/Linux_x86_64/bin/g++ -MM -MF /class/grades/Fall-2018/csci3081/student-repos/PROJ_01_Feedback/repo-weber767/PROJ/build/obj/flashphoto/convolution_filter_edge.d -MP -MT /class/grades/Fall-2018/csci3081/student-repos/PROJ_01_Feedback/repo-weber767/PROJ/build/obj/flashphoto/convolution_filter_edge.o -W -Werror -Wall -Wextra -fdiagnostics-color=always -Wfloat-equal -Wshadow -Wcast-align -Wcast-qual -Wformat=2 -Winit-self -Wlogical-op -Wmissing-declarations -Wmissing-include-dirs -Wredundant-decls -Wswitch-default -Wsuggest-override -Wstrict-null-sentinel -Wsign-promo -Wold-style-cast -Woverloaded-virtual -Wctor-dtor-privacy -Wno-old-style-cast -Wno-cast-align -g -std=c++14 -c -I.. -I. -I./.. -isystem/class/grades/Fall-2018/csci3081/student-repos/PROJ_01_Feedback/repo-weber767/PROJ/src/external/MinGfx/build/install/include -isystem/class/grades/Fall-2018/csci3081/student-repos/PROJ_01_Feedback/repo-weber767/PROJ/src/external/MinGfx/build/install/include/nanovg -isystem/class/grades/Fall-2018/csci3081/student-repos/PROJ_01_Feedback/repo-weber767/PROJ/src/external/MinGfx/build/install/include/MinGfx-1.0 convolution_filter_edge.cc
==== Compiling convolution_filter_edge.cc into /class/grades/Fall-2018/csci3081/student-repos/PROJ_01_Feedback/repo-weber767/PROJ/build/obj/flashphoto/convolution_filter_edge.o. ====
/soft/gcc/7.1.0/Linux_x86_64/bin/g++ -fopenmp -W -Werror -Wall -Wextra -fdiagnostics-color=always -Wfloat-equal -Wshadow -Wcast-align -Wcast-qual -Wformat=2 -Winit-self -Wlogical-op -Wmissing-declarations -Wmissing-include-dirs -Wredundant-decls -Wswitch-default -Wsuggest-override -Wstrict-null-sentinel -Wsign-promo -Wold-style-cast -Woverloaded-virtual -Wctor-dtor-privacy -Wno-old-style-cast -Wno-cast-align -g -std=c++14 -c -I.. -I. -I./.. -isystem/class/grades/Fall-2018/csci3081/student-repos/PROJ_01_Feedback/repo-weber767/PROJ/src/external/MinGfx/build/install/include -isystem/class/grades/Fall-2018/csci3081/student-repos/PROJ_01_Feedback/repo-weber767/PROJ/src/external/MinGfx/build/install/include/nanovg -isystem/class/grades/Fall-2018/csci3081/student-repos/PROJ_01_Feedback/repo-weber767/PROJ/src/external/MinGfx/build/install/include/MinGfx-1.0  -c -fPIC -o  /class/grades/Fall-2018/csci3081/student-repos/PROJ_01_Feedback/repo-weber767/PROJ/build/obj/flashphoto/convolution_filter_edge.o convolution_filter_edge.cc
==== Auto-Generating Dependencies for filter.cc. ====
/soft/gcc/7.1.0/Linux_x86_64/bin/g++ -MM -MF /class/grades/Fall-2018/csci3081/student-repos/PROJ_01_Feedback/repo-weber767/PROJ/build/obj/flashphoto/filter.d -MP -MT /class/grades/Fall-2018/csci3081/student-repos/PROJ_01_Feedback/repo-weber767/PROJ/build/obj/flashphoto/filter.o -W -Werror -Wall -Wextra -fdiagnostics-color=always -Wfloat-equal -Wshadow -Wcast-align -Wcast-qual -Wformat=2 -Winit-self -Wlogical-op -Wmissing-declarations -Wmissing-include-dirs -Wredundant-decls -Wswitch-default -Wsuggest-override -Wstrict-null-sentinel -Wsign-promo -Wold-style-cast -Woverloaded-virtual -Wctor-dtor-privacy -Wno-old-style-cast -Wno-cast-align -g -std=c++14 -c -I.. -I. -I./.. -isystem/class/grades/Fall-2018/csci3081/student-repos/PROJ_01_Feedback/repo-weber767/PROJ/src/external/MinGfx/build/install/include -isystem/class/grades/Fall-2018/csci3081/student-repos/PROJ_01_Feedback/repo-weber767/PROJ/src/external/MinGfx/build/install/include/nanovg -isystem/class/grades/Fall-2018/csci3081/student-repos/PROJ_01_Feedback/repo-weber767/PROJ/src/external/MinGfx/build/install/include/MinGfx-1.0 filter.cc
==== Compiling filter.cc into /class/grades/Fall-2018/csci3081/student-repos/PROJ_01_Feedback/repo-weber767/PROJ/build/obj/flashphoto/filter.o. ====
/soft/gcc/7.1.0/Linux_x86_64/bin/g++ -fopenmp -W -Werror -Wall -Wextra -fdiagnostics-color=always -Wfloat-equal -Wshadow -Wcast-align -Wcast-qual -Wformat=2 -Winit-self -Wlogical-op -Wmissing-declarations -Wmissing-include-dirs -Wredundant-decls -Wswitch-default -Wsuggest-override -Wstrict-null-sentinel -Wsign-promo -Wold-style-cast -Woverloaded-virtual -Wctor-dtor-privacy -Wno-old-style-cast -Wno-cast-align -g -std=c++14 -c -I.. -I. -I./.. -isystem/class/grades/Fall-2018/csci3081/student-repos/PROJ_01_Feedback/repo-weber767/PROJ/src/external/MinGfx/build/install/include -isystem/class/grades/Fall-2018/csci3081/student-repos/PROJ_01_Feedback/repo-weber767/PROJ/src/external/MinGfx/build/install/include/nanovg -isystem/class/grades/Fall-2018/csci3081/student-repos/PROJ_01_Feedback/repo-weber767/PROJ/src/external/MinGfx/build/install/include/MinGfx-1.0  -c -fPIC -o  /class/grades/Fall-2018/csci3081/student-repos/PROJ_01_Feedback/repo-weber767/PROJ/build/obj/flashphoto/filter.o filter.cc
==== Auto-Generating Dependencies for color_data.cc. ====
/soft/gcc/7.1.0/Linux_x86_64/bin/g++ -MM -MF /class/grades/Fall-2018/csci3081/student-repos/PROJ_01_Feedback/repo-weber767/PROJ/build/obj/flashphoto/color_data.d -MP -MT /class/grades/Fall-2018/csci3081/student-repos/PROJ_01_Feedback/repo-weber767/PROJ/build/obj/flashphoto/color_data.o -W -Werror -Wall -Wextra -fdiagnostics-color=always -Wfloat-equal -Wshadow -Wcast-align -Wcast-qual -Wformat=2 -Winit-self -Wlogical-op -Wmissing-declarations -Wmissing-include-dirs -Wredundant-decls -Wswitch-default -Wsuggest-override -Wstrict-null-sentinel -Wsign-promo -Wold-style-cast -Woverloaded-virtual -Wctor-dtor-privacy -Wno-old-style-cast -Wno-cast-align -g -std=c++14 -c -I.. -I. -I./.. -isystem/class/grades/Fall-2018/csci3081/student-repos/PROJ_01_Feedback/repo-weber767/PROJ/src/external/MinGfx/build/install/include -isystem/class/grades/Fall-2018/csci3081/student-repos/PROJ_01_Feedback/repo-weber767/PROJ/src/external/MinGfx/build/install/include/nanovg -isystem/class/grades/Fall-2018/csci3081/student-repos/PROJ_01_Feedback/repo-weber767/PROJ/src/external/MinGfx/build/install/include/MinGfx-1.0 color_data.cc
==== Compiling color_data.cc into /class/grades/Fall-2018/csci3081/student-repos/PROJ_01_Feedback/repo-weber767/PROJ/build/obj/flashphoto/color_data.o. ====
/soft/gcc/7.1.0/Linux_x86_64/bin/g++ -fopenmp -W -Werror -Wall -Wextra -fdiagnostics-color=always -Wfloat-equal -Wshadow -Wcast-align -Wcast-qual -Wformat=2 -Winit-self -Wlogical-op -Wmissing-declarations -Wmissing-include-dirs -Wredundant-decls -Wswitch-default -Wsuggest-override -Wstrict-null-sentinel -Wsign-promo -Wold-style-cast -Woverloaded-virtual -Wctor-dtor-privacy -Wno-old-style-cast -Wno-cast-align -g -std=c++14 -c -I.. -I. -I./.. -isystem/class/grades/Fall-2018/csci3081/student-repos/PROJ_01_Feedback/repo-weber767/PROJ/src/external/MinGfx/build/install/include -isystem/class/grades/Fall-2018/csci3081/student-repos/PROJ_01_Feedback/repo-weber767/PROJ/src/external/MinGfx/build/install/include/nanovg -isystem/class/grades/Fall-2018/csci3081/student-repos/PROJ_01_Feedback/repo-weber767/PROJ/src/external/MinGfx/build/install/include/MinGfx-1.0  -c -fPIC -o  /class/grades/Fall-2018/csci3081/student-repos/PROJ_01_Feedback/repo-weber767/PROJ/build/obj/flashphoto/color_data.o color_data.cc
==== Auto-Generating Dependencies for convolution_filter.cc. ====
/soft/gcc/7.1.0/Linux_x86_64/bin/g++ -MM -MF /class/grades/Fall-2018/csci3081/student-repos/PROJ_01_Feedback/repo-weber767/PROJ/build/obj/flashphoto/convolution_filter.d -MP -MT /class/grades/Fall-2018/csci3081/student-repos/PROJ_01_Feedback/repo-weber767/PROJ/build/obj/flashphoto/convolution_filter.o -W -Werror -Wall -Wextra -fdiagnostics-color=always -Wfloat-equal -Wshadow -Wcast-align -Wcast-qual -Wformat=2 -Winit-self -Wlogical-op -Wmissing-declarations -Wmissing-include-dirs -Wredundant-decls -Wswitch-default -Wsuggest-override -Wstrict-null-sentinel -Wsign-promo -Wold-style-cast -Woverloaded-virtual -Wctor-dtor-privacy -Wno-old-style-cast -Wno-cast-align -g -std=c++14 -c -I.. -I. -I./.. -isystem/class/grades/Fall-2018/csci3081/student-repos/PROJ_01_Feedback/repo-weber767/PROJ/src/external/MinGfx/build/install/include -isystem/class/grades/Fall-2018/csci3081/student-repos/PROJ_01_Feedback/repo-weber767/PROJ/src/external/MinGfx/build/install/include/nanovg -isystem/class/grades/Fall-2018/csci3081/student-repos/PROJ_01_Feedback/repo-weber767/PROJ/src/external/MinGfx/build/install/include/MinGfx-1.0 convolution_filter.cc
==== Compiling convolution_filter.cc into /class/grades/Fall-2018/csci3081/student-repos/PROJ_01_Feedback/repo-weber767/PROJ/build/obj/flashphoto/convolution_filter.o. ====
/soft/gcc/7.1.0/Linux_x86_64/bin/g++ -fopenmp -W -Werror -Wall -Wextra -fdiagnostics-color=always -Wfloat-equal -Wshadow -Wcast-align -Wcast-qual -Wformat=2 -Winit-self -Wlogical-op -Wmissing-declarations -Wmissing-include-dirs -Wredundant-decls -Wswitch-default -Wsuggest-override -Wstrict-null-sentinel -Wsign-promo -Wold-style-cast -Woverloaded-virtual -Wctor-dtor-privacy -Wno-old-style-cast -Wno-cast-align -g -std=c++14 -c -I.. -I. -I./.. -isystem/class/grades/Fall-2018/csci3081/student-repos/PROJ_01_Feedback/repo-weber767/PROJ/src/external/MinGfx/build/install/include -isystem/class/grades/Fall-2018/csci3081/student-repos/PROJ_01_Feedback/repo-weber767/PROJ/src/external/MinGfx/build/install/include/nanovg -isystem/class/grades/Fall-2018/csci3081/student-repos/PROJ_01_Feedback/repo-weber767/PROJ/src/external/MinGfx/build/install/include/MinGfx-1.0  -c -fPIC -o  /class/grades/Fall-2018/csci3081/student-repos/PROJ_01_Feedback/repo-weber767/PROJ/build/obj/flashphoto/convolution_filter.o convolution_filter.cc
==== Auto-Generating Dependencies for mask_factory.cc. ====
/soft/gcc/7.1.0/Linux_x86_64/bin/g++ -MM -MF /class/grades/Fall-2018/csci3081/student-repos/PROJ_01_Feedback/repo-weber767/PROJ/build/obj/flashphoto/mask_factory.d -MP -MT /class/grades/Fall-2018/csci3081/student-repos/PROJ_01_Feedback/repo-weber767/PROJ/build/obj/flashphoto/mask_factory.o -W -Werror -Wall -Wextra -fdiagnostics-color=always -Wfloat-equal -Wshadow -Wcast-align -Wcast-qual -Wformat=2 -Winit-self -Wlogical-op -Wmissing-declarations -Wmissing-include-dirs -Wredundant-decls -Wswitch-default -Wsuggest-override -Wstrict-null-sentinel -Wsign-promo -Wold-style-cast -Woverloaded-virtual -Wctor-dtor-privacy -Wno-old-style-cast -Wno-cast-align -g -std=c++14 -c -I.. -I. -I./.. -isystem/class/grades/Fall-2018/csci3081/student-repos/PROJ_01_Feedback/repo-weber767/PROJ/src/external/MinGfx/build/install/include -isystem/class/grades/Fall-2018/csci3081/student-repos/PROJ_01_Feedback/repo-weber767/PROJ/src/external/MinGfx/build/install/include/nanovg -isystem/class/grades/Fall-2018/csci3081/student-repos/PROJ_01_Feedback/repo-weber767/PROJ/src/external/MinGfx/build/install/include/MinGfx-1.0 mask_factory.cc
==== Compiling mask_factory.cc into /class/grades/Fall-2018/csci3081/student-repos/PROJ_01_Feedback/repo-weber767/PROJ/build/obj/flashphoto/mask_factory.o. ====
/soft/gcc/7.1.0/Linux_x86_64/bin/g++ -fopenmp -W -Werror -Wall -Wextra -fdiagnostics-color=always -Wfloat-equal -Wshadow -Wcast-align -Wcast-qual -Wformat=2 -Winit-self -Wlogical-op -Wmissing-declarations -Wmissing-include-dirs -Wredundant-decls -Wswitch-default -Wsuggest-override -Wstrict-null-sentinel -Wsign-promo -Wold-style-cast -Woverloaded-virtual -Wctor-dtor-privacy -Wno-old-style-cast -Wno-cast-align -g -std=c++14 -c -I.. -I. -I./.. -isystem/class/grades/Fall-2018/csci3081/student-repos/PROJ_01_Feedback/repo-weber767/PROJ/src/external/MinGfx/build/install/include -isystem/class/grades/Fall-2018/csci3081/student-repos/PROJ_01_Feedback/repo-weber767/PROJ/src/external/MinGfx/build/install/include/nanovg -isystem/class/grades/Fall-2018/csci3081/student-repos/PROJ_01_Feedback/repo-weber767/PROJ/src/external/MinGfx/build/install/include/MinGfx-1.0  -c -fPIC -o  /class/grades/Fall-2018/csci3081/student-repos/PROJ_01_Feedback/repo-weber767/PROJ/build/obj/flashphoto/mask_factory.o mask_factory.cc
==== Auto-Generating Dependencies for tool_pen.cc. ====
/soft/gcc/7.1.0/Linux_x86_64/bin/g++ -MM -MF /class/grades/Fall-2018/csci3081/student-repos/PROJ_01_Feedback/repo-weber767/PROJ/build/obj/flashphoto/tool_pen.d -MP -MT /class/grades/Fall-2018/csci3081/student-repos/PROJ_01_Feedback/repo-weber767/PROJ/build/obj/flashphoto/tool_pen.o -W -Werror -Wall -Wextra -fdiagnostics-color=always -Wfloat-equal -Wshadow -Wcast-align -Wcast-qual -Wformat=2 -Winit-self -Wlogical-op -Wmissing-declarations -Wmissing-include-dirs -Wredundant-decls -Wswitch-default -Wsuggest-override -Wstrict-null-sentinel -Wsign-promo -Wold-style-cast -Woverloaded-virtual -Wctor-dtor-privacy -Wno-old-style-cast -Wno-cast-align -g -std=c++14 -c -I.. -I. -I./.. -isystem/class/grades/Fall-2018/csci3081/student-repos/PROJ_01_Feedback/repo-weber767/PROJ/src/external/MinGfx/build/install/include -isystem/class/grades/Fall-2018/csci3081/student-repos/PROJ_01_Feedback/repo-weber767/PROJ/src/external/MinGfx/build/install/include/nanovg -isystem/class/grades/Fall-2018/csci3081/student-repos/PROJ_01_Feedback/repo-weber767/PROJ/src/external/MinGfx/build/install/include/MinGfx-1.0 tool_pen.cc
==== Compiling tool_pen.cc into /class/grades/Fall-2018/csci3081/student-repos/PROJ_01_Feedback/repo-weber767/PROJ/build/obj/flashphoto/tool_pen.o. ====
/soft/gcc/7.1.0/Linux_x86_64/bin/g++ -fopenmp -W -Werror -Wall -Wextra -fdiagnostics-color=always -Wfloat-equal -Wshadow -Wcast-align -Wcast-qual -Wformat=2 -Winit-self -Wlogical-op -Wmissing-declarations -Wmissing-include-dirs -Wredundant-decls -Wswitch-default -Wsuggest-override -Wstrict-null-sentinel -Wsign-promo -Wold-style-cast -Woverloaded-virtual -Wctor-dtor-privacy -Wno-old-style-cast -Wno-cast-align -g -std=c++14 -c -I.. -I. -I./.. -isystem/class/grades/Fall-2018/csci3081/student-repos/PROJ_01_Feedback/repo-weber767/PROJ/src/external/MinGfx/build/install/include -isystem/class/grades/Fall-2018/csci3081/student-repos/PROJ_01_Feedback/repo-weber767/PROJ/src/external/MinGfx/build/install/include/nanovg -isystem/class/grades/Fall-2018/csci3081/student-repos/PROJ_01_Feedback/repo-weber767/PROJ/src/external/MinGfx/build/install/include/MinGfx-1.0  -c -fPIC -o  /class/grades/Fall-2018/csci3081/student-repos/PROJ_01_Feedback/repo-weber767/PROJ/build/obj/flashphoto/tool_pen.o tool_pen.cc
==== Auto-Generating Dependencies for main.cc. ====
/soft/gcc/7.1.0/Linux_x86_64/bin/g++ -MM -MF /class/grades/Fall-2018/csci3081/student-repos/PROJ_01_Feedback/repo-weber767/PROJ/build/obj/flashphoto/main.d -MP -MT /class/grades/Fall-2018/csci3081/student-repos/PROJ_01_Feedback/repo-weber767/PROJ/build/obj/flashphoto/main.o -W -Werror -Wall -Wextra -fdiagnostics-color=always -Wfloat-equal -Wshadow -Wcast-align -Wcast-qual -Wformat=2 -Winit-self -Wlogical-op -Wmissing-declarations -Wmissing-include-dirs -Wredundant-decls -Wswitch-default -Wsuggest-override -Wstrict-null-sentinel -Wsign-promo -Wold-style-cast -Woverloaded-virtual -Wctor-dtor-privacy -Wno-old-style-cast -Wno-cast-align -g -std=c++14 -c -I.. -I. -I./.. -isystem/class/grades/Fall-2018/csci3081/student-repos/PROJ_01_Feedback/repo-weber767/PROJ/src/external/MinGfx/build/install/include -isystem/class/grades/Fall-2018/csci3081/student-repos/PROJ_01_Feedback/repo-weber767/PROJ/src/external/MinGfx/build/install/include/nanovg -isystem/class/grades/Fall-2018/csci3081/student-repos/PROJ_01_Feedback/repo-weber767/PROJ/src/external/MinGfx/build/install/include/MinGfx-1.0 main.cc
==== Compiling main.cc into /class/grades/Fall-2018/csci3081/student-repos/PROJ_01_Feedback/repo-weber767/PROJ/build/obj/flashphoto/main.o. ====
/soft/gcc/7.1.0/Linux_x86_64/bin/g++ -fopenmp -W -Werror -Wall -Wextra -fdiagnostics-color=always -Wfloat-equal -Wshadow -Wcast-align -Wcast-qual -Wformat=2 -Winit-self -Wlogical-op -Wmissing-declarations -Wmissing-include-dirs -Wredundant-decls -Wswitch-default -Wsuggest-override -Wstrict-null-sentinel -Wsign-promo -Wold-style-cast -Woverloaded-virtual -Wctor-dtor-privacy -Wno-old-style-cast -Wno-cast-align -g -std=c++14 -c -I.. -I. -I./.. -isystem/class/grades/Fall-2018/csci3081/student-repos/PROJ_01_Feedback/repo-weber767/PROJ/src/external/MinGfx/build/install/include -isystem/class/grades/Fall-2018/csci3081/student-repos/PROJ_01_Feedback/repo-weber767/PROJ/src/external/MinGfx/build/install/include/nanovg -isystem/class/grades/Fall-2018/csci3081/student-repos/PROJ_01_Feedback/repo-weber767/PROJ/src/external/MinGfx/build/install/include/MinGfx-1.0  -c -fPIC -o  /class/grades/Fall-2018/csci3081/student-repos/PROJ_01_Feedback/repo-weber767/PROJ/build/obj/flashphoto/main.o main.cc
==== Auto-Generating Dependencies for tool_highlighter.cc. ====
/soft/gcc/7.1.0/Linux_x86_64/bin/g++ -MM -MF /class/grades/Fall-2018/csci3081/student-repos/PROJ_01_Feedback/repo-weber767/PROJ/build/obj/flashphoto/tool_highlighter.d -MP -MT /class/grades/Fall-2018/csci3081/student-repos/PROJ_01_Feedback/repo-weber767/PROJ/build/obj/flashphoto/tool_highlighter.o -W -Werror -Wall -Wextra -fdiagnostics-color=always -Wfloat-equal -Wshadow -Wcast-align -Wcast-qual -Wformat=2 -Winit-self -Wlogical-op -Wmissing-declarations -Wmissing-include-dirs -Wredundant-decls -Wswitch-default -Wsuggest-override -Wstrict-null-sentinel -Wsign-promo -Wold-style-cast -Woverloaded-virtual -Wctor-dtor-privacy -Wno-old-style-cast -Wno-cast-align -g -std=c++14 -c -I.. -I. -I./.. -isystem/class/grades/Fall-2018/csci3081/student-repos/PROJ_01_Feedback/repo-weber767/PROJ/src/external/MinGfx/build/install/include -isystem/class/grades/Fall-2018/csci3081/student-repos/PROJ_01_Feedback/repo-weber767/PROJ/src/external/MinGfx/build/install/include/nanovg -isystem/class/grades/Fall-2018/csci3081/student-repos/PROJ_01_Feedback/repo-weber767/PROJ/src/external/MinGfx/build/install/include/MinGfx-1.0 tool_highlighter.cc
==== Compiling tool_highlighter.cc into /class/grades/Fall-2018/csci3081/student-repos/PROJ_01_Feedback/repo-weber767/PROJ/build/obj/flashphoto/tool_highlighter.o. ====
/soft/gcc/7.1.0/Linux_x86_64/bin/g++ -fopenmp -W -Werror -Wall -Wextra -fdiagnostics-color=always -Wfloat-equal -Wshadow -Wcast-align -Wcast-qual -Wformat=2 -Winit-self -Wlogical-op -Wmissing-declarations -Wmissing-include-dirs -Wredundant-decls -Wswitch-default -Wsuggest-override -Wstrict-null-sentinel -Wsign-promo -Wold-style-cast -Woverloaded-virtual -Wctor-dtor-privacy -Wno-old-style-cast -Wno-cast-align -g -std=c++14 -c -I.. -I. -I./.. -isystem/class/grades/Fall-2018/csci3081/student-repos/PROJ_01_Feedback/repo-weber767/PROJ/src/external/MinGfx/build/install/include -isystem/class/grades/Fall-2018/csci3081/student-repos/PROJ_01_Feedback/repo-weber767/PROJ/src/external/MinGfx/build/install/include/nanovg -isystem/class/grades/Fall-2018/csci3081/student-repos/PROJ_01_Feedback/repo-weber767/PROJ/src/external/MinGfx/build/install/include/MinGfx-1.0  -c -fPIC -o  /class/grades/Fall-2018/csci3081/student-repos/PROJ_01_Feedback/repo-weber767/PROJ/build/obj/flashphoto/tool_highlighter.o tool_highlighter.cc
==== Auto-Generating Dependencies for tool_eraser.cc. ====
/soft/gcc/7.1.0/Linux_x86_64/bin/g++ -MM -MF /class/grades/Fall-2018/csci3081/student-repos/PROJ_01_Feedback/repo-weber767/PROJ/build/obj/flashphoto/tool_eraser.d -MP -MT /class/grades/Fall-2018/csci3081/student-repos/PROJ_01_Feedback/repo-weber767/PROJ/build/obj/flashphoto/tool_eraser.o -W -Werror -Wall -Wextra -fdiagnostics-color=always -Wfloat-equal -Wshadow -Wcast-align -Wcast-qual -Wformat=2 -Winit-self -Wlogical-op -Wmissing-declarations -Wmissing-include-dirs -Wredundant-decls -Wswitch-default -Wsuggest-override -Wstrict-null-sentinel -Wsign-promo -Wold-style-cast -Woverloaded-virtual -Wctor-dtor-privacy -Wno-old-style-cast -Wno-cast-align -g -std=c++14 -c -I.. -I. -I./.. -isystem/class/grades/Fall-2018/csci3081/student-repos/PROJ_01_Feedback/repo-weber767/PROJ/src/external/MinGfx/build/install/include -isystem/class/grades/Fall-2018/csci3081/student-repos/PROJ_01_Feedback/repo-weber767/PROJ/src/external/MinGfx/build/install/include/nanovg -isystem/class/grades/Fall-2018/csci3081/student-repos/PROJ_01_Feedback/repo-weber767/PROJ/src/external/MinGfx/build/install/include/MinGfx-1.0 tool_eraser.cc
==== Compiling tool_eraser.cc into /class/grades/Fall-2018/csci3081/student-repos/PROJ_01_Feedback/repo-weber767/PROJ/build/obj/flashphoto/tool_eraser.o. ====
/soft/gcc/7.1.0/Linux_x86_64/bin/g++ -fopenmp -W -Werror -Wall -Wextra -fdiagnostics-color=always -Wfloat-equal -Wshadow -Wcast-align -Wcast-qual -Wformat=2 -Winit-self -Wlogical-op -Wmissing-declarations -Wmissing-include-dirs -Wredundant-decls -Wswitch-default -Wsuggest-override -Wstrict-null-sentinel -Wsign-promo -Wold-style-cast -Woverloaded-virtual -Wctor-dtor-privacy -Wno-old-style-cast -Wno-cast-align -g -std=c++14 -c -I.. -I. -I./.. -isystem/class/grades/Fall-2018/csci3081/student-repos/PROJ_01_Feedback/repo-weber767/PROJ/src/external/MinGfx/build/install/include -isystem/class/grades/Fall-2018/csci3081/student-repos/PROJ_01_Feedback/repo-weber767/PROJ/src/external/MinGfx/build/install/include/nanovg -isystem/class/grades/Fall-2018/csci3081/student-repos/PROJ_01_Feedback/repo-weber767/PROJ/src/external/MinGfx/build/install/include/MinGfx-1.0  -c -fPIC -o  /class/grades/Fall-2018/csci3081/student-repos/PROJ_01_Feedback/repo-weber767/PROJ/build/obj/flashphoto/tool_eraser.o tool_eraser.cc
==== Auto-Generating Dependencies for tool_blur.cc. ====
/soft/gcc/7.1.0/Linux_x86_64/bin/g++ -MM -MF /class/grades/Fall-2018/csci3081/student-repos/PROJ_01_Feedback/repo-weber767/PROJ/build/obj/flashphoto/tool_blur.d -MP -MT /class/grades/Fall-2018/csci3081/student-repos/PROJ_01_Feedback/repo-weber767/PROJ/build/obj/flashphoto/tool_blur.o -W -Werror -Wall -Wextra -fdiagnostics-color=always -Wfloat-equal -Wshadow -Wcast-align -Wcast-qual -Wformat=2 -Winit-self -Wlogical-op -Wmissing-declarations -Wmissing-include-dirs -Wredundant-decls -Wswitch-default -Wsuggest-override -Wstrict-null-sentinel -Wsign-promo -Wold-style-cast -Woverloaded-virtual -Wctor-dtor-privacy -Wno-old-style-cast -Wno-cast-align -g -std=c++14 -c -I.. -I. -I./.. -isystem/class/grades/Fall-2018/csci3081/student-repos/PROJ_01_Feedback/repo-weber767/PROJ/src/external/MinGfx/build/install/include -isystem/class/grades/Fall-2018/csci3081/student-repos/PROJ_01_Feedback/repo-weber767/PROJ/src/external/MinGfx/build/install/include/nanovg -isystem/class/grades/Fall-2018/csci3081/student-repos/PROJ_01_Feedback/repo-weber767/PROJ/src/external/MinGfx/build/install/include/MinGfx-1.0 tool_blur.cc
==== Compiling tool_blur.cc into /class/grades/Fall-2018/csci3081/student-repos/PROJ_01_Feedback/repo-weber767/PROJ/build/obj/flashphoto/tool_blur.o. ====
/soft/gcc/7.1.0/Linux_x86_64/bin/g++ -fopenmp -W -Werror -Wall -Wextra -fdiagnostics-color=always -Wfloat-equal -Wshadow -Wcast-align -Wcast-qual -Wformat=2 -Winit-self -Wlogical-op -Wmissing-declarations -Wmissing-include-dirs -Wredundant-decls -Wswitch-default -Wsuggest-override -Wstrict-null-sentinel -Wsign-promo -Wold-style-cast -Woverloaded-virtual -Wctor-dtor-privacy -Wno-old-style-cast -Wno-cast-align -g -std=c++14 -c -I.. -I. -I./.. -isystem/class/grades/Fall-2018/csci3081/student-repos/PROJ_01_Feedback/repo-weber767/PROJ/src/external/MinGfx/build/install/include -isystem/class/grades/Fall-2018/csci3081/student-repos/PROJ_01_Feedback/repo-weber767/PROJ/src/external/MinGfx/build/install/include/nanovg -isystem/class/grades/Fall-2018/csci3081/student-repos/PROJ_01_Feedback/repo-weber767/PROJ/src/external/MinGfx/build/install/include/MinGfx-1.0  -c -fPIC -o  /class/grades/Fall-2018/csci3081/student-repos/PROJ_01_Feedback/repo-weber767/PROJ/build/obj/flashphoto/tool_blur.o tool_blur.cc
[01m[Ktool_blur.cc:[m[K In constructor ‘[01m[Kimage_tools::ToolBlur::ToolBlur()[m[K’:
[01m[Ktool_blur.cc:24:15:[m[K [01;31m[Kerror: [m[Kbase operand of ‘[01m[K->[m[K’ has non-pointer type ‘[01m[Kimage_tools::ConvolutionFilterBlur[m[K’
   blur_filter_[01;31m[K->[m[Kset_kernel_radius(5);
               [01;31m[K^~[m[K
[01m[Ktool_blur.cc:25:15:[m[K [01;31m[Kerror: [m[Kbase operand of ‘[01m[K->[m[K’ has non-pointer type ‘[01m[Kimage_tools::ConvolutionFilterBlur[m[K’
   blur_filter_[01;31m[K->[m[KCreateKernel();
               [01;31m[K^~[m[K
[01m[Ktool_blur.cc:[m[K In member function ‘[01m[Kvirtual image_tools::ColorData image_tools::ToolBlur::LookupPaintColor(int, int)[m[K’:
[01m[Ktool_blur.cc:45:40:[m[K [01;31m[Kerror: [m[Kbase operand of ‘[01m[K->[m[K’ has non-pointer type ‘[01m[Kimage_tools::ConvolutionFilterBlur[m[K’
   ColorData filter_color = blur_filter_[01;31m[K->[m[KCalculateFilteredPixel(*buffer_,
                                        [01;31m[K^~[m[K
Makefile:109: recipe for target '/class/grades/Fall-2018/csci3081/student-repos/PROJ_01_Feedback/repo-weber767/PROJ/build/obj/flashphoto/tool_blur.o' failed
make[1]: *** [/class/grades/Fall-2018/csci3081/student-repos/PROJ_01_Feedback/repo-weber767/PROJ/build/obj/flashphoto/tool_blur.o] Error 1
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

