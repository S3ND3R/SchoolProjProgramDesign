### Feedback for Project Iteration 01

Run on November 12, 10:06:39 AM.


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
color_data.cc:74:  Namespace should be terminated with "// namespace image_tools"  [readability/namespace] [5]
flashphoto_app.cc:94:  Should have a space between // and comment  [whitespace/comments] [4]
pixel_buffer.cc:136:  Redundant blank line at the end of a code block should be deleted.  [whitespace/blank_line] [3]
pixel_buffer.cc:26:  Failed to find complete declaration of namespace image_tools  [build/namespaces] [5]
tool_blur.cc:71:  Namespace should be terminated with "// namespace image_tools"  [readability/namespace] [5]
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
Total errors found: 5
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
==== Auto-Generating Dependencies for tool_highlighter.cc. ====
/soft/gcc/7.1.0/Linux_x86_64/bin/g++ -MM -MF /class/grades/Fall-2018/csci3081/student-repos/PROJ_01_Feedback/repo-weber767/PROJ/build/obj/flashphoto/tool_highlighter.d -MP -MT /class/grades/Fall-2018/csci3081/student-repos/PROJ_01_Feedback/repo-weber767/PROJ/build/obj/flashphoto/tool_highlighter.o -W -Werror -Wall -Wextra -fdiagnostics-color=always -Wfloat-equal -Wshadow -Wcast-align -Wcast-qual -Wformat=2 -Winit-self -Wlogical-op -Wmissing-declarations -Wmissing-include-dirs -Wredundant-decls -Wswitch-default -Wsuggest-override -Wstrict-null-sentinel -Wsign-promo -Wold-style-cast -Woverloaded-virtual -Wctor-dtor-privacy -Wno-old-style-cast -Wno-cast-align -g -std=c++14 -c -I.. -I. -I./.. -isystem/class/grades/Fall-2018/csci3081/student-repos/PROJ_01_Feedback/repo-weber767/PROJ/src/external/MinGfx/build/install/include -isystem/class/grades/Fall-2018/csci3081/student-repos/PROJ_01_Feedback/repo-weber767/PROJ/src/external/MinGfx/build/install/include/nanovg -isystem/class/grades/Fall-2018/csci3081/student-repos/PROJ_01_Feedback/repo-weber767/PROJ/src/external/MinGfx/build/install/include/MinGfx-1.0 tool_highlighter.cc
==== Compiling tool_highlighter.cc into /class/grades/Fall-2018/csci3081/student-repos/PROJ_01_Feedback/repo-weber767/PROJ/build/obj/flashphoto/tool_highlighter.o. ====
/soft/gcc/7.1.0/Linux_x86_64/bin/g++ -fopenmp -W -Werror -Wall -Wextra -fdiagnostics-color=always -Wfloat-equal -Wshadow -Wcast-align -Wcast-qual -Wformat=2 -Winit-self -Wlogical-op -Wmissing-declarations -Wmissing-include-dirs -Wredundant-decls -Wswitch-default -Wsuggest-override -Wstrict-null-sentinel -Wsign-promo -Wold-style-cast -Woverloaded-virtual -Wctor-dtor-privacy -Wno-old-style-cast -Wno-cast-align -g -std=c++14 -c -I.. -I. -I./.. -isystem/class/grades/Fall-2018/csci3081/student-repos/PROJ_01_Feedback/repo-weber767/PROJ/src/external/MinGfx/build/install/include -isystem/class/grades/Fall-2018/csci3081/student-repos/PROJ_01_Feedback/repo-weber767/PROJ/src/external/MinGfx/build/install/include/nanovg -isystem/class/grades/Fall-2018/csci3081/student-repos/PROJ_01_Feedback/repo-weber767/PROJ/src/external/MinGfx/build/install/include/MinGfx-1.0  -c -fPIC -o  /class/grades/Fall-2018/csci3081/student-repos/PROJ_01_Feedback/repo-weber767/PROJ/build/obj/flashphoto/tool_highlighter.o tool_highlighter.cc
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
[01m[Kpixel_buffer.cc:106:1:[m[K [01;31m[Kerror: [m[Kversion control conflict marker in file
 [01;31m[K<<<<<<<[m[K HEAD
 [01;31m[K^~~~~~~[m[K
[01m[Kpixel_buffer.cc:[m[K In function ‘[01m[Kbool image_tools::operator==(const image_tools::PixelBuffer&, const image_tools::PixelBuffer&)[m[K’:
[01m[Kpixel_buffer.cc:110:1:[m[K [01;31m[Kerror: [m[Kversion control conflict marker in file
 [01;31m[K=======[m[K
 [01;31m[K^~~~~~~[m[K
[01m[Kpixel_buffer.cc:110:3:[m[K [01;31m[Kerror: [m[Kexpected primary-expression before ‘[01m[K==[m[K’ token
 ==[01;31m[K==[m[K===
   [01;31m[K^~[m[K
[01m[Kpixel_buffer.cc:110:5:[m[K [01;31m[Kerror: [m[Kexpected primary-expression before ‘[01m[K==[m[K’ token
 ====[01;31m[K==[m[K=
     [01;31m[K^~[m[K
[01m[Kpixel_buffer.cc:110:7:[m[K [01;31m[Kerror: [m[Kexpected primary-expression before ‘[01m[K=[m[K’ token
 ======[01;31m[K=[m[K
       [01;31m[K^[m[K
[01m[Kpixel_buffer.cc:111:1:[m[K [01;31m[Kerror: [m[Kexpected primary-expression before ‘[01m[Kvoid[m[K’
 [01;31m[Kvoid[m[K PixelBuffer::LoadFromFile(const std::string &filename) {
 [01;31m[K^~~~[m[K
[01m[Kpixel_buffer.cc:116:61:[m[K [01;31m[Kerror: [m[Ka function-definition is not allowed here before ‘[01m[K{[m[K’ token
 bool operator==(const PixelBuffer& a, const PixelBuffer& b) [01;31m[K{[m[K
                                                             [01;31m[K^[m[K
[01m[Kpixel_buffer.cc:133:61:[m[K [01;31m[Kerror: [m[Ka function-definition is not allowed here before ‘[01m[K{[m[K’ token
 bool operator!=(const PixelBuffer &a, const PixelBuffer &b) [01;31m[K{[m[K
                                                             [01;31m[K^[m[K
[01m[Kpixel_buffer.cc:137:1:[m[K [01;31m[Kerror: [m[Kno return statement in function returning non-void [[01;31m[K-Werror=return-type[m[K]
 [01;31m[K}[m[K /* namespace image_tools */
 [01;31m[K^[m[K
[01m[Kpixel_buffer.cc:109:36:[m[K [01;31m[Kerror: [m[Kunused parameter ‘[01m[Ka[m[K’ [[01;31m[K-Werror=unused-parameter[m[K]
 bool operator==(const PixelBuffer &[01;31m[Ka[m[K, const PixelBuffer &b) {
                                    [01;31m[K^[m[K
[01m[Kpixel_buffer.cc:109:58:[m[K [01;31m[Kerror: [m[Kunused parameter ‘[01m[Kb[m[K’ [[01;31m[K-Werror=unused-parameter[m[K]
 bool operator==(const PixelBuffer &a, const PixelBuffer &[01;31m[Kb[m[K) {
                                                          [01;31m[K^[m[K
[01m[Kpixel_buffer.cc:[m[K At global scope:
[01m[Kpixel_buffer.cc:137:1:[m[K [01;31m[Kerror: [m[Kexpected ‘[01m[K}[m[K’ at end of input
 [01;31m[K}[m[K /* namespace image_tools */
 [01;31m[K^[m[K
cc1plus: all warnings being treated as errors
Makefile:109: recipe for target '/class/grades/Fall-2018/csci3081/student-repos/PROJ_01_Feedback/repo-weber767/PROJ/build/obj/flashphoto/pixel_buffer.o' failed
make[1]: *** [/class/grades/Fall-2018/csci3081/student-repos/PROJ_01_Feedback/repo-weber767/PROJ/build/obj/flashphoto/pixel_buffer.o] Error 1
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

