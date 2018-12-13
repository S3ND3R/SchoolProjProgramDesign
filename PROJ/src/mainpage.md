Main Page	{#mainpage}
============

Imagetools API
--------------
The imagetools API provides a set of tools for drawing and filtering images on a
 canvas.
<br>
Provided Imagetools Applicatons
-------------------------------
Mia GUI: \ref image_tools::MiaApp <br>
FlashPhoto GUI: \ref image_tools::FlashPhotoApp <br>
Mia Command Line Processor: \ref image_tools::CommandLineProcessor <br>
<br>

High-Level Design
-----------------
\ref page_filter_template
<br>

Coding style
------------
Imagetools follows <a HREF="https://google.github.io/styleguide/cppguide.html"> the Google Style Guide </a> <br>
<p>
Some general coding style guidelines:
  - Naming Conventions
    + Functions are in Pascal case unless they are accessors or mutators.
    + Data members are all lower case, and separated by underscores with a trailing underscore.
    + Variables should have descriptive names that provides self documentation
  - Commenting
    + All functions in the header file that are not accessors or mutators should be commented.
    + All classes should be commented with a description of the class.
    + comments should be added to the code where it is unclear what it's purpose is.
    + Be careful not to over comment
  - Whitespace and Indentation
    + Tabs should not be used, instead use 2 spaces for indentation
    + Always indent functions in a class.
    + Leave no trailing whitespaces in your code.
</p>
<br>

Common Tasks
------------
\ref page_filter <br>

<br><br><br>
<a HREF="../index.html"> home </a>

<!--high-level design-->
<!--\Filter-->
\page page_filter_template Design of the Filters
![](../img/filter_uml.png)

Template Design Principle
-------------------------

<!--adding a filter-->
\page page_filter Adding A Filter
<!--loading an image-->
![](../img/filter_uml.png)
Step 1
------
  Filters in ImageTools provide an automated change to the ColorData of each
pixel that is applied to the entire PixelBuffer. There are two types of filters
 in Imagetools. Filters that are able to calculate their pixel values in place,
such as FilterQuantize, or convolution filters, like ConvolutionFilterBlur, that
require a kernel and a copy of the PixelBuffer to calculate their pixel values.
As shown above, filters that are able to calculate their values in place are
able to inherit directly from Filter, where as the convolution filters will
inherit from ConvolutionFilter. The first step in creating a new filter is
understanding which type of filter you are implementing. <br>
\ref page_filter_in <br>
\ref page_filter_out <br>

<!--In place filters-->
\page page_filter_in Implementing an In Place Filter
Step 2
------

<!--convolution filters-->
\page page_filter_out Implementing a Convolution Filter
Step 2
------
