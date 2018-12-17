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
\ref page_imgeditor_mvc <br>
\ref page_filter_template <br>
\ref page_tool_ <br>
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

<!-- tool design -->
\page page_tool_ Design of the Tools
![](../img/tool_uml.png)
Factory method
--------------
Tool in ImageTools relies on the factory method when constructing tool objects. All subclasses of Tool use the method CreateMask to create the FloatMatrix that controls how they affect the canvas. This method functions in the factory design method, which is a method that allows the base class to not have to specify the specific type of object being created. Instead the subclass passes their own specification to the MaskFactory that returns the appropriate mask for that subclass.

```
/** This factory is used to create masks used by image editing tools.  Some of
 the masks are used by more than one tool. */
class MaskFactory {
 public:
  static FloatMatrix* CreateConstantMask(float radius);

  static FloatMatrix* CreateOvalMask(float radius, float angle_in_deg,
                                     float ratio);

  static FloatMatrix* CreateLinearFalloffMask(float radius);

  static FloatMatrix* CreateBullseyeMask(float radius, float linewidth);
};

```

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
```
1. #include "imagetools/pixel_buffer.h"
2. #include "imagetools/color_data.h"
3. #include "imagetools/filter.h"
4.
5. namespace image_tools {
6. /**
7. explain class...*/
8. class FilterChannels : public Filter {
9.  public:
10.  FilterChannels();
11.
12.  virtual ~FilterChannels();
13.
14.  /**
15.  calculates the color data for a pixel on each individual RGB
16.  channel by a scale value*/
17.  ColorData CalculateFilteredPixel(const PixelBuffer &buffer, int x,
18.                                  int y) override;
19.
20.  }
21.
22.  private:
23.  // add needed data members...
24. };
25. } // namespace image_tools
```
To create an in-place filter you will need to build the subclass so it inherits from Filter, this is done on  line 8 by adding public Filter, and by including the Filter header file. The new subclass must implement the CalculateFilteredPixel method. Filter is an abstract class, so that method is declared but not implemented, which means you will not be able to inherit it from Filter. All filters are applied through the ApplyToBuffer method that they inherit from Filter, so they should not be designed to apply a change to the PixelBuffer from within the subclass. The new filter should be in the namespace image_tools.

<!--convolution filters-->
\page page_filter_out Implementing a Convolution Filter
Step 2
------
```
1. #include "imagetools/float_matrix.h"
2. #include "imagetools/convolution_filter.h"
3.
4. namespace image_tools {
5. /**
6. This convolution blur filter applies a gaussina blur filter to the
7. current PixelBuffer .*/
8. class ConvolutionFilterBlur : public ConvolutionFilter {
9.  public:
10.  ConvolutionFilterBlur();
11.
12.  virtual ~ConvolutionFilterBlur();
13.
14.  /**
15.  Convolution Filter Blur kernel applies gaussian equation for each
16.  value in the kernel.*/
17.  FloatMatrix *CreateKernel() override;
18. };
19.
20. } // namespace image_tools

```
To create a convolution filter the subclass must inherit from the Abstract ConvolutionFilter class, this is done by including the ConvolutionBlur header file, and adding public ConvolutionFilter, as seen on line 8. It must include an implementation of the abstract CreateKernel method in the parent class that is currently declared but not implemented. CreateKernel will build a Floatmatrix that is used to apply the filter. By inheriting from ConvolutionFilter the Filter class will automatically handle creating a PixelBuffer copy of the current buffer, and  calling SetupFilter and CleanupFilter methods, which are already defined in ConvolutionFilter. CalculateFilteredPixel is already defined and implemented by ConvolutionFilter, so all the created filter needs to do is properly build the kernel that will be needed. Filters should be within the namespace image_tools.
