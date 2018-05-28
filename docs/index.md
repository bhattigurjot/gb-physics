# gb-math

## Overview
gb-math is a small C++ math library mainly concerned with vectors and matrices.

## Including in your project
You can download the **gb-math.h** header file from the include directory from [here](https://github.com/bhattigurjot/gb-math). Include this header file in your cpp file as:
```cpp
#include "gb-math.h"
```

## Documentation
You can begin using the library as documented below.
### Vector2 Class
There are 3 types of Vector2 that you can use, i.e. 
* **Vector2i** - 2D Vector of integer
* **Vector2f** - 2D Vector of float 
* **Vector2d** - 2D Vector of double 

You can define Vector2 by yourself as:
```cpp
Vector2<Typename> vec;
```
---
#### Members
> **x**: x value/component of the 2D vector
> 
> **y**: y value/component of the 2D vector

#### __Constructors__
##### Default Constructor with default x and y values as 0
> **Usage**: `Vector2i()`
>
> **Parameters**: `None`
> 
> **Return**: `new Vector2i`

```cpp
// Example for default constructor
Vector2i vec; // vec.x = 0 and vec.y = 0

Vector2i* p_vec = new Vector2i; // p_vec->x = 0 and p_vec->y = 0
```

##### Constructor with values
> **Usage**: `Vector2i(x,y)`
>
> **Parameters**: `value x of the Vector2, value y of the Vector2`
> 
> **Return**: `new Vector2i`

```cpp
// Example for constructor with values
Vector2i vec(3,4); // vec.x = 3 and vec.y = 4

Vector2i* p_vec = new Vector2i(4, 6); // p_vec->x = 4 and p_vec->y = 6
```
#### __Set Values Methods__
##### Set x and y values of vector
> **Usage**: `.Set(x,y)`
>
> **Parameters**: `x and y values`
> 
> **Return**: `None`

```cpp
// Example for setting vector values
Vector2i vec; // vec.x = 0 and vec.y = 0
vec.Set(3,4); // vec.x = 3 and vec.y = 4

Vector2i* p_vec = new Vector2i; // p_vec->x = 0 and p_vec->y = 0
p_vec->Set(4, 6); // p_vec->x = 4 and p_vec->y = 6
```

##### Set x value of vector
> **Usage**: `.SetX(x)`
>
> **Parameters**: `x value`
> 
> **Return**: `None`

```cpp
// Example for setting x value of the vector
Vector2i vec; // vec.x = 0 and vec.y = 0
vec.SetX(3); // vec.x = 3 and vec.y = 0

Vector2i* p_vec = new Vector2i; // p_vec->x = 0 and p_vec->y = 0
p_vec->SetX(4); // p_vec->x = 4 and p_vec->y = 0
```

##### Set y value of vector
> **Usage**: `.SetY(y)`
>
> **Parameters**: `y value`
> 
> **Return**: `None`

```cpp
// Example for setting y value of the vector
Vector2i vec; // vec.x = 0 and vec.y = 0
vec.SetY(4); // vec.x = 0 and vec.y = 4

Vector2i* p_vec = new Vector2i; // p_vec->x = 0 and p_vec->y = 0
p_vec->SetY(6); // p_vec->x = 0 and p_vec->y = 6
```
---
#### __Manipulation__
##### Magnitude or Length of vector
> **Usage**: `.Magnitude()`
>
> **Parameters**: `None`
> 
> **Return**: `Scaler value of magnitude of the vector`

```cpp
// Example for getting the magnitude/length the vector
Vector2f vec(4.0f, 3.0f); // vec.x = 4.0f and vec.y = 3.0f
vec.Magnitude(); // 5.0f
```

##### Normalize vector
> **Usage**: `.Normalize()`
>
> **Parameters**: `None`
> 
> **Return**: `None`

```cpp
// Example for normalizing the vector
Vector2f vec(4.0f, 3.0f); // vec.x = 4.0f and vec.y = 3.0f
vec.Normalize(); // vec.x = 0.8f and vec.y = 0.6f
```
---
---
