#include<iostream>
using namespace std; 
#include<gtest/gtest.h>

#include "demo.h"

TEST(AdderTest, IsAdderOK)
{
    ASSERT_TRUE(adder(1, 2) == 3) << "adder(1, 2)=3";  //ASSERT_TRUE期待结果是true,operator<<输出一些自定义的信息
}
