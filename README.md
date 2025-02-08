# calculate
一个将字符串形式的表达式转化为计算结果的C++库，类似于Python中的eval()函数

- 运算表达式，输入表达式、模式（rad或deg）和未知数x的值，返回结果字符串
- 支持任意实数，支持运算符：+，-，*，/，^
- 支持无理数pi和e
- 支持函数：abs(),ln(),log(),sqrt(),fac(),三角函数（sin(),cos(),tan()），反三角函数（asin(),acos(),atan()）
- 错误则抛出异常（以const char*字符串表示），注意清空内存！
