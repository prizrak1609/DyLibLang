# DyLibLang

## Description
Programming language that is designed to link different dynamic libraries.

## Example
```
// lib.so contains symbolic_variable_name and symbolic_function_name
load lib.do as lib_name
variable : int = lib_name.symbolic_variable_name 
variablestr : std::string = lib_name.symbolic_string_variable_name 
function: void(int) = lib_name.symbolic_function_name

// lib1 contains sum_function and some_variable_with_value_name
load lib1.so
// all symbols from lib1 are available here
function(some_variable_with_value_name) // correct call

lib1func : void(void(int)) = lib1.function
lib1func(function) // incorrect call

result : int = sum_function(variable, some_variable_with_value_name)
function(result)

unload lib_name
// variable and function are invalid now

unload lib1.so
// sum_function and some_variable_with_value_name are invalid now
```
