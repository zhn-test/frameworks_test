#include <iostream>
#include <string>

class MyClass {
public:
    MyClass(const std::string& name) : name_(name) {}

    void printMessage() const {
        std::cout << "Hello, " << name_ << "!" << std::endl;
    }

private:
    std::string name_;
};

int main() {
    MyClass obj("World");
    obj.printMessage();
    return 0;
}
