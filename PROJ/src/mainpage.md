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
\ref page_filter_template <br>
\ref page_imgeditor_mvc <br>
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
<!--Filter-->
\page page_filter_template Design of the Filters
![](../img/filter_uml.png)

Template Design Method
-------------------------
The template method provides the backbone of the filters. A key element of the template method is that a base class, often abstract, provides a template method that is always called and will be used by all inherited subclasses. The processing of the template method will change depending on which subclass is instantiated. In Filter the ApplyToBuffer() method provides the template for implementing the filters. There is a hook method in Filter, can_calculate_in_place, that is by default set to return true, but if a ConvolutionFilter is instantiated the method returns false. This hook changes the way ApplyToBuffer() runs so that it can properly implement convolution filters by creating a copy of the current PixelBuffer and properly setting up and tearing down the kernel. <br>

Polymorphism
-------------------------
All filters will implement the abstract method CalculateFilteredPixel() in their own way. The ApplyToBuffer() method takes advantage of this polymorphic quality to be able to statically implement many different versions of CalculateFilteredPixel() to create various filters.

ConvolutionFilter is itself an abstract class that provides the abstract method CreateKernel(), as can be seen above it depends on each subclass to define their own version of the method.

How Filters Work
----------------
-# A specific filter is instantiated
-# The necessary data members have their value set
-# A call to ApplyToBuffer is made

<!--ImageEditor-->
\page page_imgeditor_mvc Design of ImageEditor
![](../img/ImageEditor_uml.png)

Model-view-controller Design Method
-----------------------------------
The ImageEditor class provides the methods that power the imagetools API when used by other applications. It is built to take advantage of the model-view-controller design method. The MVC method breaks the program into components that all interact with each other to run an application. ImageEditor is the model component in our API, because it provides the logic of the application and handles all direct interaction with the data. FlashphotoApp, MiaApp, or any application that expands the API acts as the controller component. They will take in input from the view component, mingfx, and send that to the model component so it can change the data. mingfx then will change to reflect this new state.

How to Use ImageEditor
----------------------
ImageEditor provides the methods that an application calls to apply changes to the PixelBuffer. As you can see in the UML above, Mia has a declared ImageEditor data member. Mia can set, save, load, draw, and filter entirely through that instance of Image Editor.

<!--adding a filter-->
\page page_filter Adding A Filter
<!--loading an image-->
![](../img/filter_uml.png)
Step 1
------
  Filters in ImageTools provide an automated change to the ColorData of each
pixel which is applied to the entire PixelBuffer. There are two types of filters in Imagetools. Filters that are able to calculate their pixel values in place, such as FilterQuantize, or convolution filters, like ConvolutionFilterBlur, that require a kernel and a copy of the PixelBuffer to calculate their pixel values.
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
To create an in-place filter you will need to build the subclass so it implements the CalculateFilteredPixel method. Filter is an abstract class, so that method is declared but not implemented, so you will not able to inherit it from Filter. All filters are applied through the ApplyToBuffer method that they inherit from Filter, so they should not be designed to apply a change to the PixelBuffer within the subclass.

<!--convolution filters-->
\page page_filter_out Implementing a Convolution Filter
Step 2
------
To create a convolution filter the subclass must inherit from the Abstract ConvolutionFilter class. It must include an implementation of the abstract CreateKernel method in the parent class that is currently declared but not implemented. CreateKernel will build a Floatmatrix that is used to apply the filter. By inheriting from ConvolutionFilter the Filter class will automatically handle creating a PixelBuffer copy of the current buffer, and  calling SetupFilter and CleanupFilter methods, which are already defined in ConvolutionFilter. CalculateFilteredPixel is already defined and implemented by ConvolutionFilter, so all the created filter needs to do is properly build the kernel that will be needed.
