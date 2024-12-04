class MyWebKitClass {
public:
    // 构造函数的参数有合适的空格间隔，且初始化列表与参数对齐
    MyWebKitClass(int param1, const std::string& param2) : param1_(param1), param2_(param2) {}

    // 成员函数声明，参数、返回值与函数名之间空格规范，函数体如果简短可放在一行
    int getParam1() const { return param1_; }

    // 对于稍长一点的函数体，大括号另起一行，函数体内部有合适缩进
    void doSomethingComplex() {
        std::vector<int> numbers = {1, 2, 3, 4, 5};
        std::for_each(numbers.begin(), numbers.end(), [](int num) {
            std::cout << num << " ";
        });
        std::cout << std::endl;
    }

private:
    int param1_;
    std::string param2_;
};
