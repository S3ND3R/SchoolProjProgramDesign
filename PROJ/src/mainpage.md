My Main Page	{#mainpage}
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
How to Expand Imagetools
------------------------
\ref page1 <br>

![](image__editor_8h__incl.png)

\page page1 Adding A Filter
![](classimage__tools_1_1Filter__inherit__graph.png)
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
\ref page2 <br>
\ref page3 <br>

\page page2 Implementing an In Place Filter
Step 2
------

\page page3 Implementing a Convolution Filter
Step 2
------
