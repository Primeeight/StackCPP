#include "gtest/gtest.h"
#include "../../src/Stack/Stack.cpp"

namespace {

    TEST(Stack_Length, Test1_Int) {
        //Setup
        auto stack = new Stack<int>();
        int value = 55;
        //Process
        stack->push(value);
        value = 45;
        stack->push(value);
        //Test
        EXPECT_EQ(2, stack->length());

    }

    TEST(Stack_Length, Test1_String) {
        //Setup
        auto stack = new Stack<std::string>();
        std::string value = "sun";
        std::string value2 = "moon";
        std::string value3 = "stars";
        std::string value4 = "galaxy";
        //Process
        stack->push(value);
        stack->push(value2);
        stack->push(value3);
        stack->push(value4);
        //Test
        EXPECT_EQ(4, stack->length());

    }

}
