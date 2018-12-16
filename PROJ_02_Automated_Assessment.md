### Assessment for Project Iteration 02 - Automated (Graded By: Dan Orban)

#### Total score: _75.3_ / _85_

Run on December 14, 13:16:20 PM.


#### System Files and PROJ Directory Structure

+ Pass: Check that directory "/classes/grades/Fall-2018/csci3081/dtorban/grading-scripts/_proj_materials" exists.

+ Pass: Setup grading environment.



+  _3_ / _3_ : Pass: Check that directory "PROJ" exists.

+  _2_ / _2_ : Pass: Check that directory "PROJ/src/imagetools" exists.

+  _2_ / _2_ : Pass: Check that file "PROJ/src/imagetools/color_data.h" exists.

+  _2_ / _2_ : Pass: Check that file "PROJ/src/imagetools/Makefile" exists.


#### Set up cpplint

+ Pass: Copy directory "cpplint".



+ Pass: Check that directory "cpplint" exists.


#### Set up Project

+ Pass: Change into directory "PROJ".

+ Pass: Setup grading environment.



+  _1_ / _1_ : Pass: Ensuring code follows style guide.



+  _25_ / _25_ : Pass: Check that make compiles.



+  _3_ / _3_ : Pass: Check that file "./build/lib/libimagetools.a" exists.

+  _3_ / _3_ : Pass: Check that file "./build/bin/flashphoto" exists.

+  _3_ / _3_ : Pass: Check that file "./build/bin/mia" exists.

+  _3_ / _3_ : Pass: Check that file "./build/test/gtests" exists.


### Instructor Tests

+ Pass: Change into directory "src/tests/inst_tests".

+ Pass: Check that make compiles.



+ Pass: Change into directory "../../..".

+ Pass: Check that file "./build/test/inst_tests" exists.


#### Testing ImageIO Implementation

+  _2_ / _2_ : Pass: Check that a GoogleTest test passes.
    passes the test: Iteration2Test.ImageLoadingAndSaving.




#### Testing MIA Application

+  _1_ / _1_ : Pass: Check that a GoogleTest test passes.
    passes the test: Iteration2Test.StampToolAdded.



+  _1_ / _1_ : Pass: Check that a GoogleTest test passes.
    passes the test: Iteration2Test.DisplayHelpMessage.



+  _2_ / _2_ : Pass: Check that a GoogleTest test passes.
    passes the test: Iteration2Test.MiaCommandLineCorrect.



+  _0_ / _2_ : Fail: Check that a GoogleTest test passes.
    fails the test: Iteration2Test.MiaCommandLineBadInput.
<pre>
[ RUN      ] Iteration2Test.MiaCommandLineBadInput
iter2_test.cc:95: Failure
Value of: hasHelpMessage(getStdOutOrErr())
  Actual: false
Expected: true
./build/bin/mia -blur 5 should return the help message.</pre>




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
    passes the test: ToolErasureRegressionTest.ImageRegressionEquality.



+ Fail: Check that a GoogleTest test passes.
    timeout occured: FilterBlurRegressionTest.ImageRegressionEquality.
<pre>Running main() from gtest_main.cc
Note: Google Test filter = FilterBlurRegressionTest.ImageRegressionEquality
[==========] Running 1 test from 1 test case.
[----------] Global test environment set-up.
[----------] 1 test from FilterBlurRegressionTest
[ RUN      ] FilterBlurRegressionTest.ImageRegressionEquality
</pre>



+ Fail: Check that a GoogleTest test passes.
    timeout occured: CommandLineProcessorTest.AcceptsSingleCorrectCommand.
<pre>Running main() from gtest_main.cc
Note: Google Test filter = CommandLineProcessorTest.AcceptsSingleCorrectCommand
[==========] Running 1 test from 1 test case.
[----------] Global test environment set-up.
[----------] 1 test from CommandLineProcessorTest
[ RUN      ] CommandLineProcessorTest.AcceptsSingleCorrectCommand
</pre>



+ Fail: Check that a GoogleTest test passes.
    timeout occured: CommandLineProcessorTest.AcceptsMultipleCorrectCommands.
<pre>Running main() from gtest_main.cc
Note: Google Test filter = CommandLineProcessorTest.AcceptsMultipleCorrectCommands
[==========] Running 1 test from 1 test case.
[----------] Global test environment set-up.
[----------] 1 test from CommandLineProcessorTest
[ RUN      ] CommandLineProcessorTest.AcceptsMultipleCorrectCommands
</pre>



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
<pre>Running main() from gtest_main.cc
Note: Google Test filter = FilterMotionBlurRegressionTest.ImageRegressionEquality
[==========] Running 1 test from 1 test case.
[----------] Global test environment set-up.
[----------] 1 test from FilterMotionBlurRegressionTest
[ RUN      ] FilterMotionBlurRegressionTest.ImageRegressionEquality
</pre>



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
    passes the test: FilterChannelsRegressionTest.ImageRegressionEquality.



+ Pass: Check that a GoogleTest test passes.
    passes the test: ToolBlurRegressionTest.ImageRegressionEquality.



+ Pass: Check that a GoogleTest test passes.
    passes the test: ToolChalkRegressionTest.ImageRegressionEquality.



+ Fail: Check that a GoogleTest test passes.
    timeout occured: FilterSharpenRegressionTest.ImageRegressionEquality.
<pre>Running main() from gtest_main.cc
Note: Google Test filter = FilterSharpenRegressionTest.ImageRegressionEquality
[==========] Running 1 test from 1 test case.
[----------] Global test environment set-up.
[----------] 1 test from FilterSharpenRegressionTest
[ RUN      ] FilterSharpenRegressionTest.ImageRegressionEquality
</pre>



+ Pass: Check that a GoogleTest test passes.
    passes the test: FilterQuantizeRegressionTest.ImageRegressionEquality.



+  _12.92_ / _15_ : Fail: 86.11% of the tests passed, but the target is 100%.


### Testing Mutants


#### Testing Pen Tool for failure

+ Pass: At least one test failed for Pen Tool


#### Testing Eraser Tool for failure

+ Pass: At least one test failed for Eraser Tool


#### Testing Stamp Tool for failure

+ Fail: There is no test case for this mutant (since all tests pass).
   - Reason - The stamp tool does not stamp, it slides.


#### Testing Blur Filter for failure

+ Fail: There is no test case for this mutant (since all tests pass).
   - Reason - In Mutant: The radius is 2 less than it is supposed to be.


#### Testing Edge Detector Filter for failure

+ Pass: At least one test failed for Edge Detector Filter


#### Testing Image IO Implementaiton for failure

+ Fail: There is no test case for this mutant (since all tests pass).
   - Reason - In Mutant: Image saving and loading is not working.


#### Results

+  _9.38_ / _15_ : Fail: 50.0% of the tests passed, but the target is 80.0%.

#### Total score: _75.3_ / _85_

