### Feedback for Project Iteration 01

Run on November 07, 14:42:01 PM.


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
tool_blur.cc:35:  Missing username in TODO; it should look like "// TODO(my_username): Stuff."  [readability/todo] [2]
tool_blur.cc:43:  Missing username in TODO; it should look like "// TODO(my_username): Stuff."  [readability/todo] [2]
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



+ Pass: Check that make compiles.




#### Run Student Tests

+ Pass: Running Student Tests.



+ Pass: Check that a GoogleTest test passes.
    passes the test: FlashPhotoAppTest.GetToolTest.



+ Pass: Check that a GoogleTest test passes.
    passes the test: ToolPenTest.HasCorrectName.



+ Pass: Check that a GoogleTest test passes.
    passes the test: InstructorToolChalkTest.HasCorrectName.



+ Pass: Check that a GoogleTest test passes.
    passes the test: InstructorToolEraserTest.HasCorrectName.



+ Pass: Check that a GoogleTest test passes.
    passes the test: InstructorToolEraserTest.HasCorrectMask.



+ Pass: Check that a GoogleTest test passes.
    passes the test: InstructorToolEraserTest.TestStartStroke.



+ Pass: Check that a GoogleTest test passes.
    passes the test: InstructorToolSprayCanTest.HasCorrectName.



+ Pass: Check that a GoogleTest test passes.
    passes the test: InstructorToolSprayCanTest.CanSpray.



+ Pass: Check that a GoogleTest test passes.
    passes the test: InstructorToolSprayCanTest.ContinuesToSprayOnDrag.



+ Pass: Check that a GoogleTest test passes.
    passes the test: InstructorToolSprayCanTest.ContinuesToSprayStationary.



