### Feedback for Project Iteration 02

Run on December 12, 16:10:03 PM.


#### System Files and PROJ Directory Structure

+ Pass: Check that directory "/classes/grades/Fall-2018/csci3081/dtorban/grading-scripts/_proj_materials" exists.

+ Pass: Setup grading environment.



+ Pass: Check that directory "PROJ" exists.

+ Pass: Check that directory "PROJ/src/imagetools" exists.

+ Pass: Check that file "PROJ/src/imagetools/color_data.h" exists.

+ Pass: Check that file "PROJ/src/imagetools/Makefile" exists.


#### Set up cpplint

+ Pass: Copy directory "cpplint".



+ Pass: Check that directory "cpplint" exists.


#### Set up Project

+ Pass: Change into directory "PROJ".

+ Pass: Setup grading environment.



+ Pass: Ensuring code follows style guide.



+ Pass: Check that make compiles.



+ Pass: Check that file "./build/lib/libimagetools.a" exists.

+ Pass: Check that file "./build/bin/flashphoto" exists.

+ Pass: Check that file "./build/bin/mia" exists.

+ Pass: Check that file "./build/test/gtests" exists.


### Instructor Tests

+ Pass: Change into directory "src/tests/inst_tests".

+ Pass: Check that make compiles.



+ Pass: Change into directory "../../..".

+ Pass: Check that file "./build/test/inst_tests" exists.


#### Testing ImageIO Implementation

+ Pass: Check that a GoogleTest test passes.
    passes the test: Iteration2Test.ImageLoadingAndSaving.




#### Testing MIA Application

+ Pass: Check that a GoogleTest test passes.
    passes the test: Iteration2Test.StampToolAdded.



+ Fail: Check that a GoogleTest test passes.
    fails the test: Iteration2Test.DisplayHelpMessage.
<pre>
[ RUN      ] Iteration2Test.DisplayHelpMessage
iter2_test.cc:102: Failure
Value of: hasHelpMessage(output)
  Actual: false
Expected: true
mia -h should return the help message.</pre>



+ Pass: Check that a GoogleTest test passes.
    passes the test: Iteration2Test.MiaCommandLineCorrect.



+ Fail: Check that a GoogleTest test passes.
    fails the test: Iteration2Test.MiaCommandLineBadInput.
<pre>
[ RUN      ] Iteration2Test.MiaCommandLineBadInput
iter2_test.cc:95: Failure
Value of: hasHelpMessage(getStdOutOrErr())
  Actual: false
Expected: true
./build/bin/mia -blur 5 should return the help message.
iter2_test.cc:95: Failure
Value of: hasHelpMessage(getStdOutOrErr())
  Actual: false
Expected: true
./build/bin/mia src/tests/inst_tests/input.png edgedetect output.png should return the help message.
iter2_test.cc:95: Failure
Value of: hasHelpMessage(getStdOutOrErr())
  Actual: false
Expected: true
./build/bin/mia src/tests/inst_tests/input.png -edgedetect 5 output.png should return the help message.
iter2_test.cc:95: Failure
Value of: hasHelpMessage(getStdOutOrErr())
  Actual: false
Expected: true
./build/bin/mia src/tests/inst_tests/input.png -blur abc output.png should return the help message.
iter2_test.cc:95: Failure
Value of: hasHelpMessage(getStdOutOrErr())
  Actual: false
Expected: true
./build/bin/mia src/tests/inst_tests/input.png -edgedetect -blur 1 -blur 2 -motionblur-n-s abc -edgedetect output.png should return the help message.</pre>




### Run Student Tests

+ Pass: Check that file "./build/test/gtests" exists.

+ Pass: Get all google tests.
    36 tests found.




#### Results

+ Pass: Check that a GoogleTest test passes.
    passes the test: FilterThresholdTest.SetsCorrectThreshold.



+ Pass: Check that a GoogleTest test passes.
    passes the test: FilterSaturateTest.SetsCorrectSaturationScale.



+ Pass: Check that a GoogleTest test passes.
    passes the test: FlashPhotoAppTest.CanApplyFilters.



+ Pass: Check that a GoogleTest test passes.
    passes the test: FilterQuantizeRegressionTest.ImageRegressionEquality.



+ Fail: Check that a GoogleTest test passes.
    timeout occured: FilterBlurRegressionTest.ImageRegressionEquality.
Running main() from gtest_main.cc
Note: Google Test filter = FilterBlurRegressionTest.ImageRegressionEquality
[==========] Running 1 test from 1 test case.
[----------] Global test environment set-up.
[----------] 1 test from FilterBlurRegressionTest
[ RUN      ] FilterBlurRegressionTest.ImageRegressionEquality




+ Fail: Check that a GoogleTest test passes.
    timeout occured: CommandLineProcessorTest.AcceptsSingleCorrectCommand.
Running main() from gtest_main.cc
Note: Google Test filter = CommandLineProcessorTest.AcceptsSingleCorrectCommand
[==========] Running 1 test from 1 test case.
[----------] Global test environment set-up.
[----------] 1 test from CommandLineProcessorTest
[ RUN      ] CommandLineProcessorTest.AcceptsSingleCorrectCommand




+ Fail: Check that a GoogleTest test passes.
    timeout occured: CommandLineProcessorTest.AcceptsMultipleCorrectCommands.
Running main() from gtest_main.cc
Note: Google Test filter = CommandLineProcessorTest.AcceptsMultipleCorrectCommands
[==========] Running 1 test from 1 test case.
[----------] Global test environment set-up.
[----------] 1 test from CommandLineProcessorTest
[ RUN      ] CommandLineProcessorTest.AcceptsMultipleCorrectCommands




+ Pass: Check that a GoogleTest test passes.
    passes the test: CommandLineProcessorTest.RejectsSingleIncorrectCommand.



+ Pass: Check that a GoogleTest test passes.
    passes the test: CommandLineProcessorTest.RejectsMissingDashCommand.



+ Pass: Check that a GoogleTest test passes.
    passes the test: CommandLineProcessorTest.RejectsBadValCommand.



+ Pass: Check that a GoogleTest test passes.
    passes the test: CommandLineProcessorTest.RejectsOutOfBoundsValCommand.



+ Pass: Check that a GoogleTest test passes.
    passes the test: CommandLineProcessorTest.RejectsEgedetecWithValCommand.



+ Pass: Check that a GoogleTest test passes.
    passes the test: CommandLineProcessorTest.RejectsMissingValCommand.



+ Pass: Check that a GoogleTest test passes.
    passes the test: CommandLineProcessorTest.RejectsMissingInputFileValCommand.



+ Pass: Check that a GoogleTest test passes.
    passes the test: CommandLineProcessorTest.RejectsIncorrectOutputFileValCommand.



+ Pass: Check that a GoogleTest test passes.
    passes the test: CommandLineProcessorTest.RejectsIncorrectInputFileValCommand.



+ Pass: Check that a GoogleTest test passes.
    passes the test: ToolSprayCanRegressionTest.ImageRegressionEquality.



+ Fail: Check that a GoogleTest test passes.
    timeout occured: FilterMotionBlurRegressionTest.ImageRegressionEquality.
Running main() from gtest_main.cc
Note: Google Test filter = FilterMotionBlurRegressionTest.ImageRegressionEquality
[==========] Running 1 test from 1 test case.
[----------] Global test environment set-up.
[----------] 1 test from FilterMotionBlurRegressionTest
[ RUN      ] FilterMotionBlurRegressionTest.ImageRegressionEquality




+ Pass: Check that a GoogleTest test passes.
    passes the test: FilterThresholdRegressionTest.ImageRegressionEquality.



+ Pass: Check that a GoogleTest test passes.
    passes the test: FilterSaturateRegressionTest.ImageRegressionEquality.



+ Pass: Check that a GoogleTest test passes.
    passes the test: ToolPenTest.HasCorrectName.



+ Pass: Check that a GoogleTest test passes.
    passes the test: ToolPenTest.HasCorrectMask.



+ Pass: Check that a GoogleTest test passes.
    passes the test: ToolCalligraphyPenRegressionTest.ImageRegressionEquality.



+ Pass: Check that a GoogleTest test passes.
    passes the test: ToolStampRegressionTest.ImageRegressionEquality.



+ Pass: Check that a GoogleTest test passes.
    passes the test: ToolEraserTest.HasCorrectName.



+ Pass: Check that a GoogleTest test passes.
    passes the test: ToolHighlighterRegressionTest.ImageRegressionEquality.



+ Pass: Check that a GoogleTest test passes.
    passes the test: ToolBlurTest.HasCorrectName.



+ Pass: Check that a GoogleTest test passes.
    passes the test: ToolChalkTest.HasCorrectName.



+ Pass: Check that a GoogleTest test passes.
    passes the test: FilterEdgeRegressionTest.ImageRegressionEquality.



+ Pass: Check that a GoogleTest test passes.
    passes the test: ToolPenRegressionTest.ImageRegressionEquality.



+ Pass: Check that a GoogleTest test passes.
    passes the test: ConvolutionFilterBlurTest.SetsCorrectKernelRadius.



+ Pass: Check that a GoogleTest test passes.
    passes the test: ToolErasureRegressionTest.ImageRegressionEquality.



+ Pass: Check that a GoogleTest test passes.
    passes the test: ToolBlurRegressionTest.ImageRegressionEquality.



+ Pass: Check that a GoogleTest test passes.
    passes the test: ToolChalkRegressionTest.ImageRegressionEquality.



+ Fail: Check that a GoogleTest test passes.
    timeout occured: FilterSharpenRegressionTest.ImageRegressionEquality.
Running main() from gtest_main.cc
Note: Google Test filter = FilterSharpenRegressionTest.ImageRegressionEquality
[==========] Running 1 test from 1 test case.
[----------] Global test environment set-up.
[----------] 1 test from FilterSharpenRegressionTest
[ RUN      ] FilterSharpenRegressionTest.ImageRegressionEquality




+ Pass: Check that a GoogleTest test passes.
    passes the test: FilterChannelsRegressionTest.ImageRegressionEquality.



+ Fail: 86.11% of the tests passed, but the target is 100%.

