// Developed with Unreal Engine 4.27.2 by Douglas Neiva


// DEFAULT COMMENT
    // >

// This source file will automatically be loaded when its header file is included by other files


#include "Default_Empty_Class.h"    // Preprocessor directive to include the class's header file

int Default_Empty_Class::ClassCount = 0;    // Initialization (and description) of the 'ClassCount' variable (object counter)

Default_Empty_Class::Default_Empty_Class()    // Definition of the 'constructor' class function
                                              // (fully-qualified with the 'scope resolution' operator)
{
    ClassCount++;
}

Default_Empty_Class::~Default_Empty_Class()    // Definition of the 'destructor' class function
                                               // (fully-qualified with the 'scope resolution' operator)
{
    ClassCount--;
}
