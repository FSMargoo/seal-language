<div align=center>
    <image src="./images/icon.png"/ width="100">
    <h1>Seal The Program Language</h1>
</div>

## What is seal
Seal is a program language based on C++, writing seal code is equivalent to writing C++ code, seal dose not prviode a compiler, instead of compiling, your seal code will be translated into C++ code and the C++ code will be compiled by C++ compiler, like this:
```
@from std

interface my_interface {
    fn method() -> var:void;
    fn default_method() -> var:int { return 4; }
}

class inherf_class <- interface my_interface {
    @public
    inherf_class() => value = 4;

    @public
    fn class_method() {
        foreach (i in 0 to (default_method())) {
            std.io.print(' ', i);
        }
        std.io.print('\n');
    }

    @override
    fn method() -> var:void {
        std.io.print(value, "\n");
        std.io.print("Hello Seal!\n");
    }

    @private
    var:int value;
}

fn main() -> var:int {
    var instance = inherf_class();
    instance.method();
    instance.class_method();

    return 0;
}
```
It will be translated into C++ code like this:
```cpp
#include "std_.hpp"
class my_interface {
public: virtual void method() = 0;
public: virtual int default_method()
{
return 4;
}
};

class inherf_class : public my_interface 
{
public: inherf_class(){ value=4; }
public: auto class_method()
{
for (auto i = 0; i < (default_method()); ++i)
{
std_::io.print(' ',i);
}
std_::io.print('\n');
}
public: void method() override
{
std_::io.print(value,"\n");
std_::io.print("Hello Seal!\n");
}
private: int value;

};
int main()
{
auto instance = inherf_class();
instance.method();
instance.class_method();
instance.method();
return 0;
}

```
Then the C++ code will be compiled by C++ compiler like clang, then out the result.

## Why Seal
Seal likes a wrapper to C++ language, or the higher level of a Marco? If you want a C++ code result and have a simpler(May not very simple) code experience, you can try Seal, seal may leave a good exprenicen when you writing a small project, and you can include your cpp code in seal as well, just like this:
```
@from std

fn main() {
    @cpp cbegin
        printf("Hello World!");
    cend;
    return 0;
}
```

## Example
All of the seal language example are all collect in the example folder.

## How to use
Download the release from the release page and run the command like this:
```
seal -m main.se -s
```

## Notice
Seal is still in developing, so it will may exsits some bugs and imperfections, if you have any problem you can `goto issuesPages;` and `issues.ask(yourProblem)` :)