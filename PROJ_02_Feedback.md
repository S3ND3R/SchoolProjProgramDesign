### Feedback for Project Iteration 02

Run on December 03, 19:41:56 PM.


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

+ Pass: Ensuring code follows style guide.



+ Pass: Check that make compiles.



+ Pass: Check that file "./build/lib/libimagetools.a" exists.

+ Pass: Check that file "./build/bin/flashphoto" exists.

+ Pass: Check that file "./build/bin/mia" exists.


#### Run Student Tests

+ Pass: Check that file "./build/test/gtests" exists.

+ Fail: Running Student Tests.

<pre>Running main() from gtest_main.cc
Note: Google Test filter = -Instructor*
[==========] Running 10 tests from 9 test cases.
[----------] Global test environment set-up.
[----------] 1 test from FilterThresholdTest
[ RUN      ] FilterThresholdTest.SetsCorrectThreshold
[       OK ] FilterThresholdTest.SetsCorrectThreshold (0 ms)
[----------] 1 test from FilterThresholdTest (0 ms total)

[----------] 1 test from FilterSaturateTest
[ RUN      ] FilterSaturateTest.SetsCorrectSaturationScale
[       OK ] FilterSaturateTest.SetsCorrectSaturationScale (0 ms)
[----------] 1 test from FilterSaturateTest (0 ms total)

[----------] 1 test from FlashPhotoAppTest
[ RUN      ] FlashPhotoAppTest.CanApplyFilters
[       OK ] FlashPhotoAppTest.CanApplyFilters (260 ms)
[----------] 1 test from FlashPhotoAppTest (260 ms total)

[----------] 1 test from FilterBlurRegressionTest
[ RUN      ] FilterBlurRegressionTest.ImageRegressionEquality
filter_blur_regression_unittest.cc:37: Failure
Value of: *expected_buffer_ == *test_buffer_
  Actual: false
Expected: true
[  FAILED  ] FilterBlurRegressionTest.ImageRegressionEquality (880 ms)
[----------] 1 test from FilterBlurRegressionTest (880 ms total)

[----------] 2 tests from ToolPenTest
[ RUN      ] ToolPenTest.HasCorrectName
[       OK ] ToolPenTest.HasCorrectName (0 ms)
[ RUN      ] ToolPenTest.HasCorrectMask
[       OK ] ToolPenTest.HasCorrectMask (0 ms)
[----------] 2 tests from ToolPenTest (0 ms total)

[----------] 1 test from ToolEraserTest
[ RUN      ] ToolEraserTest.HasCorrectName
[       OK ] ToolEraserTest.HasCorrectName (0 ms)
[----------] 1 test from ToolEraserTest (0 ms total)

[----------] 1 test from ToolBlurTest
[ RUN      ] ToolBlurTest.HasCorrectName
[       OK ] ToolBlurTest.HasCorrectName (0 ms)
[----------] 1 test from ToolBlurTest (0 ms total)

[----------] 1 test from ToolChalkTest
[ RUN      ] ToolChalkTest.HasCorrectName
[       OK ] ToolChalkTest.HasCorrectName (0 ms)
[----------] 1 test from ToolChalkTest (0 ms total)

[----------] 1 test from ConvolutionFilterBlurTest
[ RUN      ] ConvolutionFilterBlurTest.SetsCorrectKernelRadius
[       OK ] ConvolutionFilterBlurTest.SetsCorrectKernelRadius (0 ms)
[----------] 1 test from ConvolutionFilterBlurTest (0 ms total)

[----------] Global test environment tear-down
[==========] 10 tests from 9 test cases ran. (1142 ms total)
[  PASSED  ] 9 tests.
[  FAILED  ] 1 test, listed below:
[  FAILED  ] FilterBlurRegressionTest.ImageRegressionEquality

 1 FAILED TEST
</pre>



